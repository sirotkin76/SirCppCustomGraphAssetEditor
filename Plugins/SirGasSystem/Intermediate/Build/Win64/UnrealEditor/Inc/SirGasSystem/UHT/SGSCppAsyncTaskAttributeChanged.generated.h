// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGSCppAsyncTaskAttributeChanged.h"

#ifdef SIRGASSYSTEM_SGSCppAsyncTaskAttributeChanged_generated_h
#error "SGSCppAsyncTaskAttributeChanged.generated.h already included, missing '#pragma once' in SGSCppAsyncTaskAttributeChanged.h"
#endif
#define SIRGASSYSTEM_SGSCppAsyncTaskAttributeChanged_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class USGSCppAsyncTaskAttributeChanged;
struct FGameplayAttribute;

// ********** Begin Delegate FOnAttributeChanged ***************************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_14_DELEGATE \
SIRGASSYSTEM_API void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue);


// ********** End Delegate FOnAttributeChanged *****************************************************

// ********** Begin Class USGSCppAsyncTaskAttributeChanged *****************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


struct Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppAsyncTaskAttributeChanged(); \
	friend struct ::Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppAsyncTaskAttributeChanged_NoRegister) \
	DECLARE_SERIALIZER(USGSCppAsyncTaskAttributeChanged)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGSCppAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppAsyncTaskAttributeChanged(USGSCppAsyncTaskAttributeChanged&&) = delete; \
	USGSCppAsyncTaskAttributeChanged(const USGSCppAsyncTaskAttributeChanged&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppAsyncTaskAttributeChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppAsyncTaskAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGSCppAsyncTaskAttributeChanged) \
	NO_API virtual ~USGSCppAsyncTaskAttributeChanged();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_17_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppAsyncTaskAttributeChanged;

// ********** End Class USGSCppAsyncTaskAttributeChanged *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppAsyncTaskAttributeChanged_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
