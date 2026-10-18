// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSCppAsyncTaskAttributeChanged.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppAsyncTaskAttributeChanged() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister();
SIRGASSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAttributeChanged ***************************************************
struct Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics
{
	struct _Script_SirGasSystem_eventOnAttributeChanged_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAttributeChanged constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAttributeChanged constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAttributeChanged Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnAttributeChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAttributeChanged Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SirGasSystem, nullptr, "OnAttributeChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::_Script_SirGasSystem_eventOnAttributeChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::_Script_SirGasSystem_eventOnAttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue)
{
	struct _Script_SirGasSystem_eventOnAttributeChanged_Parms
	{
		FGameplayAttribute Attribute;
		float NewValue;
		float OldValue;
	};
	_Script_SirGasSystem_eventOnAttributeChanged_Parms Parms;
	Parms.Attribute=Attribute;
	Parms.NewValue=NewValue;
	Parms.OldValue=OldValue;
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttributeChanged *****************************************************

// ********** Begin Class USGSCppAsyncTaskAttributeChanged Function EndTask ************************
struct Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndTask constinit property declarations *******************************
// ********** End Function EndTask constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged, nullptr, "EndTask", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAsyncTaskAttributeChanged::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// ********** End Class USGSCppAsyncTaskAttributeChanged Function EndTask **************************

// ********** Begin Class USGSCppAsyncTaskAttributeChanged Function ListenForAttributeChange *******
struct Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics
{
	struct SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayAttribute Attribute;
		USGSCppAsyncTaskAttributeChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for an attribute changing.\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for an attribute changing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForAttributeChange constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForAttributeChange constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForAttributeChange Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, ReturnValue), Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers) < 2048);
// ********** End Function ListenForAttributeChange Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged, nullptr, "ListenForAttributeChange", 	Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::SGSCppAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAsyncTaskAttributeChanged::execListenForAttributeChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSCppAsyncTaskAttributeChanged**)Z_Param__Result=USGSCppAsyncTaskAttributeChanged::ListenForAttributeChange(Z_Param_AbilitySystemComponent,Z_Param_Attribute);
	P_NATIVE_END;
}
// ********** End Class USGSCppAsyncTaskAttributeChanged Function ListenForAttributeChange *********

// ********** Begin Class USGSCppAsyncTaskAttributeChanged Function ListenForAttributesChange ******
struct Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics
{
	struct SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		TArray<FGameplayAttribute> Attributes;
		USGSCppAsyncTaskAttributeChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for an attribute changing.\n// Version that takes in an array of Attributes. Check the Attribute output for which Attribute changed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for an attribute changing.\nVersion that takes in an array of Attributes. Check the Attribute output for which Attribute changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForAttributesChange constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForAttributesChange constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForAttributesChange Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, ReturnValue), Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers) < 2048);
// ********** End Function ListenForAttributesChange Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged, nullptr, "ListenForAttributesChange", 	Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::SGSCppAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAsyncTaskAttributeChanged::execListenForAttributesChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_TARRAY(FGameplayAttribute,Z_Param_Attributes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSCppAsyncTaskAttributeChanged**)Z_Param__Result=USGSCppAsyncTaskAttributeChanged::ListenForAttributesChange(Z_Param_AbilitySystemComponent,Z_Param_Attributes);
	P_NATIVE_END;
}
// ********** End Class USGSCppAsyncTaskAttributeChanged Function ListenForAttributesChange ********

// ********** Begin Class USGSCppAsyncTaskAttributeChanged *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged;
UClass* USGSCppAsyncTaskAttributeChanged::GetPrivateStaticClass()
{
	using TClass = USGSCppAsyncTaskAttributeChanged;
	if (!Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppAsyncTaskAttributeChanged"),
			Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.InnerSingleton,
			StaticRegisterNativesUSGSCppAsyncTaskAttributeChanged,
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
	return Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister()
{
	return USGSCppAsyncTaskAttributeChanged::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SGSCppAsyncTaskAttributeChanged.h" },
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskAttributeChanged.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppAsyncTaskAttributeChanged constinit property declarations *********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USGSCppAsyncTaskAttributeChanged constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndTask"), .Pointer = &USGSCppAsyncTaskAttributeChanged::execEndTask },
		{ .NameUTF8 = UTF8TEXT("ListenForAttributeChange"), .Pointer = &USGSCppAsyncTaskAttributeChanged::execListenForAttributeChange },
		{ .NameUTF8 = UTF8TEXT("ListenForAttributesChange"), .Pointer = &USGSCppAsyncTaskAttributeChanged::execListenForAttributesChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_EndTask, "EndTask" }, // 3783585535
		{ &Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributeChange, "ListenForAttributeChange" }, // 3817001820
		{ &Z_Construct_UFunction_USGSCppAsyncTaskAttributeChanged_ListenForAttributesChange, "ListenForAttributesChange" }, // 3383231404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppAsyncTaskAttributeChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics

// ********** Begin Class USGSCppAsyncTaskAttributeChanged Property Definitions ********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAsyncTaskAttributeChanged, OnAttributeChanged), Z_Construct_UDelegateFunction_SirGasSystem_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttributeChanged_MetaData), NewProp_OnAttributeChanged_MetaData) }; // 2621868037
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAsyncTaskAttributeChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::PropPointers) < 2048);
// ********** End Class USGSCppAsyncTaskAttributeChanged Property Definitions **********************
UObject* (*const Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::ClassParams = {
	&USGSCppAsyncTaskAttributeChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::Class_MetaDataParams)
};
void USGSCppAsyncTaskAttributeChanged::StaticRegisterNativesUSGSCppAsyncTaskAttributeChanged()
{
	UClass* Class = USGSCppAsyncTaskAttributeChanged::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::Funcs));
}
UClass* Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged()
{
	if (!Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.OuterSingleton, Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged.OuterSingleton;
}
USGSCppAsyncTaskAttributeChanged::USGSCppAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppAsyncTaskAttributeChanged);
USGSCppAsyncTaskAttributeChanged::~USGSCppAsyncTaskAttributeChanged() {}
// ********** End Class USGSCppAsyncTaskAttributeChanged *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged, USGSCppAsyncTaskAttributeChanged::StaticClass, TEXT("USGSCppAsyncTaskAttributeChanged"), &Z_Registration_Info_UClass_USGSCppAsyncTaskAttributeChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppAsyncTaskAttributeChanged), 1318506272U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h__Script_SirGasSystem_3859290047{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
