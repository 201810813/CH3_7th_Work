// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpartaPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef WORK_7TH_SpartaPawn_generated_h
#error "SpartaPawn.generated.h already included, missing '#pragma once' in SpartaPawn.h"
#endif
#define WORK_7TH_SpartaPawn_generated_h

#define FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckAir); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execPitch); \
	DECLARE_FUNCTION(execYaw); \
	DECLARE_FUNCTION(execMoveUpDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveFoward);


#define FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpartaPawn(); \
	friend struct Z_Construct_UClass_ASpartaPawn_Statics; \
public: \
	DECLARE_CLASS(ASpartaPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Work_7th"), NO_API) \
	DECLARE_SERIALIZER(ASpartaPawn)


#define FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpartaPawn(ASpartaPawn&&); \
	ASpartaPawn(const ASpartaPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpartaPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpartaPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpartaPawn) \
	NO_API virtual ~ASpartaPawn();


#define FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_14_PROLOG
#define FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORK_7TH_API UClass* StaticClass<class ASpartaPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_seung_Documents_GitHub_CH3_7th_Work_Work_7th_Source_Work_7th_Public_SpartaPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
