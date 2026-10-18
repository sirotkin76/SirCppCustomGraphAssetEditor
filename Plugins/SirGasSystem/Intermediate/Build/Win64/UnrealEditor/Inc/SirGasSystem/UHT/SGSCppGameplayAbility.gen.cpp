// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SGSCppGameplayAbility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppGameplayAbility() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppGameplayAbility();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGSCppGameplayAbility ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppGameplayAbility;
UClass* USGSCppGameplayAbility::GetPrivateStaticClass()
{
	using TClass = USGSCppGameplayAbility;
	if (!Z_Registration_Info_UClass_USGSCppGameplayAbility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppGameplayAbility"),
			Z_Registration_Info_UClass_USGSCppGameplayAbility.InnerSingleton,
			StaticRegisterNativesUSGSCppGameplayAbility,
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
	return Z_Registration_Info_UClass_USGSCppGameplayAbility.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppGameplayAbility_NoRegister()
{
	return USGSCppGameplayAbility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/SGSCppGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppGameplayAbility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppGameplayAbility constinit property declarations *******************
// ********** End Class USGSCppGameplayAbility constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppGameplayAbility_Statics
UObject* (*const Z_Construct_UClass_USGSCppGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppGameplayAbility_Statics::ClassParams = {
	&USGSCppGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppGameplayAbility_Statics::Class_MetaDataParams)
};
void USGSCppGameplayAbility::StaticRegisterNativesUSGSCppGameplayAbility()
{
}
UClass* Z_Construct_UClass_USGSCppGameplayAbility()
{
	if (!Z_Registration_Info_UClass_USGSCppGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppGameplayAbility.OuterSingleton, Z_Construct_UClass_USGSCppGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppGameplayAbility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppGameplayAbility);
USGSCppGameplayAbility::~USGSCppGameplayAbility() {}
// ********** End Class USGSCppGameplayAbility *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppGameplayAbility_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppGameplayAbility, USGSCppGameplayAbility::StaticClass, TEXT("USGSCppGameplayAbility"), &Z_Registration_Info_UClass_USGSCppGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppGameplayAbility), 2811084765U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppGameplayAbility_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppGameplayAbility_h__Script_SirGasSystem_2463410400{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppGameplayAbility_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppGameplayAbility_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
