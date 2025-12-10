// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MasterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMasterGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT_API UClass* Z_Construct_UClass_AMasterGameMode();
MYPROJECT_API UClass* Z_Construct_UClass_AMasterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMasterGameMode **********************************************************
void AMasterGameMode::StaticRegisterNativesAMasterGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMasterGameMode;
UClass* AMasterGameMode::GetPrivateStaticClass()
{
	using TClass = AMasterGameMode;
	if (!Z_Registration_Info_UClass_AMasterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MasterGameMode"),
			Z_Registration_Info_UClass_AMasterGameMode.InnerSingleton,
			StaticRegisterNativesAMasterGameMode,
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
	return Z_Registration_Info_UClass_AMasterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMasterGameMode_NoRegister()
{
	return AMasterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMasterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MasterGameMode.h" },
		{ "ModuleRelativePath", "Public/MasterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMasterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMasterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMasterGameMode_Statics::ClassParams = {
	&AMasterGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMasterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMasterGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMasterGameMode()
{
	if (!Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton, Z_Construct_UClass_AMasterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMasterGameMode.OuterSingleton;
}
AMasterGameMode::AMasterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMasterGameMode);
AMasterGameMode::~AMasterGameMode() {}
// ********** End Class AMasterGameMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MasterGameMode_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMasterGameMode, AMasterGameMode::StaticClass, TEXT("AMasterGameMode"), &Z_Registration_Info_UClass_AMasterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMasterGameMode), 2331971816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MasterGameMode_h__Script_MyProject_491623181(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MasterGameMode_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MasterGameMode_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
