// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPCharacter.h"

#ifdef CPP_CPPCharacter_generated_h
#error "CPPCharacter.generated.h already included, missing '#pragma once' in CPPCharacter.h"
#endif
#define CPP_CPPCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPPCharacter ************************************************************
#define FID_CPP_Source_CPP_CPPCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


CPP_API UClass* Z_Construct_UClass_ACPPCharacter_NoRegister();

#define FID_CPP_Source_CPP_CPPCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPCharacter(); \
	friend struct Z_Construct_UClass_ACPPCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_ACPPCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPPCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_ACPPCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACPPCharacter)


#define FID_CPP_Source_CPP_CPPCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPPCharacter(ACPPCharacter&&) = delete; \
	ACPPCharacter(const ACPPCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACPPCharacter) \
	NO_API virtual ~ACPPCharacter();


#define FID_CPP_Source_CPP_CPPCharacter_h_21_PROLOG
#define FID_CPP_Source_CPP_CPPCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_CPPCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_CPPCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_CPPCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPPCharacter;

// ********** End Class ACPPCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_CPPCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
