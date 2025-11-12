// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABaseCharacter.h"

#ifdef CPP_ABaseCharacter_generated_h
#error "ABaseCharacter.generated.h already included, missing '#pragma once' in ABaseCharacter.h"
#endif
#define CPP_ABaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AABaseCharacter **********************************************************
CPP_API UClass* Z_Construct_UClass_AABaseCharacter_NoRegister();

#define FID_CPP_Source_CPP_Public_ABaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABaseCharacter(); \
	friend struct Z_Construct_UClass_AABaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_AABaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_AABaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(AABaseCharacter)


#define FID_CPP_Source_CPP_Public_ABaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AABaseCharacter(AABaseCharacter&&) = delete; \
	AABaseCharacter(const AABaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABaseCharacter) \
	NO_API virtual ~AABaseCharacter();


#define FID_CPP_Source_CPP_Public_ABaseCharacter_h_9_PROLOG
#define FID_CPP_Source_CPP_Public_ABaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Public_ABaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Public_ABaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AABaseCharacter;

// ********** End Class AABaseCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Public_ABaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
