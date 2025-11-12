// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABasePlayerController.h"

#ifdef CPP_ABasePlayerController_generated_h
#error "ABasePlayerController.generated.h already included, missing '#pragma once' in ABasePlayerController.h"
#endif
#define CPP_ABasePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AABasePlayerController ***************************************************
CPP_API UClass* Z_Construct_UClass_AABasePlayerController_NoRegister();

#define FID_CPP_Source_CPP_Public_ABasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABasePlayerController(); \
	friend struct Z_Construct_UClass_AABasePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_API UClass* Z_Construct_UClass_AABasePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), Z_Construct_UClass_AABasePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AABasePlayerController)


#define FID_CPP_Source_CPP_Public_ABasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AABasePlayerController(AABasePlayerController&&) = delete; \
	AABasePlayerController(const AABasePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABasePlayerController) \
	NO_API virtual ~AABasePlayerController();


#define FID_CPP_Source_CPP_Public_ABasePlayerController_h_12_PROLOG
#define FID_CPP_Source_CPP_Public_ABasePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Public_ABasePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Public_ABasePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AABasePlayerController;

// ********** End Class AABasePlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Public_ABasePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
