// SpartaPawn.cpp
#include "SpartaPawn.h"
#include "SpartaPlayerController.h"
#include "EnhancedInputComponent.h"
#include "IEditableSkeleton.h"

// Sets default values
ASpartaPawn::ASpartaPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	// 캡슐 컴포넌트 설정
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetCapsuleHalfHeight(68.141014f);
	Capsule->SetCapsuleRadius(68.141014f);
	SetRootComponent(Capsule);
	Capsule->SetSimulatePhysics(false);
	Capsule->SetCollisionProfileName(TEXT("Pawn"));
	
	ConstructorHelpers::FObjectFinder<USkeletalMesh> SkeletalAsset(TEXT("/Game/Service_Drone/MESHES/S-DRONE/S-Drone_MESH.S-Drone_MESH"));
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(Capsule);
	SkeletalMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -130.0));
	SkeletalMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	if (SkeletalAsset.Object)
	{
		SkeletalMesh->SetSkeletalMeshAsset(SkeletalAsset.Object);
	}
	SkeletalMesh->SetSimulatePhysics(false);

	// 카메라 설정
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Capsule);
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	SpringArm->bUsePawnControlRotation = false;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

	// 움직임 변수
	MovementSpeed = 1080.0f;
	FlightSpeed = 580.0f;
	RotationRate = 150.0f;
	Gravity = -490.0f;
}

void ASpartaPawn::BeginPlay()
{
	Super::BeginPlay();
}

void ASpartaPawn::Tick(float DeltaTime)
{
	CurrentVelocity = GetVelocity();
	
	CheckAir();
	Super::Tick(DeltaTime);
	if (bIsAir)
	{
		GravityVelocity.Z = FMath::Max(GravityVelocity.Z + Gravity * DeltaTime, Gravity);
	}
	else
	{
		GravityVelocity.Z = 0.0f;
	}
		
	FVector NewLocation = GetActorLocation() + (GravityVelocity * DeltaTime);
	SetActorLocation(NewLocation, true);
}

// 입력 설정
void ASpartaPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ASpartaPlayerController* PlayerController = Cast<ASpartaPlayerController>(GetController()))
		{
			EnhancedInput->BindAction(PlayerController->MoveFowardAction, ETriggerEvent::Triggered, this, &ASpartaPawn::MoveFoward);
			EnhancedInput->BindAction(PlayerController->MoveRightAction, ETriggerEvent::Triggered, this, &ASpartaPawn::MoveRight);
			EnhancedInput->BindAction(PlayerController->MoveUpDownAction, ETriggerEvent::Triggered, this, &ASpartaPawn::MoveUpDown);
			EnhancedInput->BindAction(PlayerController->PitchInput, ETriggerEvent::Triggered, this, &ASpartaPawn::Pitch);
			EnhancedInput->BindAction(PlayerController->YawInput, ETriggerEvent::Triggered, this, &ASpartaPawn::Yaw);
			EnhancedInput->BindAction(PlayerController->RollInput, ETriggerEvent::Triggered, this, &ASpartaPawn::Roll);
		}
	}
}


void ASpartaPawn::MoveFoward(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();
	if (FMath::IsNearlyZero(InputValue)) return;
	FVector CurrentLocation = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	FVector NewLocation;
	
	if (bIsAir)
	{
		NewLocation = CurrentLocation + (Forward * InputValue * FlightSpeed * GetWorld()->GetDeltaSeconds());
	}
	else NewLocation = CurrentLocation + (Forward * InputValue * MovementSpeed * GetWorld()->GetDeltaSeconds());
	

	// 새로운 위치 적용 (Sweep 활성화 → 충돌 감지)
	SetActorLocation(NewLocation, true);
}

void ASpartaPawn::MoveRight(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();
	if (FMath::IsNearlyZero(InputValue)) return;
	FVector NewLocation;
	FVector CurrentLocation = GetActorLocation();
	FVector Right = GetActorRightVector();
	// 새로운 위치 계산
	if (bIsAir)
	{
		NewLocation = CurrentLocation + (Right * InputValue * FlightSpeed * GetWorld()->GetDeltaSeconds());
	}
	else NewLocation = CurrentLocation + (Right * InputValue * MovementSpeed * GetWorld()->GetDeltaSeconds());
	
	
	SetActorLocation(NewLocation, true);
}

// 상/하 이동
void ASpartaPawn::MoveUpDown(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();
	if (FMath::IsNearlyZero(InputValue)) return;
	
	FVector CurrentLocation = GetActorLocation();
	FVector Up = GetActorUpVector();
	FVector NewLocation = CurrentLocation + (Up * FlightSpeed * InputValue * GetWorld()->GetDeltaSeconds());
	SetActorLocation(NewLocation, true);
}


void ASpartaPawn::Yaw(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Display, TEXT("Yaw"));
	const float yaw = Value.Get<float>();

	// DeltaTime을 곱하여 프레임 속도와 관계없이 일정한 회전 속도 유지
	float DeltaYaw = yaw * RotationRate * GetWorld()->GetDeltaSeconds();

	AddActorLocalRotation(FRotator(0.0f, DeltaYaw, 0.0f),true);
}


void ASpartaPawn::Pitch(const FInputActionValue& Value)
{
	const float pitch = Value.Get<float>();
	float DeltaPitch = pitch * RotationRate * GetWorld()->GetDeltaSeconds();
	FRotator CurrentRotation = GetActorRotation();
    
	// 새 Pitch 값 계산 (-90 ~ 90도 제한)
	float NewPitch = FMath::Clamp(CurrentRotation.Pitch + DeltaPitch, -90.0f, 90.0f);

	// FQuat을 사용하여 회전 적용 (Gimbal Lock 방지)
	FQuat QuatRotation = FQuat(FRotator(NewPitch - CurrentRotation.Pitch, 0.0f, 0.0f));
	AddActorLocalRotation(QuatRotation,true);
}

// Roll 회전
void ASpartaPawn::Roll(const FInputActionValue& Value)
{
	const float roll = Value.Get<float>();
	float DeltaRoll = roll * RotationRate * GetWorld()->GetDeltaSeconds();
	AddActorLocalRotation(FRotator(0.0f,0.0f , DeltaRoll));
}

void ASpartaPawn::CheckAir()
{
	FVector Start = GetActorLocation();
	FVector End = Start - FVector(0, 0, Capsule->GetScaledCapsuleHalfHeight() + 20.0f);
    
	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	// 지면과 충돌 검사
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
	{
		bIsAir = false;
	}
	else
	{
		bIsAir = true;
	}
}