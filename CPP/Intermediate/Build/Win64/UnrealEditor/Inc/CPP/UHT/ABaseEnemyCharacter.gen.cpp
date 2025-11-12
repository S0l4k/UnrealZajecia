// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABaseEnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeABaseEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_AABaseCharacter();
CPP_API UClass* Z_Construct_UClass_AABaseEnemyCharacter();
CPP_API UClass* Z_Construct_UClass_AABaseEnemyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AABaseEnemyCharacter *****************************************************
void AABaseEnemyCharacter::StaticRegisterNativesAABaseEnemyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AABaseEnemyCharacter;
UClass* AABaseEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AABaseEnemyCharacter;
	if (!Z_Registration_Info_UClass_AABaseEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ABaseEnemyCharacter"),
			Z_Registration_Info_UClass_AABaseEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAABaseEnemyCharacter,
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
	return Z_Registration_Info_UClass_AABaseEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AABaseEnemyCharacter_NoRegister()
{
	return AABaseEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AABaseEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ABaseEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/ABaseEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABaseEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AABaseEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABaseEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABaseEnemyCharacter_Statics::ClassParams = {
	&AABaseEnemyCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABaseEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AABaseEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABaseEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AABaseEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABaseEnemyCharacter.OuterSingleton, Z_Construct_UClass_AABaseEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABaseEnemyCharacter.OuterSingleton;
}
AABaseEnemyCharacter::AABaseEnemyCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABaseEnemyCharacter);
AABaseEnemyCharacter::~AABaseEnemyCharacter() {}
// ********** End Class AABaseEnemyCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABaseEnemyCharacter, AABaseEnemyCharacter::StaticClass, TEXT("AABaseEnemyCharacter"), &Z_Registration_Info_UClass_AABaseEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABaseEnemyCharacter), 2061098074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h__Script_CPP_3512191296(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseEnemyCharacter_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
