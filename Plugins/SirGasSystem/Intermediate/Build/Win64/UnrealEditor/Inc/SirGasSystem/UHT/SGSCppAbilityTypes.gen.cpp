// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SGSCppAbilityTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayEffectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppAbilityTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_NoRegister();
SIRGASSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer();
SIRGASSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainer ************************************
struct Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSGSCppGameplayEffectContainer); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSGSCppGameplayEffectContainer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct defining a list of gameplay effects, a tag, and targeting info\n * These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the way that targeting happens */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the way that targeting happens" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainer constinit property declarations ****
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSGSCppGameplayEffectContainer constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGSCppGameplayEffectContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer;
class UScriptStruct* FSGSCppGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_SirGasSystem(), TEXT("SGSCppGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.OuterSingleton;
	}

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainer Property Definitions ***************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSCppGameplayEffectContainer, TargetType), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USGSCppTargetType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetType_MetaData), NewProp_TargetType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSCppGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectClasses_MetaData), NewProp_TargetGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSGSCppGameplayEffectContainer Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
	nullptr,
	&NewStructOps,
	"SGSCppGameplayEffectContainer",
	Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::PropPointers),
	sizeof(FSGSCppGameplayEffectContainer),
	alignof(FSGSCppGameplayEffectContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer.InnerSingleton);
}
// ********** End ScriptStruct FSGSCppGameplayEffectContainer **************************************

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainerSpec ********************************
struct Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSGSCppGameplayEffectContainerSpec); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSGSCppGameplayEffectContainerSpec); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"processed\" version of RPGGameplayEffectContainer that can be passed around and eventually applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computed target data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computed target data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainerSpec constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSGSCppGameplayEffectContainerSpec constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSGSCppGameplayEffectContainerSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec;
class UScriptStruct* FSGSCppGameplayEffectContainerSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec, (UObject*)Z_Construct_UPackage__Script_SirGasSystem(), TEXT("SGSCppGameplayEffectContainerSpec"));
	}
	return Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.OuterSingleton;
	}

// ********** Begin ScriptStruct FSGSCppGameplayEffectContainerSpec Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSCppGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 661122056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2221987375
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSGSCppGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGameplayEffectSpecs_MetaData), NewProp_TargetGameplayEffectSpecs_MetaData) }; // 2221987375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSGSCppGameplayEffectContainerSpec Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
	nullptr,
	&NewStructOps,
	"SGSCppGameplayEffectContainerSpec",
	Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::PropPointers),
	sizeof(FSGSCppGameplayEffectContainerSpec),
	alignof(FSGSCppGameplayEffectContainerSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec()
{
	if (!Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.InnerSingleton, Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec.InnerSingleton);
}
// ********** End ScriptStruct FSGSCppGameplayEffectContainerSpec **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTypes_h__Script_SirGasSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSGSCppGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainer_Statics::NewStructOps, TEXT("SGSCppGameplayEffectContainer"),&Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGSCppGameplayEffectContainer), 1251880436U) },
		{ FSGSCppGameplayEffectContainerSpec::StaticStruct, Z_Construct_UScriptStruct_FSGSCppGameplayEffectContainerSpec_Statics::NewStructOps, TEXT("SGSCppGameplayEffectContainerSpec"),&Z_Registration_Info_UScriptStruct_FSGSCppGameplayEffectContainerSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSGSCppGameplayEffectContainerSpec), 1639668380U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTypes_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTypes_h__Script_SirGasSystem_316480965{
	TEXT("/Script/SirGasSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTypes_h__Script_SirGasSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTypes_h__Script_SirGasSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
