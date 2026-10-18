// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSirGasSystem_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SIRGASSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature();
	SIRGASSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature();
	SIRGASSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SirGasSystem_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SirGasSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SirGasSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SirGasSystem.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SirGasSystem_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SirGasSystem",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x6EA1EA38,
			0x082ABD6A,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SirGasSystem.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SirGasSystem.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SirGasSystem(Z_Construct_UPackage__Script_SirGasSystem, TEXT("/Script/SirGasSystem"), Z_Registration_Info_UPackage__Script_SirGasSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6EA1EA38, 0x082ABD6A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
