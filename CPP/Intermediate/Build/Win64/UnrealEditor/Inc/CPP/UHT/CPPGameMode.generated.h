// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPGameMode.h"

#ifdef CPP_CPPGameMode_generated_h
#error "CPPGameMode.generated.h already included, missing '#pragma once' in CPPGameMode.h"
#endif
#define CPP_CPPGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPPGameMode *************************************************************
CPP_API UClass* Z_Construct_UClass_ACPPGameMode_NoRegister();

#define FID_CPP_Source_CPP_CPPGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPGameMode(); \
	friend struct Z_Construct_UClass_ACPPGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_ACPPGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPPGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_ACPPGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACPPGameMode)


#define FID_CPP_Source_CPP_CPPGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPPGameMode(ACPPGameMode&&) = delete; \
	ACPPGameMode(const ACPPGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACPPGameMode) \
	NO_API virtual ~ACPPGameMode();


#define FID_CPP_Source_CPP_CPPGameMode_h_12_PROLOG
#define FID_CPP_Source_CPP_CPPGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_CPPGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_CPPGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPPGameMode;

// ********** End Class ACPPGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_CPPGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
