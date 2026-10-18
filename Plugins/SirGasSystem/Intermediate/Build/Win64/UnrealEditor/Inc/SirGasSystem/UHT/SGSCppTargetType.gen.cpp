// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SGSCppTargetType.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSGSCppTargetType() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_ASGSCppCharacterBase_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseEventData();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseEventData_NoRegister();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseOwner();
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseOwner_NoRegister();
UPackage* Z_Construct_UPackage__Script_SirGasSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGSCppTargetType Function GetTargets ************************************
struct SGSCppTargetType_eventGetTargets_Parms
{
	ASGSCppCharacterBase* TargetingCharacter;
	AActor* TargetingActor;
	FGameplayEventData EventData;
	TArray<FHitResult> OutHitResults;
	TArray<AActor*> OutActors;
};
static FName NAME_USGSCppTargetType_GetTargets = FName(TEXT("GetTargets"));
void USGSCppTargetType::GetTargets(ASGSCppCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const
{
	UFunction* Func = FindFunctionChecked(NAME_USGSCppTargetType_GetTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SGSCppTargetType_eventGetTargets_Parms Parms;
		Parms.TargetingCharacter=TargetingCharacter;
		Parms.TargetingActor=TargetingActor;
		Parms.EventData=EventData;
		Parms.OutHitResults=OutHitResults;
		Parms.OutActors=OutActors;
		const_cast<USGSCppTargetType*>(this)->ProcessEvent(Func,&Parms);
		OutHitResults=Parms.OutHitResults;
		OutActors=Parms.OutActors;
	}
	else
	{
		const_cast<USGSCppTargetType*>(this)->GetTargets_Implementation(TargetingCharacter, TargetingActor, EventData, OutHitResults, OutActors);
	}
}
struct Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called to determine targets to apply gameplay effects to */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SGSCppTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to determine targets to apply gameplay effects to" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargets constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargets constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargets Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_TargetingCharacter = { "TargetingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppTargetType_eventGetTargets_Parms, TargetingCharacter), Z_Construct_UClass_ASGSCppCharacterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppTargetType_eventGetTargets_Parms, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppTargetType_eventGetTargets_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1110230437
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppTargetType_eventGetTargets_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGSCppTargetType_eventGetTargets_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_TargetingCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_TargetingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_EventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::PropPointers) < 2048);
// ********** End Function GetTargets Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGSCppTargetType, nullptr, "GetTargets", 	Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::PropPointers), 
sizeof(SGSCppTargetType_eventGetTargets_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGSCppTargetType_eventGetTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGSCppTargetType_GetTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGSCppTargetType_GetTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGSCppTargetType::execGetTargets)
{
	P_GET_OBJECT(ASGSCppCharacterBase,Z_Param_TargetingCharacter);
	P_GET_OBJECT(AActor,Z_Param_TargetingActor);
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHitResults);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTargets_Implementation(Z_Param_TargetingCharacter,Z_Param_TargetingActor,Z_Param_EventData,Z_Param_Out_OutHitResults,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// ********** End Class USGSCppTargetType Function GetTargets **************************************

// ********** Begin Class USGSCppTargetType ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppTargetType;
UClass* USGSCppTargetType::GetPrivateStaticClass()
{
	using TClass = USGSCppTargetType;
	if (!Z_Registration_Info_UClass_USGSCppTargetType.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppTargetType"),
			Z_Registration_Info_UClass_USGSCppTargetType.InnerSingleton,
			StaticRegisterNativesUSGSCppTargetType,
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
	return Z_Registration_Info_UClass_USGSCppTargetType.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppTargetType_NoRegister()
{
	return USGSCppTargetType::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/SGSCppTargetType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppTargetType.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppTargetType constinit property declarations ************************
// ********** End Class USGSCppTargetType constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTargets"), .Pointer = &USGSCppTargetType::execGetTargets },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGSCppTargetType_GetTargets, "GetTargets" }, // 2321845935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppTargetType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppTargetType_Statics
UObject* (*const Z_Construct_UClass_USGSCppTargetType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppTargetType_Statics::ClassParams = {
	&USGSCppTargetType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppTargetType_Statics::Class_MetaDataParams)
};
void USGSCppTargetType::StaticRegisterNativesUSGSCppTargetType()
{
	UClass* Class = USGSCppTargetType::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USGSCppTargetType_Statics::Funcs));
}
UClass* Z_Construct_UClass_USGSCppTargetType()
{
	if (!Z_Registration_Info_UClass_USGSCppTargetType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppTargetType.OuterSingleton, Z_Construct_UClass_USGSCppTargetType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppTargetType.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppTargetType);
USGSCppTargetType::~USGSCppTargetType() {}
// ********** End Class USGSCppTargetType **********************************************************

// ********** Begin Class USGSCppTargetType_UseOwner ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppTargetType_UseOwner;
UClass* USGSCppTargetType_UseOwner::GetPrivateStaticClass()
{
	using TClass = USGSCppTargetType_UseOwner;
	if (!Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppTargetType_UseOwner"),
			Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.InnerSingleton,
			StaticRegisterNativesUSGSCppTargetType_UseOwner,
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
	return Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppTargetType_UseOwner_NoRegister()
{
	return USGSCppTargetType_UseOwner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that uses the owner */" },
#endif
		{ "IncludePath", "Abilities/SGSCppTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that uses the owner" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppTargetType_UseOwner constinit property declarations ***************
// ********** End Class USGSCppTargetType_UseOwner constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppTargetType_UseOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics
UObject* (*const Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USGSCppTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::ClassParams = {
	&USGSCppTargetType_UseOwner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::Class_MetaDataParams)
};
void USGSCppTargetType_UseOwner::StaticRegisterNativesUSGSCppTargetType_UseOwner()
{
}
UClass* Z_Construct_UClass_USGSCppTargetType_UseOwner()
{
	if (!Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.OuterSingleton, Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppTargetType_UseOwner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppTargetType_UseOwner);
USGSCppTargetType_UseOwner::~USGSCppTargetType_UseOwner() {}
// ********** End Class USGSCppTargetType_UseOwner *************************************************

// ********** Begin Class USGSCppTargetType_UseEventData *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USGSCppTargetType_UseEventData;
UClass* USGSCppTargetType_UseEventData::GetPrivateStaticClass()
{
	using TClass = USGSCppTargetType_UseEventData;
	if (!Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SGSCppTargetType_UseEventData"),
			Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.InnerSingleton,
			StaticRegisterNativesUSGSCppTargetType_UseEventData,
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
	return Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.InnerSingleton;
}
UClass* Z_Construct_UClass_USGSCppTargetType_UseEventData_NoRegister()
{
	return USGSCppTargetType_UseEventData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trivial target type that pulls the target out of the event data */" },
#endif
		{ "IncludePath", "Abilities/SGSCppTargetType.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Abilities/SGSCppTargetType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trivial target type that pulls the target out of the event data" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USGSCppTargetType_UseEventData constinit property declarations ***********
// ********** End Class USGSCppTargetType_UseEventData constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGSCppTargetType_UseEventData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics
UObject* (*const Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USGSCppTargetType,
	(UObject* (*)())Z_Construct_UPackage__Script_SirGasSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::ClassParams = {
	&USGSCppTargetType_UseEventData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::Class_MetaDataParams), Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::Class_MetaDataParams)
};
void USGSCppTargetType_UseEventData::StaticRegisterNativesUSGSCppTargetType_UseEventData()
{
}
UClass* Z_Construct_UClass_USGSCppTargetType_UseEventData()
{
	if (!Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.OuterSingleton, Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGSCppTargetType_UseEventData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USGSCppTargetType_UseEventData);
USGSCppTargetType_UseEventData::~USGSCppTargetType_UseEventData() {}
// ********** End Class USGSCppTargetType_UseEventData *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h__Script_SirGasSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGSCppTargetType, USGSCppTargetType::StaticClass, TEXT("USGSCppTargetType"), &Z_Registration_Info_UClass_USGSCppTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppTargetType), 2255532451U) },
		{ Z_Construct_UClass_USGSCppTargetType_UseOwner, USGSCppTargetType_UseOwner::StaticClass, TEXT("USGSCppTargetType_UseOwner"), &Z_Registration_Info_UClass_USGSCppTargetType_UseOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppTargetType_UseOwner), 794401906U) },
		{ Z_Construct_UClass_USGSCppTargetType_UseEventData, USGSCppTargetType_UseEventData::StaticClass, TEXT("USGSCppTargetType_UseEventData"), &Z_Registration_Info_UClass_USGSCppTargetType_UseEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGSCppTargetType_UseEventData), 421204565U) },
	};
}; // Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h__Script_SirGasSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h__Script_SirGasSystem_4036570820{
	TEXT("/Script/SirGasSystem"),
	Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h__Script_SirGasSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h__Script_SirGasSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
