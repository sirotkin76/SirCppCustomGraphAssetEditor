// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGSCppAsyncTaskCooldownChanged.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppAsyncTaskCooldownChanged() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister();
SIRGASSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCooldownChanged ****************************************************
struct Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics
{
	struct _Script_SirGasSystem_eventOnCooldownChanged_Parms
	{
		FGameplayTag CooldownTag;
		float TimeRemaining;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnCooldownChanged constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnCooldownChanged constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnCooldownChanged Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnCooldownChanged_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SirGasSystem_eventOnCooldownChanged_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnCooldownChanged Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SirGasSystem, nullptr, "OnCooldownChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::_Script_SirGasSystem_eventOnCooldownChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::_Script_SirGasSystem_eventOnCooldownChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration)
{
	struct _Script_SirGasSystem_eventOnCooldownChanged_Parms
	{
		FGameplayTag CooldownTag;
		float TimeRemaining;
		float Duration;
	};
	_Script_SirGasSystem_eventOnCooldownChanged_Parms Parms;
	Parms.CooldownTag=CooldownTag;
	Parms.TimeRemaining=TimeRemaining;
	Parms.Duration=Duration;
	OnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCooldownChanged ******************************************************

// ********** Begin Class USGSCppAsyncTaskCooldownChanged Function EndTask *************************
struct Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndTask constinit property declarations *******************************
// ********** End Function EndTask constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged, nullptr, "EndTask", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAsyncTaskCooldownChanged::execEndTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTask();
	P_NATIVE_END;
}
// ********** End Class USGSCppAsyncTaskCooldownChanged Function EndTask ***************************

// ********** Begin Class USGSCppAsyncTaskCooldownChanged Function ListenForCooldownChange *********
struct Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics
{
	struct SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms
	{
		UAbilitySystemComponent* AbilitySystemComponent;
		FGameplayTagContainer CooldownTagsL;
		bool UseServerCooldownL;
		USGSCppAsyncTaskCooldownChanged* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\n// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\n// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.\n" },
#endif
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\nUseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\nIf using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ListenForCooldownChange constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTagsL;
	static void NewProp_UseServerCooldownL_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseServerCooldownL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ListenForCooldownChange constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ListenForCooldownChange Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTagsL = { "CooldownTagsL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, CooldownTagsL), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
void Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldownL_SetBit(void* Obj)
{
	((SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms*)Obj)->UseServerCooldownL = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldownL = { "UseServerCooldownL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms), &Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldownL_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTagsL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldownL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers) < 2048);
// ********** End Function ListenForCooldownChange Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged, nullptr, "ListenForCooldownChange", 	Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::SGSCppAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppAsyncTaskCooldownChanged::execListenForCooldownChange)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTagsL);
	P_GET_UBOOL(Z_Param_UseServerCooldownL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USGSCppAsyncTaskCooldownChanged**)Z_Param__Result=USGSCppAsyncTaskCooldownChanged::ListenForCooldownChange(Z_Param_AbilitySystemComponent,Z_Param_CooldownTagsL,Z_Param_UseServerCooldownL);
	P_NATIVE_END;
}
// ********** End Class USGSCppAsyncTaskCooldownChanged Function ListenForCooldownChange ***********

// ********** Begin Class USGSCppAsyncTaskCooldownChanged ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged;
UClass* USGSCppAsyncTaskCooldownChanged::GetPrivateStaticClass()
{
	using TClass = USGSCppAsyncTaskCooldownChanged;
	if (!Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppAsyncTaskCooldownChanged"),
			Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.InnerSingleton,
			StaticRegisterNativesUSGSCppAsyncTaskCooldownChanged,
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
	return Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister()
{
	return USGSCppAsyncTaskCooldownChanged::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SGSCppAsyncTaskCooldownChanged.h" },
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGSCppAsyncTaskCooldownChanged.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppAsyncTaskCooldownChanged constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USGSCppAsyncTaskCooldownChanged constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndTask"), .Pointer = &USGSCppAsyncTaskCooldownChanged::execEndTask },
		{ .NameUTF8 = UTF8TEXT("ListenForCooldownChange"), .Pointer = &USGSCppAsyncTaskCooldownChanged::execListenForCooldownChange },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_EndTask, "EndTask" }, // 3412202055
		{ &Z_Construct_UFunction_USGSCppAsyncTaskCooldownChanged_ListenForCooldownChange, "ListenForCooldownChange" }, // 3254919532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppAsyncTaskCooldownChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics

// ********** Begin Class USGSCppAsyncTaskCooldownChanged Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin = { "OnCooldownBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAsyncTaskCooldownChanged, OnCooldownBegin), Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCooldownBegin_MetaData), NewProp_OnCooldownBegin_MetaData) }; // 943110203
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAsyncTaskCooldownChanged, OnCooldownEnd), Z_Construct_UDelegateFunction_SirGasSystem_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCooldownEnd_MetaData), NewProp_OnCooldownEnd_MetaData) }; // 943110203
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGSCppAsyncTaskCooldownChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::PropPointers) < 2048);
// ********** End Class USGSCppAsyncTaskCooldownChanged Property Definitions ***********************
UObject* (*const Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::ClassParams = {
	&USGSCppAsyncTaskCooldownChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::Class_MetaDataParams)
};
void USGSCppAsyncTaskCooldownChanged::StaticRegisterNativesUSGSCppAsyncTaskCooldownChanged()
{
	UClass* Class = USGSCppAsyncTaskCooldownChanged::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::Funcs));
}
UClass* Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged()
{
	if (!Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.OuterSingleton, Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged.OuterSingleton;
}
USGSCppAsyncTaskCooldownChanged::USGSCppAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppAsyncTaskCooldownChanged);
USGSCppAsyncTaskCooldownChanged::~USGSCppAsyncTaskCooldownChanged() {}
// ********** End Class USGSCppAsyncTaskCooldownChanged ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged, USGSCppAsyncTaskCooldownChanged::StaticClass, TEXT("USGSCppAsyncTaskCooldownChanged"), &Z_Registration_Info_UClass_USGSCppAsyncTaskCooldownChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppAsyncTaskCooldownChanged), 2963822812U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h__Script_SirGasSystem_1302413520{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
