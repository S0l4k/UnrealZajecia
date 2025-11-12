// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABasePlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeABasePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
CPP_API UClass* Z_Construct_UClass_AABaseCharacter();
CPP_API UClass* Z_Construct_UClass_AABasePlayerCharacter();
CPP_API UClass* Z_Construct_UClass_AABasePlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AABasePlayerCharacter ****************************************************
void AABasePlayerCharacter::StaticRegisterNativesAABasePlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AABasePlayerCharacter;
UClass* AABasePlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AABasePlayerCharacter;
	if (!Z_Registration_Info_UClass_AABasePlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ABasePlayerCharacter"),
			Z_Registration_Info_UClass_AABasePlayerCharacter.InnerSingleton,
			StaticRegisterNativesAABasePlayerCharacter,
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
	return Z_Registration_Info_UClass_AABasePlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AABasePlayerCharacter_NoRegister()
{
	return AABasePlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AABasePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ABasePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/ABasePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABasePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AABasePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABasePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABasePlayerCharacter_Statics::ClassParams = {
	&AABasePlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABasePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AABasePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABasePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AABasePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABasePlayerCharacter.OuterSingleton, Z_Construct_UClass_AABasePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABasePlayerCharacter.OuterSingleton;
}
AABasePlayerCharacter::AABasePlayerCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABasePlayerCharacter);
AABasePlayerCharacter::~AABasePlayerCharacter() {}
// ********** End Class AABasePlayerCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h__Script_CPP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABasePlayerCharacter, AABasePlayerCharacter::StaticClass, TEXT("AABasePlayerCharacter"), &Z_Registration_Info_UClass_AABasePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABasePlayerCharacter), 2443892798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h__Script_CPP_2787199802(TEXT("/Script/CPP"),
	Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h__Script_CPP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Public_ABasePlayerCharacter_h__Script_CPP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
