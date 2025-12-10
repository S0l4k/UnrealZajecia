// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseEnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABaseEnemyCharacter ******************************************************
void ABaseEnemyCharacter::StaticRegisterNativesABaseEnemyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseEnemyCharacter;
UClass* ABaseEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = ABaseEnemyCharacter;
	if (!Z_Registration_Info_UClass_ABaseEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseEnemyCharacter"),
			Z_Registration_Info_UClass_ABaseEnemyCharacter.InnerSingleton,
			StaticRegisterNativesABaseEnemyCharacter,
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
	return Z_Registration_Info_UClass_ABaseEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseEnemyCharacter_NoRegister()
{
	return ABaseEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams = {
	&ABaseEnemyCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton, Z_Construct_UClass_ABaseEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemyCharacter.OuterSingleton;
}
ABaseEnemyCharacter::ABaseEnemyCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyCharacter);
ABaseEnemyCharacter::~ABaseEnemyCharacter() {}
// ********** End Class ABaseEnemyCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyCharacter, ABaseEnemyCharacter::StaticClass, TEXT("ABaseEnemyCharacter"), &Z_Registration_Info_UClass_ABaseEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyCharacter), 737397356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h__Script_MyProject_2921735886(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BaseEnemyCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
