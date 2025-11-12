// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMasterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAMasterGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_AAMasterGameMode();
CPP_API UClass* Z_Construct_UClass_AAMasterGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAMasterGameMode *********************************************************
void AAMasterGameMode::StaticRegisterNativesAAMasterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAMasterGameMode;
UClass* AAMasterGameMode::GetPrivateStaticClass()
{
	using TClass = AAMasterGameMode;
	if (!Z_Registration_Info_UClass_AAMasterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AMasterGameMode"),
			Z_Registration_Info_UClass_AAMasterGameMode.InnerSingleton,
			StaticRegisterNativesAAMasterGameMode,
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
	return Z_Registration_Info_UClass_AAMasterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAMasterGameMode_NoRegister()
{
	return AAMasterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAMasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AMasterGameMode.h" },
		{ "ModuleRelativePath", "Public/AMasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAMasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMasterGameMode_Statics::ClassParams = {
	&AAMasterGameMode::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMasterGameMode()
{
	if (!Z_Registration_Info_UClass_AAMasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMasterGameMode.OuterSingleton, Z_Construct_UClass_AAMasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMasterGameMode.OuterSingleton;
}
AAMasterGameMode::AAMasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMasterGameMode);
AAMasterGameMode::~AAMasterGameMode() {}
// ********** End Class AAMasterGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_AMasterGameMode_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMasterGameMode, AAMasterGameMode::StaticClass, TEXT("AAMasterGameMode"), &Z_Registration_Info_UClass_AAMasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMasterGameMode), 1202950296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_AMasterGameMode_h__Script_CPP_1778355864(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_AMasterGameMode_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_AMasterGameMode_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
