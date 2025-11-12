// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABaseEnemyCharacter.h"

#ifdef CPP_ABaseEnemyCharacter_generated_h
#error "ABaseEnemyCharacter.generated.h already included, missing '#pragma once' in ABaseEnemyCharacter.h"
#endif
#define CPP_ABaseEnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AABaseEnemyCharacter *****************************************************
CPP_API UClass* Z_Construct_UClass_AABaseEnemyCharacter_NoRegister();

#define FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABaseEnemyCharacter(); \
	friend struct Z_Construct_UClass_AABaseEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_AABaseEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AABaseEnemyCharacter, AABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_AABaseEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AABaseEnemyCharacter)


#define FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABaseEnemyCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AABaseEnemyCharacter(AABaseEnemyCharacter&&) = delete; \
	AABaseEnemyCharacter(const AABaseEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABaseEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABaseEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABaseEnemyCharacter) \
	NO_API virtual ~AABaseEnemyCharacter();


#define FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_12_PROLOG
#define FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AABaseEnemyCharacter;

// ********** End Class AABaseEnemyCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
