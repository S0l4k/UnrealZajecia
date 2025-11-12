// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPPPlayerController.h"

#ifdef CPP_CPPPlayerController_generated_h
#error "CPPPlayerController.generated.h already included, missing '#pragma once' in CPPPlayerController.h"
#endif
#define CPP_CPPPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPPPlayerController *****************************************************
CPP_API UClass* Z_Construct_UClass_ACPPPlayerController_NoRegister();

#define FID_CPP_Source_CPP_CPPPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPPlayerController(); \
	friend struct Z_Construct_UClass_ACPPPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_ACPPPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPPPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_ACPPPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACPPPlayerController)


#define FID_CPP_Source_CPP_CPPPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPPPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPPPlayerController(ACPPPlayerController&&) = delete; \
	ACPPPlayerController(const ACPPPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPPPlayerController) \
	NO_API virtual ~ACPPPlayerController();


#define FID_CPP_Source_CPP_CPPPlayerController_h_16_PROLOG
#define FID_CPP_Source_CPP_CPPPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_CPPPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_CPPPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPPPlayerController;

// ********** End Class ACPPPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_CPPPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
