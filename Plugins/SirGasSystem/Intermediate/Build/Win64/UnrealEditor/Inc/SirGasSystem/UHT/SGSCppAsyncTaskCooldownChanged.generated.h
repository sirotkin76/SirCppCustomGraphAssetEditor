// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGSCppAsyncTaskCooldownChanged.h"

#ifdef SIRGASSYSTEM_SGSCppAsyncTaskCooldownChanged_generated_h
#error "SGSCppAsyncTaskCooldownChanged.generated.h already included, missing '#pragma once' in SGSCppAsyncTaskCooldownChanged.h"
#endif
#define SIRGASSYSTEM_SGSCppAsyncTaskCooldownChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class USGSCppAsyncTaskCooldownChanged;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Delegate FOnCooldownChanged ****************************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_15_DELEGATE \
SIRGASSYSTEM_API void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration);


// ********** End Delegate FOnCooldownChanged ******************************************************

// ********** Begin Class USGSCppAsyncTaskCooldownChanged ******************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForCooldownChange);


struct Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppAsyncTaskCooldownChanged(); \
	friend struct ::Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppAsyncTaskCooldownChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppAsyncTaskCooldownChanged_NoRegister) \
	DECLARE_SERIALIZER(USGSCppAsyncTaskCooldownChanged)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGSCppAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppAsyncTaskCooldownChanged(USGSCppAsyncTaskCooldownChanged&&) = delete; \
	USGSCppAsyncTaskCooldownChanged(const USGSCppAsyncTaskCooldownChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppAsyncTaskCooldownChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppAsyncTaskCooldownChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGSCppAsyncTaskCooldownChanged) \
	NO_API virtual ~USGSCppAsyncTaskCooldownChanged();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_18_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppAsyncTaskCooldownChanged;

// ********** End Class USGSCppAsyncTaskCooldownChanged ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskCooldownChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
