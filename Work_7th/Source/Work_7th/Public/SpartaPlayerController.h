// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpartaPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class WORK_7TH_API ASpartaPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ASpartaPlayerController();
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputMappingContext* InputMappingContext;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* MoveFowardAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* MoveRightAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* LookAction;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* MoveUpDownAction;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* YawInput;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* PitchInput;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Input")
	UInputAction* RollInput;
};
