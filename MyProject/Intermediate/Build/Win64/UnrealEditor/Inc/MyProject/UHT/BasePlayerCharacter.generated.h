// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasePlayerCharacter.h"

#ifdef MYPROJECT_BasePlayerCharacter_generated_h
#error "BasePlayerCharacter.generated.h already included, missing '#pragma once' in BasePlayerCharacter.h"
#endif
#define MYPROJECT_BasePlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasePlayerCharacter *****************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerCharacter_NoRegister();

#define FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerCharacter(); \
	friend struct Z_Construct_UClass_ABasePlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasePlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ABasePlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABasePlayerCharacter)


#define FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasePlayerCharacter(ABasePlayerCharacter&&) = delete; \
	ABasePlayerCharacter(const ABasePlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayerCharacter) \
	NO_API virtual ~ABasePlayerCharacter();


#define FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_12_PROLOG
#define FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasePlayerCharacter;

// ********** End Class ABasePlayerCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
