// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseEnemyCharacter.h"

#ifdef MYPROJECT_BaseEnemyCharacter_generated_h
#error "BaseEnemyCharacter.generated.h already included, missing '#pragma once' in BaseEnemyCharacter.h"
#endif
#define MYPROJECT_BaseEnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseEnemyCharacter ******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister();

#define FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemyCharacter(); \
	friend struct Z_Construct_UClass_ABaseEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ABaseEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABaseEnemyCharacter)


#define FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemyCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseEnemyCharacter(ABaseEnemyCharacter&&) = delete; \
	ABaseEnemyCharacter(const ABaseEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemyCharacter) \
	NO_API virtual ~ABaseEnemyCharacter();


#define FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_12_PROLOG
#define FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseEnemyCharacter;

// ********** End Class ABaseEnemyCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
