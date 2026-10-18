// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SGSCppAbilityTask_PlayMontageAndWaitForEvent.h"

#ifdef SIRGASSYSTEM_SGSCppAbilityTask_PlayMontageAndWaitForEvent_generated_h
#error "SGSCppAbilityTask_PlayMontageAndWaitForEvent.generated.h already included, missing '#pragma once' in SGSCppAbilityTask_PlayMontageAndWaitForEvent.h"
#endif
#define SIRGASSYSTEM_SGSCppAbilityTask_PlayMontageAndWaitForEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGameplayAbility;
class USGSCppAbilityTask_PlayMontageAndWaitForEvent;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Delegate FRPGPlayMontageAndWaitForEventDelegate ********************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_12_DELEGATE \
SIRGASSYSTEM_API void FRPGPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RPGPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


// ********** End Delegate FRPGPlayMontageAndWaitForEventDelegate **********************************

// ********** Begin Class USGSCppAbilityTask_PlayMontageAndWaitForEvent ****************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


struct Z_Construct_UClass_USGSCppAbilityTask_PlayMontageAndWaitForEvent_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAbilityTask_PlayMontageAndWaitForEvent_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppAbilityTask_PlayMontageAndWaitForEvent(); \
	friend struct ::Z_Construct_UClass_USGSCppAbilityTask_PlayMontageAndWaitForEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppAbilityTask_PlayMontageAndWaitForEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppAbilityTask_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppAbilityTask_PlayMontageAndWaitForEvent_NoRegister) \
	DECLARE_SERIALIZER(USGSCppAbilityTask_PlayMontageAndWaitForEvent)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppAbilityTask_PlayMontageAndWaitForEvent(USGSCppAbilityTask_PlayMontageAndWaitForEvent&&) = delete; \
	USGSCppAbilityTask_PlayMontageAndWaitForEvent(const USGSCppAbilityTask_PlayMontageAndWaitForEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppAbilityTask_PlayMontageAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGSCppAbilityTask_PlayMontageAndWaitForEvent) \
	NO_API virtual ~USGSCppAbilityTask_PlayMontageAndWaitForEvent();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_21_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppAbilityTask_PlayMontageAndWaitForEvent;

// ********** End Class USGSCppAbilityTask_PlayMontageAndWaitForEvent ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAbilityTask_PlayMontageAndWaitForEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
