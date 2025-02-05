// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Work_7th/Public/SpartaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Work_7th();
WORK_7TH_API UClass* Z_Construct_UClass_ASpartaPlayerController();
WORK_7TH_API UClass* Z_Construct_UClass_ASpartaPlayerController_NoRegister();
// End Cross Module References

// Begin Class ASpartaPlayerController
void ASpartaPlayerController::StaticRegisterNativesASpartaPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaPlayerController);
UClass* Z_Construct_UClass_ASpartaPlayerController_NoRegister()
{
	return ASpartaPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASpartaPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SpartaPlayerController.h" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveFowardAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveUpDownAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveFowardAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveUpDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YawInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveFowardAction = { "MoveFowardAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MoveFowardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveFowardAction_MetaData), NewProp_MoveFowardAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveRightAction = { "MoveRightAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MoveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightAction_MetaData), NewProp_MoveRightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveUpDownAction = { "MoveUpDownAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, MoveUpDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveUpDownAction_MetaData), NewProp_MoveUpDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_YawInput = { "YawInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, YawInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawInput_MetaData), NewProp_YawInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_PitchInput = { "PitchInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, PitchInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchInput_MetaData), NewProp_PitchInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_RollInput = { "RollInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPlayerController, RollInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollInput_MetaData), NewProp_RollInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveFowardAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveRightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_MoveUpDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_YawInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_PitchInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPlayerController_Statics::NewProp_RollInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Work_7th,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaPlayerController_Statics::ClassParams = {
	&ASpartaPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaPlayerController()
{
	if (!Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton, Z_Construct_UClass_ASpartaPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaPlayerController.OuterSingleton;
}
template<> WORK_7TH_API UClass* StaticClass<ASpartaPlayerController>()
{
	return ASpartaPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaPlayerController);
ASpartaPlayerController::~ASpartaPlayerController() {}
// End Class ASpartaPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaPlayerController, ASpartaPlayerController::StaticClass, TEXT("ASpartaPlayerController"), &Z_Registration_Info_UClass_ASpartaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaPlayerController), 227041836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPlayerController_h_426567143(TEXT("/Script/Work_7th"),
	Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
