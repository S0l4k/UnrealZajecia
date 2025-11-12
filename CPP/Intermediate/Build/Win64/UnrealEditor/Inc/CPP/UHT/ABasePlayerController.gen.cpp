// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABasePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeABasePlayerController() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_AABasePlayerController();
CPP_API UClass* Z_Construct_UClass_AABasePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AABasePlayerController ***************************************************
void AABasePlayerController::StaticRegisterNativesAABasePlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AABasePlayerController;
UClass* AABasePlayerController::GetPrivateStaticClass()
{
	using TClass = AABasePlayerController;
	if (!Z_Registration_Info_UClass_AABasePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ABasePlayerController"),
			Z_Registration_Info_UClass_AABasePlayerController.InnerSingleton,
			StaticRegisterNativesAABasePlayerController,
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
	return Z_Registration_Info_UClass_AABasePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AABasePlayerController_NoRegister()
{
	return AABasePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AABasePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABasePlayerController.h" },
		{ "ModuleRelativePath", "Public/ABasePlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABasePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AABasePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABasePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABasePlayerController_Statics::ClassParams = {
	&AABasePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABasePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABasePlayerController()
{
	if (!Z_Registration_Info_UClass_AABasePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABasePlayerController.OuterSingleton, Z_Construct_UClass_AABasePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABasePlayerController.OuterSingleton;
}
AABasePlayerController::AABasePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABasePlayerController);
AABasePlayerController::~AABasePlayerController() {}
// ********** End Class AABasePlayerController *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerController_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABasePlayerController, AABasePlayerController::StaticClass, TEXT("AABasePlayerController"), &Z_Registration_Info_UClass_AABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABasePlayerController), 4107965073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerController_h__Script_CPP_147974253(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerController_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerController_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
