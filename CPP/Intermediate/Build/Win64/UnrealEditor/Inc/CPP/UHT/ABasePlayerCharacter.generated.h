// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABasePlayerCharacter.h"

#ifdef CPP_ABasePlayerCharacter_generated_h
#error "ABasePlayerCharacter.generated.h already included, missing '#pragma once' in ABasePlayerCharacter.h"
#endif
#define CPP_ABasePlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AABasePlayerCharacter ****************************************************
CPP_API UClass* Z_Construct_UClass_AABasePlayerCharacter_NoRegister();

#define FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABasePlayerCharacter(); \
	friend struct Z_Construct_UClass_AABasePlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_AABasePlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AABasePlayerCharacter, AABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_AABasePlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(AABasePlayerCharacter)


#define FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABasePlayerCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AABasePlayerCharacter(AABasePlayerCharacter&&) = delete; \
	AABasePlayerCharacter(const AABasePlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABasePlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABasePlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABasePlayerCharacter) \
	NO_API virtual ~AABasePlayerCharacter();


#define FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_12_PROLOG
#define FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AABasePlayerCharacter;

// ********** End Class AABasePlayerCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
