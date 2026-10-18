// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SGSCppAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAttributeSet();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_AttackPower ***************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics
{
	struct SGSCppAttributeSet_eventOnRep_AttackPower_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_AttackPower constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_AttackPower constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_AttackPower Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_AttackPower_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::PropPointers) < 2048);
// ********** End Function OnRep_AttackPower Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_AttackPower", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::SGSCppAttributeSet_eventOnRep_AttackPower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::SGSCppAttributeSet_eventOnRep_AttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_AttackPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackPower(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_AttackPower *****************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_DefensePower **************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics
{
	struct SGSCppAttributeSet_eventOnRep_DefensePower_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_DefensePower constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_DefensePower constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_DefensePower Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_DefensePower_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::PropPointers) < 2048);
// ********** End Function OnRep_DefensePower Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_DefensePower", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::SGSCppAttributeSet_eventOnRep_DefensePower_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::SGSCppAttributeSet_eventOnRep_DefensePower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_DefensePower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefensePower(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_DefensePower ****************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_ExperienceCur *************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics
{
	struct SGSCppAttributeSet_eventOnRep_ExperienceCur_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ExperienceCur constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ExperienceCur constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ExperienceCur Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_ExperienceCur_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::PropPointers) < 2048);
// ********** End Function OnRep_ExperienceCur Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_ExperienceCur", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::SGSCppAttributeSet_eventOnRep_ExperienceCur_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::SGSCppAttributeSet_eventOnRep_ExperienceCur_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_ExperienceCur)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ExperienceCur(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_ExperienceCur ***************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_ExperienceMax *************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics
{
	struct SGSCppAttributeSet_eventOnRep_ExperienceMax_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ExperienceMax constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_ExperienceMax constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_ExperienceMax Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_ExperienceMax_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::PropPointers) < 2048);
// ********** End Function OnRep_ExperienceMax Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_ExperienceMax", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::SGSCppAttributeSet_eventOnRep_ExperienceMax_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::SGSCppAttributeSet_eventOnRep_ExperienceMax_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_ExperienceMax)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ExperienceMax(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_ExperienceMax ***************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_Health ********************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics
{
	struct SGSCppAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Health constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Health constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Health Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Health Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_Health", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::SGSCppAttributeSet_eventOnRep_Health_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::SGSCppAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_Health **********************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_Mana **********************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics
{
	struct SGSCppAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Mana constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_Mana constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_Mana Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_Mana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
// ********** End Function OnRep_Mana Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_Mana", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::SGSCppAttributeSet_eventOnRep_Mana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::SGSCppAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_Mana ************************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_MaxHealth *****************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics
{
	struct SGSCppAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxHealth constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxHealth constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxHealth Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxHealth Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_MaxHealth", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::SGSCppAttributeSet_eventOnRep_MaxHealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::SGSCppAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_MaxHealth *******************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_MaxMana *******************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics
{
	struct SGSCppAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MaxMana constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MaxMana constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MaxMana Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_MaxMana_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MaxMana Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_MaxMana", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::SGSCppAttributeSet_eventOnRep_MaxMana_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::SGSCppAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_MaxMana *********************************

// ********** Begin Class USGSCppAttributeSet Function OnRep_MoveSpeed *****************************
struct Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics
{
	struct SGSCppAttributeSet_eventOnRep_MoveSpeed_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_MoveSpeed constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRep_MoveSpeed constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRep_MoveSpeed Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventOnRep_MoveSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::PropPointers) < 2048);
// ********** End Function OnRep_MoveSpeed Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "OnRep_MoveSpeed", 	Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::SGSCppAttributeSet_eventOnRep_MoveSpeed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::SGSCppAttributeSet_eventOnRep_MoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execOnRep_MoveSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function OnRep_MoveSpeed *******************************

// ********** Begin Class USGSCppAttributeSet Function SetHpAndMaxHp *******************************
struct Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics
{
	struct SGSCppAttributeSet_eventSetHpAndMaxHp_Parms
	{
		float NewHpCurLocal;
		float NewHpMaxLocal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attr" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHpAndMaxHp constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHpCurLocal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHpMaxLocal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHpAndMaxHp constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHpAndMaxHp Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::NewProp_NewHpCurLocal = { "NewHpCurLocal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventSetHpAndMaxHp_Parms, NewHpCurLocal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::NewProp_NewHpMaxLocal = { "NewHpMaxLocal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAttributeSet_eventSetHpAndMaxHp_Parms, NewHpMaxLocal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::NewProp_NewHpCurLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::NewProp_NewHpMaxLocal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::PropPointers) < 2048);
// ********** End Function SetHpAndMaxHp Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAttributeSet, nullptr, "SetHpAndMaxHp", 	Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::SGSCppAttributeSet_eventSetHpAndMaxHp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::SGSCppAttributeSet_eventSetHpAndMaxHp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAttributeSet::execSetHpAndMaxHp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHpCurLocal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHpMaxLocal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHpAndMaxHp(Z_Param_NewHpCurLocal,Z_Param_NewHpMaxLocal);
	P_NATIVE_END;
}
// ********** End Class USGSCppAttributeSet Function SetHpAndMaxHp *********************************

// ********** Begin Class USGSCppAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppAttributeSet;
UClass* USGSCppAttributeSet::GetPrivateStaticClass()
{
	using TClass = USGSCppAttributeSet;
	if (!Z_Registration_Info_UClass_USGSCppAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppAttributeSet"),
			Z_Registration_Info_UClass_USGSCppAttributeSet.InnerSingleton,
			StaticRegisterNativesUSGSCppAttributeSet,
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
	return Z_Registration_Info_UClass_USGSCppAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppAttributeSet_NoRegister()
{
	return USGSCppAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/SGSCppAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current Health, when 0 we expect owner to die. Capped by MaxHealth */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Health, when 0 we expect owner to die. Capped by MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MaxHealth is its own attribute, since GameplayEffects may modify it */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth is its own attribute, since GameplayEffects may modify it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current Mana, used to execute special abilities. Capped by MaxMana */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Mana, used to execute special abilities. Capped by MaxMana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MaxMana is its own attribute, since GameplayEffects may modify it */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxMana is its own attribute, since GameplayEffects may modify it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AttackPower of the attacker is multiplied by the base Damage to reduce health, so 1.0 means no bonus */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackPower of the attacker is multiplied by the base Damage to reduce health, so 1.0 means no bonus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base Damage is divided by DefensePower to get actual damage done, so 1.0 means no bonus */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Damage is divided by DefensePower to get actual damage done, so 1.0 means no bonus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveSpeed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MoveSpeed affects how fast characters can move */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MoveSpeed affects how fast characters can move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceCur_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceMax_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppAttributeSet constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefensePower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceCur;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USGSCppAttributeSet constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnRep_AttackPower"), .Pointer = &USGSCppAttributeSet::execOnRep_AttackPower },
		{ .NameUTF8 = UTF8TEXT("OnRep_DefensePower"), .Pointer = &USGSCppAttributeSet::execOnRep_DefensePower },
		{ .NameUTF8 = UTF8TEXT("OnRep_ExperienceCur"), .Pointer = &USGSCppAttributeSet::execOnRep_ExperienceCur },
		{ .NameUTF8 = UTF8TEXT("OnRep_ExperienceMax"), .Pointer = &USGSCppAttributeSet::execOnRep_ExperienceMax },
		{ .NameUTF8 = UTF8TEXT("OnRep_Health"), .Pointer = &USGSCppAttributeSet::execOnRep_Health },
		{ .NameUTF8 = UTF8TEXT("OnRep_Mana"), .Pointer = &USGSCppAttributeSet::execOnRep_Mana },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxHealth"), .Pointer = &USGSCppAttributeSet::execOnRep_MaxHealth },
		{ .NameUTF8 = UTF8TEXT("OnRep_MaxMana"), .Pointer = &USGSCppAttributeSet::execOnRep_MaxMana },
		{ .NameUTF8 = UTF8TEXT("OnRep_MoveSpeed"), .Pointer = &USGSCppAttributeSet::execOnRep_MoveSpeed },
		{ .NameUTF8 = UTF8TEXT("SetHpAndMaxHp"), .Pointer = &USGSCppAttributeSet::execSetHpAndMaxHp },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 257101711
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_DefensePower, "OnRep_DefensePower" }, // 1635001408
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceCur, "OnRep_ExperienceCur" }, // 4022922284
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_ExperienceMax, "OnRep_ExperienceMax" }, // 557537054
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Health, "OnRep_Health" }, // 2836819013
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 2885936690
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 650788888
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 3474220894
		{ &Z_Construct_UFunction_USGSCppAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 2813080599
		{ &Z_Construct_UFunction_USGSCppAttributeSet_SetHpAndMaxHp, "SetHpAndMaxHp" }, // 1633964136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppAttributeSet_Statics

// ********** Begin Class USGSCppAttributeSet Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", "OnRep_DefensePower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefensePower_MetaData), NewProp_DefensePower_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_ExperienceCur = { "ExperienceCur", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, ExperienceCur), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceCur_MetaData), NewProp_ExperienceCur_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_ExperienceMax = { "ExperienceMax", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAttributeSet, ExperienceMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceMax_MetaData), NewProp_ExperienceMax_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGSCppAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_DefensePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_ExperienceCur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAttributeSet_Statics::NewProp_ExperienceMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class USGSCppAttributeSet Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USGSCppAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppAttributeSet_Statics::ClassParams = {
	&USGSCppAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGSCppAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppAttributeSet_Statics::Class_MetaDataParams)
};
void USGSCppAttributeSet::StaticRegisterNativesUSGSCppAttributeSet()
{
	UClass* Class = USGSCppAttributeSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USGSCppAttributeSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_USGSCppAttributeSet()
{
	if (!Z_Registration_Info_UClass_USGSCppAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppAttributeSet.OuterSingleton, Z_Construct_UClass_USGSCppAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppAttributeSet.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USGSCppAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_Mana(TEXT("Mana"));
	static FName Name_MaxMana(TEXT("MaxMana"));
	static FName Name_AttackPower(TEXT("AttackPower"));
	static FName Name_DefensePower(TEXT("DefensePower"));
	static FName Name_MoveSpeed(TEXT("MoveSpeed"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName()
		&& Name_DefensePower == ClassReps[(int32)ENetFields_Private::DefensePower].Property->GetFName()
		&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USGSCppAttributeSet"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppAttributeSet);
USGSCppAttributeSet::~USGSCppAttributeSet() {}
// ********** End Class USGSCppAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppAttributeSet, USGSCppAttributeSet::StaticClass, TEXT("USGSCppAttributeSet"), &Z_Registration_Info_UClass_USGSCppAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppAttributeSet), 2293937724U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h__Script_SirGasSystem_150619361{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
