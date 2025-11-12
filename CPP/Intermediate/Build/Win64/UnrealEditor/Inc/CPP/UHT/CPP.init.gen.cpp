// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_init() {}
	CPP_API UFunction* Z_Construct_UDelegateFunction_CPP_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPP()
	{
		if (!Z_Registration_Info_UPackage__Script_CPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CPP_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6FABF6E2,
				0x4A93006B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPP(Z_Construct_UPackage__Script_CPP, TEXT("/Script/CPP"), Z_Registration_Info_UPackage__Script_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6FABF6E2, 0x4A93006B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
