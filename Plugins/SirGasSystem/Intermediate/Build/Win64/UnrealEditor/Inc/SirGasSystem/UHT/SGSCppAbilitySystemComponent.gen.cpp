// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SGSCppAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAbilitySystemComponent();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGSCppAbilitySystemComponent ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppAbilitySystemComponent;
UClass* USGSCppAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = USGSCppAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppAbilitySystemComponent"),
			Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUSGSCppAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppAbilitySystemComponent_NoRegister()
{
	return USGSCppAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Abilities/SGSCppAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppAbilitySystemComponent constinit property declarations ************
// ********** End Class USGSCppAbilitySystemComponent constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics
UObject* (*const Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::ClassParams = {
	&USGSCppAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::Class_MetaDataParams)
};
void USGSCppAbilitySystemComponent::StaticRegisterNativesUSGSCppAbilitySystemComponent()
{
}
UClass* Z_Construct_UClass_USGSCppAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_USGSCppAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppAbilitySystemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppAbilitySystemComponent);
USGSCppAbilitySystemComponent::~USGSCppAbilitySystemComponent() {}
// ********** End Class USGSCppAbilitySystemComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilitySystemComponent_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppAbilitySystemComponent, USGSCppAbilitySystemComponent::StaticClass, TEXT("USGSCppAbilitySystemComponent"), &Z_Registration_Info_UClass_USGSCppAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppAbilitySystemComponent), 3987966870U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilitySystemComponent_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilitySystemComponent_h__Script_SirGasSystem_3784699597{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilitySystemComponent_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilitySystemComponent_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
