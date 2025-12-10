// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasePlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ABasePlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasePlayerCharacter *****************************************************
void ABasePlayerCharacter::StaticRegisterNativesABasePlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasePlayerCharacter;
UClass* ABasePlayerCharacter::GetPrivateStaticClass()
{
	using TClass = ABasePlayerCharacter;
	if (!Z_Registration_Info_UClass_ABasePlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasePlayerCharacter"),
			Z_Registration_Info_UClass_ABasePlayerCharacter.InnerSingleton,
			StaticRegisterNativesABasePlayerCharacter,
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
	return Z_Registration_Info_UClass_ABasePlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasePlayerCharacter_NoRegister()
{
	return ABasePlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/BasePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABasePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerCharacter_Statics::ClassParams = {
	&ABasePlayerCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ABasePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerCharacter.OuterSingleton, Z_Construct_UClass_ABasePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerCharacter.OuterSingleton;
}
ABasePlayerCharacter::ABasePlayerCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerCharacter);
ABasePlayerCharacter::~ABasePlayerCharacter() {}
// ********** End Class ABasePlayerCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerCharacter, ABasePlayerCharacter::StaticClass, TEXT("ABasePlayerCharacter"), &Z_Registration_Info_UClass_ABasePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerCharacter), 761520349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h__Script_MyProject_1531151975(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_BasePlayerCharacter_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
