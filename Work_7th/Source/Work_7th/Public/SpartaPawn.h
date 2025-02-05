// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "CapsuleTypes.h"
#include "SpartaPlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "SpartaPawn.generated.h"

UCLASS()
class WORK_7TH_API ASpartaPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpartaPawn();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Components")
	UCapsuleComponent* Capsule;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Components")
	USkeletalMeshComponent* SkeletalMesh;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Components")
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	float MovementSpeed;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	float FlightSpeed;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	float RotationRate;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	float Gravity;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	bool bIsAir;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	FVector GravityVelocity;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="SpartaPawn|Movement")
	FVector CurrentVelocity;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION()
	void MoveFoward(const FInputActionValue& value);
	UFUNCTION()
	void MoveRight(const FInputActionValue& value);
	UFUNCTION()
	void MoveUpDown(const FInputActionValue& value);
	UFUNCTION()
	void Yaw(const FInputActionValue& value);
	UFUNCTION()
	void Pitch(const FInputActionValue& value);
	UFUNCTION()
	void Roll(const FInputActionValue& value);
	UFUNCTION()
	void CheckAir();
	

};
