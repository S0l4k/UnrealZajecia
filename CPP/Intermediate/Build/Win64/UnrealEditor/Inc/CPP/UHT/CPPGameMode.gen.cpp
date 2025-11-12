// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPPGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_ACPPGameMode();
CPP_API UClass* Z_Construct_UClass_ACPPGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPPGameMode *************************************************************
void ACPPGameMode::StaticRegisterNativesACPPGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPPGameMode;
UClass* ACPPGameMode::GetPrivateStaticClass()
{
	using TClass = ACPPGameMode;
	if (!Z_Registration_Info_UClass_ACPPGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPPGameMode"),
			Z_Registration_Info_UClass_ACPPGameMode.InnerSingleton,
			StaticRegisterNativesACPPGameMode,
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
	return Z_Registration_Info_UClass_ACPPGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPPGameMode_NoRegister()
{
	return ACPPGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPPGameMode.h" },
		{ "ModuleRelativePath", "CPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPGameMode_Statics::ClassParams = {
	&ACPPGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPPGameMode()
{
	if (!Z_Registration_Info_UClass_ACPPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPGameMode.OuterSingleton, Z_Construct_UClass_ACPPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPPGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPGameMode);
ACPPGameMode::~ACPPGameMode() {}
// ********** End Class ACPPGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_CPPGameMode_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPPGameMode, ACPPGameMode::StaticClass, TEXT("ACPPGameMode"), &Z_Registration_Info_UClass_ACPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPGameMode), 341275023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_CPPGameMode_h__Script_CPP_4057195721(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_CPPGameMode_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_CPPGameMode_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
