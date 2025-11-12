// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeABaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_AABaseCharacter();
CPP_API UClass* Z_Construct_UClass_AABaseCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AABaseCharacter **********************************************************
void AABaseCharacter::StaticRegisterNativesAABaseCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AABaseCharacter;
UClass* AABaseCharacter::GetPrivateStaticClass()
{
	using TClass = AABaseCharacter;
	if (!Z_Registration_Info_UClass_AABaseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ABaseCharacter"),
			Z_Registration_Info_UClass_AABaseCharacter.InnerSingleton,
			StaticRegisterNativesAABaseCharacter,
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
	return Z_Registration_Info_UClass_AABaseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AABaseCharacter_NoRegister()
{
	return AABaseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ABaseCharacter.h" },
		{ "ModuleRelativePath", "Public/ABaseCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABaseCharacter_Statics::ClassParams = {
	&AABaseCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABaseCharacter()
{
	if (!Z_Registration_Info_UClass_AABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABaseCharacter.OuterSingleton, Z_Construct_UClass_AABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABaseCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABaseCharacter);
AABaseCharacter::~AABaseCharacter() {}
// ********** End Class AABaseCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseCharacter_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABaseCharacter, AABaseCharacter::StaticClass, TEXT("AABaseCharacter"), &Z_Registration_Info_UClass_AABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABaseCharacter), 3438413231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseCharacter_h__Script_CPP_3097283449(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseCharacter_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABaseCharacter_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
