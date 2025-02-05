// Fill out your copyright notice in the Description page of Project Settings.
#include "SpartaPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputSubsystemInterface.h"


ASpartaPlayerController::ASpartaPlayerController() : InputMappingContext(nullptr),  MoveFowardAction(nullptr), MoveRightAction(nullptr), LookAction(nullptr), MoveUpDownAction(nullptr)
													,YawInput(nullptr), PitchInput(nullptr), RollInput(nullptr) {}

void ASpartaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()){
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				SubSystem -> AddMappingContext(InputMappingContext, 0);
			}
		}
				
	}
}
