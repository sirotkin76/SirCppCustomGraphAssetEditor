// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSCppCharacterBase.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_ASGSCppCharacterBase();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_ASGSCppCharacterBase_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAbilitySystemComponent_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAttributeSet_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppActivateAbilitiesWithTags ***********
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms
	{
		FGameplayTagContainer AbilityTags;
		bool bAllowRemoteActivation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Activate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xd0\x9b\xd0\x9e\xd0\x93\xd0\x98\xd0\x9a\xd0\x90 \xd0\xa1 \xd0\xa2\xd0\x95\xd0\x93\xd0\x90\xd0\x9c\xd0\x98\n\x09*/" },
#endif
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9b\xd0\x9e\xd0\x93\xd0\x98\xd0\x9a\xd0\x90 \xd0\xa1 \xd0\xa2\xd0\x95\xd0\x93\xd0\x90\xd0\x9c\xd0\x98" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppActivateAbilitiesWithTags constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppActivateAbilitiesWithTags constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppActivateAbilitiesWithTags Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms*)Obj)->bAllowRemoteActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_bAllowRemoteActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppActivateAbilitiesWithTags Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppActivateAbilitiesWithTags", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::SGSCppCharacterBase_eventFSGSCppActivateAbilitiesWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppActivateAbilitiesWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppActivateAbilitiesWithTags(Z_Param_AbilityTags,Z_Param_bAllowRemoteActivation);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppActivateAbilitiesWithTags *************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppActivateAbilityWithTag **************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms
	{
		FGameplayTag AbilityTagL;
		bool bAllowRemoteActivation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Activate" },
		{ "CPP_Default_bAllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppActivateAbilityWithTag constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagL;
	static void NewProp_bAllowRemoteActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteActivation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppActivateAbilityWithTag constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppActivateAbilityWithTag Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_AbilityTagL = { "AbilityTagL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms, AbilityTagL), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_bAllowRemoteActivation_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms*)Obj)->bAllowRemoteActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_bAllowRemoteActivation = { "bAllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_bAllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_AbilityTagL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_bAllowRemoteActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppActivateAbilityWithTag Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppActivateAbilityWithTag", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::SGSCppCharacterBase_eventFSGSCppActivateAbilityWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppActivateAbilityWithTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagL);
	P_GET_UBOOL(Z_Param_bAllowRemoteActivation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppActivateAbilityWithTag(Z_Param_AbilityTagL,Z_Param_bAllowRemoteActivation);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppActivateAbilityWithTag ****************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppAddArrNewGameplayAbility ************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppAddArrNewGameplayAbility_Parms
	{
		TArray<TSubclassOf<USGSCppGameplayAbility>> NewArrGameplayAbilities;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Add" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppAddArrNewGameplayAbility constinit property declarations *******
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewArrGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewArrGameplayAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppAddArrNewGameplayAbility constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppAddArrNewGameplayAbility Property Definitions ******************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::NewProp_NewArrGameplayAbilities_Inner = { "NewArrGameplayAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USGSCppGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::NewProp_NewArrGameplayAbilities = { "NewArrGameplayAbilities", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppAddArrNewGameplayAbility_Parms, NewArrGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::NewProp_NewArrGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::NewProp_NewArrGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppAddArrNewGameplayAbility Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppAddArrNewGameplayAbility", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::SGSCppCharacterBase_eventFSGSCppAddArrNewGameplayAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::SGSCppCharacterBase_eventFSGSCppAddArrNewGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppAddArrNewGameplayAbility)
{
	P_GET_TARRAY(TSubclassOf<USGSCppGameplayAbility>,Z_Param_NewArrGameplayAbilities);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppAddArrNewGameplayAbility(Z_Param_NewArrGameplayAbilities);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppAddArrNewGameplayAbility **************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppAddGameplayEffect *******************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppAddGameplayEffect_Parms
	{
		TSubclassOf<UGameplayEffect> GameplayEffectL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|GameplayEffect|Add" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* GameplayEffect\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayEffect" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppAddGameplayEffect constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppAddGameplayEffect constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppAddGameplayEffect Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::NewProp_GameplayEffectL = { "GameplayEffectL", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppAddGameplayEffect_Parms, GameplayEffectL), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::NewProp_GameplayEffectL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppAddGameplayEffect Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppAddGameplayEffect", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::SGSCppCharacterBase_eventFSGSCppAddGameplayEffect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::SGSCppCharacterBase_eventFSGSCppAddGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppAddGameplayEffect)
{
	P_GET_OBJECT(UClass,Z_Param_GameplayEffectL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppAddGameplayEffect(Z_Param_GameplayEffectL);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppAddGameplayEffect *********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppAddGameplayEffects ******************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppAddGameplayEffects_Parms
	{
		TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|GameplayEffect|Add" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppAddGameplayEffects constinit property declarations *************
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectsL_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectsL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppAddGameplayEffects constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppAddGameplayEffects Property Definitions ************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::NewProp_GameplayEffectsL_Inner = { "GameplayEffectsL", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::NewProp_GameplayEffectsL = { "GameplayEffectsL", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppAddGameplayEffects_Parms, GameplayEffectsL), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::NewProp_GameplayEffectsL_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::NewProp_GameplayEffectsL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppAddGameplayEffects Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppAddGameplayEffects", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::SGSCppCharacterBase_eventFSGSCppAddGameplayEffects_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::SGSCppCharacterBase_eventFSGSCppAddGameplayEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppAddGameplayEffects)
{
	P_GET_TARRAY(TSubclassOf<UGameplayEffect>,Z_Param_GameplayEffectsL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppAddGameplayEffects(Z_Param_GameplayEffectsL);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppAddGameplayEffects ********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppAddNewGameplayAbility ***************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms
	{
		TSubclassOf<USGSCppGameplayAbility> NewGameplayAbility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Add" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppAddNewGameplayAbility constinit property declarations **********
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewGameplayAbility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppAddNewGameplayAbility constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppAddNewGameplayAbility Property Definitions *********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_NewGameplayAbility = { "NewGameplayAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms, NewGameplayAbility), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USGSCppGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_NewGameplayAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppAddNewGameplayAbility Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppAddNewGameplayAbility", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::SGSCppCharacterBase_eventFSGSCppAddNewGameplayAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppAddNewGameplayAbility)
{
	P_GET_OBJECT(UClass,Z_Param_NewGameplayAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppAddNewGameplayAbility(Z_Param_NewGameplayAbility);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppAddNewGameplayAbility *****************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppCancelAbility ***********************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppCancelAbility_Parms
	{
		FGameplayTag AbilityTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Cancel" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppCancelAbility constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppCancelAbility constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppCancelAbility Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppCancelAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppCancelAbility Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppCancelAbility", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::SGSCppCharacterBase_eventFSGSCppCancelAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::SGSCppCharacterBase_eventFSGSCppCancelAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppCancelAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppCancelAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppCancelAbility *************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetActiveAbilitiesWithTags **********
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetActiveAbilitiesWithTags_Parms
	{
		FGameplayTagContainer AbilityTags;
		TArray<USGSCppGameplayAbility*> ActiveAbilities;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Gettter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetActiveAbilitiesWithTags constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetActiveAbilitiesWithTags constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetActiveAbilitiesWithTags Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetActiveAbilitiesWithTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities_Inner = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USGSCppGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetActiveAbilitiesWithTags_Parms, ActiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::NewProp_ActiveAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetActiveAbilitiesWithTags Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetActiveAbilitiesWithTags", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::SGSCppCharacterBase_eventFSGSCppGetActiveAbilitiesWithTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::SGSCppCharacterBase_eventFSGSCppGetActiveAbilitiesWithTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetActiveAbilitiesWithTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_GET_TARRAY_REF(USGSCppGameplayAbility*,Z_Param_Out_ActiveAbilities);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppGetActiveAbilitiesWithTags(Z_Param_AbilityTags,Z_Param_Out_ActiveAbilities);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetActiveAbilitiesWithTags ************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetAttributeSet *********************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetAttributeSet_Parms
	{
		USGSCppAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xd0\x94\xd0\xb0\xd0\xbd\xd0\xbd\xd1\x8b\xd0\xb5 Getter\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x94\xd0\xb0\xd0\xbd\xd0\xbd\xd1\x8b\xd0\xb5 Getter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetAttributeSet constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetAttributeSet constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetAttributeSet Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetAttributeSet_Parms, ReturnValue), Z_Construct_UClass_USGSCppAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetAttributeSet Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetAttributeSet", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::SGSCppCharacterBase_eventFSGSCppGetAttributeSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::SGSCppCharacterBase_eventFSGSCppGetAttributeSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetAttributeSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSCppAttributeSet**)Z_Param__Result=P_THIS->FSGSCppGetAttributeSet();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetAttributeSet ***********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetCharacterLevel *******************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the character level that is passed to the ability system */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the character level that is passed to the ability system" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetCharacterLevel constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetCharacterLevel constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetCharacterLevel Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetCharacterLevel Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetCharacterLevel", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::SGSCppCharacterBase_eventFSGSCppGetCharacterLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::SGSCppCharacterBase_eventFSGSCppGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FSGSCppGetCharacterLevel();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetCharacterLevel *********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetCooldownRemainingForTag **********
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms
	{
		FGameplayTagContainer CooldownTags;
		float TimeRemaining;
		float CooldownDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Abilities|Gettter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetCooldownRemainingForTag constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetCooldownRemainingForTag constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetCooldownRemainingForTag Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms, CooldownDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_CooldownTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetCooldownRemainingForTag Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetCooldownRemainingForTag", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::SGSCppCharacterBase_eventFSGSCppGetCooldownRemainingForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetCooldownRemainingForTag)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeRemaining);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CooldownDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppGetCooldownRemainingForTag(Z_Param_CooldownTags,Z_Param_Out_TimeRemaining,Z_Param_Out_CooldownDuration);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetCooldownRemainingForTag ************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetHealth ***************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetHealth constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetHealth constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetHealth Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetHealth Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetHealth", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::SGSCppCharacterBase_eventFSGSCppGetHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::SGSCppCharacterBase_eventFSGSCppGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->FSGSCppGetHealth();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetHealth *****************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetIsAlive **************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetIsAlive constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetIsAlive constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetIsAlive Property Definitions ********************************
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppGetIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppGetIsAlive_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetIsAlive Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetIsAlive", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::SGSCppCharacterBase_eventFSGSCppGetIsAlive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::SGSCppCharacterBase_eventFSGSCppGetIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppGetIsAlive();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetIsAlive ****************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetMana *****************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns current mana */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current mana" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetMana constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetMana constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetMana Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetMana Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetMana", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::SGSCppCharacterBase_eventFSGSCppGetMana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::SGSCppCharacterBase_eventFSGSCppGetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->FSGSCppGetMana();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetMana *******************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetMaxHealth ************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns maximum health, health will never be greater than this */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns maximum health, health will never be greater than this" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetMaxHealth constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetMaxHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetMaxHealth Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetMaxHealth Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetMaxHealth", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::SGSCppCharacterBase_eventFSGSCppGetMaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::SGSCppCharacterBase_eventFSGSCppGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->FSGSCppGetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetMaxHealth **************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetMaxMana **************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetMaxMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns maximum mana, mana will never be greater than this */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns maximum mana, mana will never be greater than this" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetMaxMana constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetMaxMana constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetMaxMana Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetMaxMana Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetMaxMana", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::SGSCppCharacterBase_eventFSGSCppGetMaxMana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::SGSCppCharacterBase_eventFSGSCppGetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetMaxMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->FSGSCppGetMaxMana();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetMaxMana ****************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppGetMoveSpeed ************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns current movement speed */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns current movement speed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppGetMoveSpeed constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppGetMoveSpeed constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppGetMoveSpeed Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppGetMoveSpeed Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppGetMoveSpeed", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::SGSCppCharacterBase_eventFSGSCppGetMoveSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::SGSCppCharacterBase_eventFSGSCppGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->FSGSCppGetMoveSpeed();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppGetMoveSpeed **************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppInitializationCharacterAttrubite ****
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Character Attrubite\n\x09*///UFUNCTION(BlueprintCallable, Category = \"FSGSCpp|Attr|Initialization\")\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Attrubite\n       //UFUNCTION(BlueprintCallable, Category = \"FSGSCpp|Attr|Initialization\")" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppInitializationCharacterAttrubite constinit property declarations 
// ********** End Function FSGSCppInitializationCharacterAttrubite constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppInitializationCharacterAttrubite", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppInitializationCharacterAttrubite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppInitializationCharacterAttrubite();
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppInitializationCharacterAttrubite ******

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppOnDamaged ***************************
struct SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms
{
	float DamageAmount;
	FHitResult HitInfo;
	FGameplayTagContainer DamageTags;
	ASGSCppCharacterBase* InstigatorCharacter;
	AActor* DamageCauser;
};
static FName NAME_ASGSCppCharacterBase_FSGSCppOnDamaged = FName(TEXT("FSGSCppOnDamaged"));
void ASGSCppCharacterBase::FSGSCppOnDamaged(float DamageAmount, FHitResult const& HitInfo, FGameplayTagContainer const& DamageTags, ASGSCppCharacterBase* InstigatorCharacter, AActor* DamageCauser)
{
	SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.HitInfo=HitInfo;
	Parms.DamageTags=DamageTags;
	Parms.InstigatorCharacter=InstigatorCharacter;
	Parms.DamageCauser=DamageCauser;
	UFunction* Func = FindFunctionChecked(NAME_ASGSCppCharacterBase_FSGSCppOnDamaged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when character takes damage, which may have killed them\n\x09 *\n\x09 * @param DamageAmount Amount of damage that was done, not clamped based on current health\n\x09 * @param HitInfo The hit info that generated this damage\n\x09 * @param DamageTags The gameplay tags of the event that did the damage\n\x09 * @param InstigatorCharacter The character that initiated this damage\n\x09 * @param DamageCauser The actual actor that did the damage, might be a weapon or projectile\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when character takes damage, which may have killed them\n\n@param DamageAmount Amount of damage that was done, not clamped based on current health\n@param HitInfo The hit info that generated this damage\n@param DamageTags The gameplay tags of the event that did the damage\n@param InstigatorCharacter The character that initiated this damage\n@param DamageCauser The actual actor that did the damage, might be a weapon or projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppOnDamaged constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppOnDamaged constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppOnDamaged Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 222120718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageTags = { "DamageTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms, DamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTags_MetaData), NewProp_DamageTags_MetaData) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms, InstigatorCharacter), Z_Construct_UClass_ASGSCppCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppOnDamaged Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppOnDamaged", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::PropPointers), 
sizeof(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSCppCharacterBase_eventFSGSCppOnDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppOnDamaged *****************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppOnHealthChanged *********************
struct SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static FName NAME_ASGSCppCharacterBase_FSGSCppOnHealthChanged = FName(TEXT("FSGSCppOnHealthChanged"));
void ASGSCppCharacterBase::FSGSCppOnHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ASGSCppCharacterBase_FSGSCppOnHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when health is changed, either from healing or from being damaged\n\x09 * For damage this is called in addition to OnDamaged/OnKilled\n\x09 *\n\x09 * @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when health is changed, either from healing or from being damaged\nFor damage this is called in addition to OnDamaged/OnKilled\n\n@param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppOnHealthChanged constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppOnHealthChanged constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppOnHealthChanged Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppOnHealthChanged Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppOnHealthChanged", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::PropPointers), 
sizeof(SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSCppCharacterBase_eventFSGSCppOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppOnHealthChanged ***********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppOnManaChanged ***********************
struct SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static FName NAME_ASGSCppCharacterBase_FSGSCppOnManaChanged = FName(TEXT("FSGSCppOnManaChanged"));
void ASGSCppCharacterBase::FSGSCppOnManaChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ASGSCppCharacterBase_FSGSCppOnManaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when mana is changed, either from healing or from being used as a cost\n\x09 *\n\x09 * @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when mana is changed, either from healing or from being used as a cost\n\n@param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppOnManaChanged constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppOnManaChanged constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppOnManaChanged Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppOnManaChanged Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppOnManaChanged", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::PropPointers), 
sizeof(SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSCppCharacterBase_eventFSGSCppOnManaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppOnManaChanged *************************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppOnMoveSpeedChanged ******************
struct SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static FName NAME_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged = FName(TEXT("FSGSCppOnMoveSpeedChanged"));
void ASGSCppCharacterBase::FSGSCppOnMoveSpeedChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when movement speed is changed\n\x09 *\n\x09 * @param DeltaValue Change in move speed\n\x09 * @param EventTags The gameplay tags of the event that changed mana\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when movement speed is changed\n\n@param DeltaValue Change in move speed\n@param EventTags The gameplay tags of the event that changed mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppOnMoveSpeedChanged constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppOnMoveSpeedChanged constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppOnMoveSpeedChanged Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppOnMoveSpeedChanged Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppOnMoveSpeedChanged", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::PropPointers), 
sizeof(SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSCppCharacterBase_eventFSGSCppOnMoveSpeedChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppOnMoveSpeedChanged ********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppSetCharacterLevel *******************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms
	{
		int32 NewLevel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Setter" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppSetCharacterLevel constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppSetCharacterLevel constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppSetCharacterLevel Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms), &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppSetCharacterLevel Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppSetCharacterLevel", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::SGSCppCharacterBase_eventFSGSCppSetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppSetCharacterLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FSGSCppSetCharacterLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppSetCharacterLevel *********************

// ********** Begin Class ASGSCppCharacterBase Function FSGSCppSetHealth ***************************
struct Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics
{
	struct SGSCppCharacterBase_eventFSGSCppSetHealth_Parms
	{
		float SetNewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSGSCpp|Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* \xd0\x94\xd0\xb0\xd0\xbd\xd0\xbd\xd1\x8b\xd0\xb5 Setter\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x94\xd0\xb0\xd0\xbd\xd0\xbd\xd1\x8b\xd0\xb5 Setter" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FSGSCppSetHealth constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SetNewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FSGSCppSetHealth constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FSGSCppSetHealth Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::NewProp_SetNewHealth = { "SetNewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppCharacterBase_eventFSGSCppSetHealth_Parms, SetNewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::NewProp_SetNewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::PropPointers) < 2048);
// ********** End Function FSGSCppSetHealth Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGSCppCharacterBase, nullptr, "FSGSCppSetHealth", 	Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::SGSCppCharacterBase_eventFSGSCppSetHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::SGSCppCharacterBase_eventFSGSCppSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGSCppCharacterBase::execFSGSCppSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SetNewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FSGSCppSetHealth(Z_Param_SetNewHealth);
	P_NATIVE_END;
}
// ********** End Class ASGSCppCharacterBase Function FSGSCppSetHealth *****************************

// ********** Begin Class ASGSCppCharacterBase *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASGSCppCharacterBase;
UClass* ASGSCppCharacterBase::GetPrivateStaticClass()
{
	using TClass = ASGSCppCharacterBase;
	if (!Z_Registration_Info_UClass_ASGSCppCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppCharacterBase"),
			Z_Registration_Info_UClass_ASGSCppCharacterBase.InnerSingleton,
			StaticRegisterNativesASGSCppCharacterBase,
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
	return Z_Registration_Info_UClass_ASGSCppCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGSCppCharacterBase_NoRegister()
{
	return ASGSCppCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGSCppCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SGSCppCharacterBase.h" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrActiveAbilities_MetaData[] = {
		{ "Category", "FSGSCpp|Character|Active" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "FSGSCpp|Character|Active" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The level of this character, should not be modified directly once it has already spawned */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The level of this character, should not be modified directly once it has already spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbilitiesInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[] = {
		{ "Category", "FSGSCpp|Character|Passive" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_MetaData[] = {
		{ "Category", "FSGSCpp|Character|Passive" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The component used to handle ability system interactions */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component used to handle ability system interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of attributes modified by the ability system */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGSCppCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of attributes modified by the ability system" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASGSCppCharacterBase constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrActiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrActiveAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bAbilitiesInitialized;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASGSCppCharacterBase constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FSGSCppActivateAbilitiesWithTags"), .Pointer = &ASGSCppCharacterBase::execFSGSCppActivateAbilitiesWithTags },
		{ .NameUTF8 = UTF8TEXT("FSGSCppActivateAbilityWithTag"), .Pointer = &ASGSCppCharacterBase::execFSGSCppActivateAbilityWithTag },
		{ .NameUTF8 = UTF8TEXT("FSGSCppAddArrNewGameplayAbility"), .Pointer = &ASGSCppCharacterBase::execFSGSCppAddArrNewGameplayAbility },
		{ .NameUTF8 = UTF8TEXT("FSGSCppAddGameplayEffect"), .Pointer = &ASGSCppCharacterBase::execFSGSCppAddGameplayEffect },
		{ .NameUTF8 = UTF8TEXT("FSGSCppAddGameplayEffects"), .Pointer = &ASGSCppCharacterBase::execFSGSCppAddGameplayEffects },
		{ .NameUTF8 = UTF8TEXT("FSGSCppAddNewGameplayAbility"), .Pointer = &ASGSCppCharacterBase::execFSGSCppAddNewGameplayAbility },
		{ .NameUTF8 = UTF8TEXT("FSGSCppCancelAbility"), .Pointer = &ASGSCppCharacterBase::execFSGSCppCancelAbility },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetActiveAbilitiesWithTags"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetActiveAbilitiesWithTags },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetAttributeSet"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetAttributeSet },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetCharacterLevel"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetCharacterLevel },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetCooldownRemainingForTag"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetCooldownRemainingForTag },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetHealth"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetHealth },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetIsAlive"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetIsAlive },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetMana"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetMana },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetMaxHealth"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetMaxHealth },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetMaxMana"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetMaxMana },
		{ .NameUTF8 = UTF8TEXT("FSGSCppGetMoveSpeed"), .Pointer = &ASGSCppCharacterBase::execFSGSCppGetMoveSpeed },
		{ .NameUTF8 = UTF8TEXT("FSGSCppInitializationCharacterAttrubite"), .Pointer = &ASGSCppCharacterBase::execFSGSCppInitializationCharacterAttrubite },
		{ .NameUTF8 = UTF8TEXT("FSGSCppSetCharacterLevel"), .Pointer = &ASGSCppCharacterBase::execFSGSCppSetCharacterLevel },
		{ .NameUTF8 = UTF8TEXT("FSGSCppSetHealth"), .Pointer = &ASGSCppCharacterBase::execFSGSCppSetHealth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilitiesWithTags, "FSGSCppActivateAbilitiesWithTags" }, // 2449360599
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppActivateAbilityWithTag, "FSGSCppActivateAbilityWithTag" }, // 2021548393
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddArrNewGameplayAbility, "FSGSCppAddArrNewGameplayAbility" }, // 3795384641
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffect, "FSGSCppAddGameplayEffect" }, // 3716715689
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddGameplayEffects, "FSGSCppAddGameplayEffects" }, // 2277693775
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppAddNewGameplayAbility, "FSGSCppAddNewGameplayAbility" }, // 3740840912
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppCancelAbility, "FSGSCppCancelAbility" }, // 997780484
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetActiveAbilitiesWithTags, "FSGSCppGetActiveAbilitiesWithTags" }, // 4210491657
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetAttributeSet, "FSGSCppGetAttributeSet" }, // 792454416
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCharacterLevel, "FSGSCppGetCharacterLevel" }, // 2434058136
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetCooldownRemainingForTag, "FSGSCppGetCooldownRemainingForTag" }, // 2087652558
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetHealth, "FSGSCppGetHealth" }, // 854458126
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetIsAlive, "FSGSCppGetIsAlive" }, // 1237867065
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMana, "FSGSCppGetMana" }, // 1923211347
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxHealth, "FSGSCppGetMaxHealth" }, // 1600762863
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMaxMana, "FSGSCppGetMaxMana" }, // 428647890
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppGetMoveSpeed, "FSGSCppGetMoveSpeed" }, // 3871085947
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppInitializationCharacterAttrubite, "FSGSCppInitializationCharacterAttrubite" }, // 1706680945
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnDamaged, "FSGSCppOnDamaged" }, // 3482486920
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnHealthChanged, "FSGSCppOnHealthChanged" }, // 3526734612
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnManaChanged, "FSGSCppOnManaChanged" }, // 3417273565
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppOnMoveSpeedChanged, "FSGSCppOnMoveSpeedChanged" }, // 738507520
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetCharacterLevel, "FSGSCppSetCharacterLevel" }, // 3537573568
		{ &Z_Construct_UFunction_ASGSCppCharacterBase_FSGSCppSetHealth, "FSGSCppSetHealth" }, // 4018540958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGSCppCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASGSCppCharacterBase_Statics

// ********** Begin Class ASGSCppCharacterBase Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_ArrActiveAbilities_Inner = { "ArrActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USGSCppGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_ArrActiveAbilities = { "ArrActiveAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, ArrActiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrActiveAbilities_MetaData), NewProp_ArrActiveAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_bAbilitiesInitialized = { "bAbilitiesInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, bAbilitiesInitialized), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbilitiesInitialized_MetaData), NewProp_bAbilitiesInitialized_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USGSCppGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, GameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilities_MetaData), NewProp_GameplayAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayEffects_Inner = { "GameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayEffects = { "GameplayEffects", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, GameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffects_MetaData), NewProp_GameplayEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, AbilitySystemComponent), Z_Construct_UClass_USGSCppAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGSCppCharacterBase, AttributeSet), Z_Construct_UClass_USGSCppAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGSCppCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_ArrActiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_ArrActiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_bAbilitiesInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_GameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGSCppCharacterBase_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSCppCharacterBase_Statics::PropPointers) < 2048);
// ********** End Class ASGSCppCharacterBase Property Definitions **********************************
UObject* (*const Z_Construct_UClass_ASGSCppCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSCppCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASGSCppCharacterBase, IAbilitySystemInterface), false },  // 2722098046
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASGSCppCharacterBase, IGenericTeamAgentInterface), false },  // 2796404058
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGSCppCharacterBase_Statics::ClassParams = {
	&ASGSCppCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGSCppCharacterBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGSCppCharacterBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGSCppCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGSCppCharacterBase_Statics::Class_MetaDataParams)
};
void ASGSCppCharacterBase::StaticRegisterNativesASGSCppCharacterBase()
{
	UClass* Class = ASGSCppCharacterBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASGSCppCharacterBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASGSCppCharacterBase()
{
	if (!Z_Registration_Info_UClass_ASGSCppCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGSCppCharacterBase.OuterSingleton, Z_Construct_UClass_ASGSCppCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGSCppCharacterBase.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ASGSCppCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CharacterLevel(TEXT("CharacterLevel"));
	const bool bIsValid = true
		&& Name_CharacterLevel == ClassReps[(int32)ENetFields_Private::CharacterLevel].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGSCppCharacterBase"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASGSCppCharacterBase);
ASGSCppCharacterBase::~ASGSCppCharacterBase() {}
// ********** End Class ASGSCppCharacterBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGSCppCharacterBase, ASGSCppCharacterBase::StaticClass, TEXT("ASGSCppCharacterBase"), &Z_Registration_Info_UClass_ASGSCppCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGSCppCharacterBase), 456798770U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h__Script_SirGasSystem_2594936915{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
