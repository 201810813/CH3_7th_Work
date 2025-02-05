// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Work_7th/Public/SpartaPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_Work_7th();
WORK_7TH_API UClass* Z_Construct_UClass_ASpartaPawn();
WORK_7TH_API UClass* Z_Construct_UClass_ASpartaPawn_NoRegister();
// End Cross Module References

// Begin Class ASpartaPawn Function CheckAir
struct Z_Construct_UFunction_ASpartaPawn_CheckAir_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_CheckAir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "CheckAir", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_CheckAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_CheckAir_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpartaPawn_CheckAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_CheckAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execCheckAir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAir();
	P_NATIVE_END;
}
// End Class ASpartaPawn Function CheckAir

// Begin Class ASpartaPawn Function MoveFoward
struct Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics
{
	struct SpartaPawn_eventMoveFoward_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventMoveFoward_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "MoveFoward", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::SpartaPawn_eventMoveFoward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::SpartaPawn_eventMoveFoward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_MoveFoward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_MoveFoward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execMoveFoward)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveFoward(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function MoveFoward

// Begin Class ASpartaPawn Function MoveRight
struct Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics
{
	struct SpartaPawn_eventMoveRight_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventMoveRight_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::SpartaPawn_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::SpartaPawn_eventMoveRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_MoveRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_MoveRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execMoveRight)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRight(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function MoveRight

// Begin Class ASpartaPawn Function MoveUpDown
struct Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics
{
	struct SpartaPawn_eventMoveUpDown_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventMoveUpDown_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "MoveUpDown", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::SpartaPawn_eventMoveUpDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::SpartaPawn_eventMoveUpDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_MoveUpDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_MoveUpDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execMoveUpDown)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveUpDown(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function MoveUpDown

// Begin Class ASpartaPawn Function Pitch
struct Z_Construct_UFunction_ASpartaPawn_Pitch_Statics
{
	struct SpartaPawn_eventPitch_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventPitch_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "Pitch", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::SpartaPawn_eventPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::SpartaPawn_eventPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_Pitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_Pitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execPitch)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pitch(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function Pitch

// Begin Class ASpartaPawn Function Roll
struct Z_Construct_UFunction_ASpartaPawn_Roll_Statics
{
	struct SpartaPawn_eventRoll_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_Roll_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventRoll_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_Roll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_Roll_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Roll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "Roll", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_Roll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Roll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_Roll_Statics::SpartaPawn_eventRoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Roll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_Roll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_Roll_Statics::SpartaPawn_eventRoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_Roll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_Roll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execRoll)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Roll(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function Roll

// Begin Class ASpartaPawn Function Yaw
struct Z_Construct_UFunction_ASpartaPawn_Yaw_Statics
{
	struct SpartaPawn_eventYaw_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpartaPawn_eventYaw_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpartaPawn, nullptr, "Yaw", nullptr, nullptr, Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::SpartaPawn_eventYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::SpartaPawn_eventYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpartaPawn_Yaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpartaPawn_Yaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpartaPawn::execYaw)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Yaw(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ASpartaPawn Function Yaw

// Begin Class ASpartaPawn
void ASpartaPawn::StaticRegisterNativesASpartaPawn()
{
	UClass* Class = ASpartaPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAir", &ASpartaPawn::execCheckAir },
		{ "MoveFoward", &ASpartaPawn::execMoveFoward },
		{ "MoveRight", &ASpartaPawn::execMoveRight },
		{ "MoveUpDown", &ASpartaPawn::execMoveUpDown },
		{ "Pitch", &ASpartaPawn::execPitch },
		{ "Roll", &ASpartaPawn::execRoll },
		{ "Yaw", &ASpartaPawn::execYaw },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaPawn);
UClass* Z_Construct_UClass_ASpartaPawn_NoRegister()
{
	return ASpartaPawn::StaticClass();
}
struct Z_Construct_UClass_ASpartaPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpartaPawn.h" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
		{ "Category", "SpartaPawn|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "SpartaPawn|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "SpartaPawn|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "SpartaPawn|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightSpeed_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAir_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityVelocity_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "SpartaPawn|Movement" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlightSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static void NewProp_bIsAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpartaPawn_CheckAir, "CheckAir" }, // 1535140188
		{ &Z_Construct_UFunction_ASpartaPawn_MoveFoward, "MoveFoward" }, // 3467931505
		{ &Z_Construct_UFunction_ASpartaPawn_MoveRight, "MoveRight" }, // 2888610859
		{ &Z_Construct_UFunction_ASpartaPawn_MoveUpDown, "MoveUpDown" }, // 3291634389
		{ &Z_Construct_UFunction_ASpartaPawn_Pitch, "Pitch" }, // 1371765340
		{ &Z_Construct_UFunction_ASpartaPawn_Roll, "Roll" }, // 1971019609
		{ &Z_Construct_UFunction_ASpartaPawn_Yaw, "Yaw" }, // 3216672704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsule_MetaData), NewProp_Capsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_FlightSpeed = { "FlightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, FlightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightSpeed_MetaData), NewProp_FlightSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
void Z_Construct_UClass_ASpartaPawn_Statics::NewProp_bIsAir_SetBit(void* Obj)
{
	((ASpartaPawn*)Obj)->bIsAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_bIsAir = { "bIsAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpartaPawn), &Z_Construct_UClass_ASpartaPawn_Statics::NewProp_bIsAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAir_MetaData), NewProp_bIsAir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_GravityVelocity = { "GravityVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, GravityVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityVelocity_MetaData), NewProp_GravityVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVelocity_MetaData), NewProp_CurrentVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Capsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_FlightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_bIsAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_GravityVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CurrentVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Work_7th,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaPawn_Statics::ClassParams = {
	&ASpartaPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpartaPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaPawn()
{
	if (!Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton, Z_Construct_UClass_ASpartaPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton;
}
template<> WORK_7TH_API UClass* StaticClass<ASpartaPawn>()
{
	return ASpartaPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaPawn);
ASpartaPawn::~ASpartaPawn() {}
// End Class ASpartaPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaPawn, ASpartaPawn::StaticClass, TEXT("ASpartaPawn"), &Z_Registration_Info_UClass_ASpartaPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaPawn), 3961712663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_2437835162(TEXT("/Script/Work_7th"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
