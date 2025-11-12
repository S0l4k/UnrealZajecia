// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AMasterGameMode.h"

#ifdef CPP_AMasterGameMode_generated_h
#error "AMasterGameMode.generated.h already included, missing '#pragma once' in AMasterGameMode.h"
#endif
#define CPP_AMasterGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAMasterGameMode *********************************************************
CPP_API UClass* Z_Construct_UClass_AAMasterGameMode_NoRegister();

#define FID_CPP_Source_CPP_Public_AMasterGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMasterGameMode(); \
	friend struct Z_Construct_UClass_AAMasterGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_AAMasterGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AAMasterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_AAMasterGameMode_NoRegister) \
	DECLARE_SERIALIZER(AAMasterGameMode)


#define FID_CPP_Source_CPP_Public_AMasterGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAMasterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAMasterGameMode(AAMasterGameMode&&) = delete; \
	AAMasterGameMode(const AAMasterGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMasterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMasterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMasterGameMode) \
	NO_API virtual ~AAMasterGameMode();


#define FID_CPP_Source_CPP_Public_AMasterGameMode_h_12_PROLOG
#define FID_CPP_Source_CPP_Public_AMasterGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Public_AMasterGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Public_AMasterGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAMasterGameMode;

// ********** End Class AAMasterGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Public_AMasterGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
