// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasePlayerController.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasePlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerController();
MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasePlayerController Function Attack ************************************
struct Z_Construct_UFunction_ABasePlayerController_Attack_Statics
{
	struct BasePlayerController_eventAttack_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasePlayerController_Attack_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerController_eventAttack_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_Attack_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Attack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_Attack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "Attack", Z_Construct_UFunction_ABasePlayerController_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_Attack_Statics::BasePlayerController_eventAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_Attack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_Attack_Statics::BasePlayerController_eventAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execAttack)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABasePlayerController Function Attack **************************************

// ********** Begin Class ABasePlayerController Function Interact **********************************
struct Z_Construct_UFunction_ABasePlayerController_Interact_Statics
{
	struct BasePlayerController_eventInteract_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasePlayerController_Interact_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerController_eventInteract_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_Interact_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "Interact", Z_Construct_UFunction_ABasePlayerController_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_Interact_Statics::BasePlayerController_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_Interact_Statics::BasePlayerController_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execInteract)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABasePlayerController Function Interact ************************************

// ********** Begin Class ABasePlayerController Function Move **************************************
struct Z_Construct_UFunction_ABasePlayerController_Move_Statics
{
	struct BasePlayerController_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasePlayerController_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasePlayerController_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlayerController_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlayerController_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlayerController_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasePlayerController, nullptr, "Move", Z_Construct_UFunction_ABasePlayerController_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasePlayerController_Move_Statics::BasePlayerController_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlayerController_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasePlayerController_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasePlayerController_Move_Statics::BasePlayerController_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasePlayerController_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasePlayerController_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasePlayerController::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABasePlayerController Function Move ****************************************

// ********** Begin Class ABasePlayerController ****************************************************
void ABasePlayerController::StaticRegisterNativesABasePlayerController()
{
	UClass* Class = ABasePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack", &ABasePlayerController::execAttack },
		{ "Interact", &ABasePlayerController::execInteract },
		{ "Move", &ABasePlayerController::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasePlayerController;
UClass* ABasePlayerController::GetPrivateStaticClass()
{
	using TClass = ABasePlayerController;
	if (!Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasePlayerController"),
			Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton,
			StaticRegisterNativesABasePlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABasePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasePlayerController_NoRegister()
{
	return ABasePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BasePlayerController.h" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ========== INPUT MAPPING CONTEXT ==========\n" },
#endif
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "========== INPUT MAPPING CONTEXT ==========" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ========== INPUT ACTIONS ==========\n" },
#endif
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "========== INPUT ACTIONS ==========" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/BasePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlayerController_Attack, "Attack" }, // 546747275
		{ &Z_Construct_UFunction_ABasePlayerController_Interact, "Interact" }, // 2137217004
		{ &Z_Construct_UFunction_ABasePlayerController_Move, "Move" }, // 636858367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlayerController_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerController, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerController_Statics::NewProp_AttackAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerController_Statics::ClassParams = {
	&ABasePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABasePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerController()
{
	if (!Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton, Z_Construct_UClass_ABasePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton;
}
ABasePlayerController::ABasePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerController);
ABasePlayerController::~ABasePlayerController() {}
// ********** End Class ABasePlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerController_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerController, ABasePlayerController::StaticClass, TEXT("ABasePlayerController"), &Z_Registration_Info_UClass_ABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerController), 3348067626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerController_h__Script_MyProject_86661962(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerController_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerController_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
