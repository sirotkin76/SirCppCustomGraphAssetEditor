// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SGSCppTargetType.h"

#ifdef SIRGASSYSTEM_SGSCppTargetType_generated_h
#error "SGSCppTargetType.generated.h already included, missing '#pragma once' in SGSCppTargetType.h"
#endif
#define SIRGASSYSTEM_SGSCppTargetType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASGSCppCharacterBase;
struct FGameplayEventData;
struct FHitResult;

// ********** Begin Class USGSCppTargetType ********************************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargets_Implementation(ASGSCppCharacterBase* TargetingCharacter, AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
	DECLARE_FUNCTION(execGetTargets);


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USGSCppTargetType_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppTargetType(); \
	friend struct ::Z_Construct_UClass_USGSCppTargetType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppTargetType_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppTargetType_NoRegister) \
	DECLARE_SERIALIZER(USGSCppTargetType)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppTargetType(USGSCppTargetType&&) = delete; \
	USGSCppTargetType(const USGSCppTargetType&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSCppTargetType) \
	NO_API virtual ~USGSCppTargetType();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_20_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_CALLBACK_WRAPPERS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppTargetType;

// ********** End Class USGSCppTargetType **********************************************************

// ********** Begin Class USGSCppTargetType_UseOwner ***********************************************
struct Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseOwner_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppTargetType_UseOwner(); \
	friend struct ::Z_Construct_UClass_USGSCppTargetType_UseOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppTargetType_UseOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppTargetType_UseOwner, USGSCppTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppTargetType_UseOwner_NoRegister) \
	DECLARE_SERIALIZER(USGSCppTargetType_UseOwner)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppTargetType_UseOwner(USGSCppTargetType_UseOwner&&) = delete; \
	USGSCppTargetType_UseOwner(const USGSCppTargetType_UseOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppTargetType_UseOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppTargetType_UseOwner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSCppTargetType_UseOwner) \
	NO_API virtual ~USGSCppTargetType_UseOwner();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_41_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_44_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppTargetType_UseOwner;

// ********** End Class USGSCppTargetType_UseOwner *************************************************

// ********** Begin Class USGSCppTargetType_UseEventData *******************************************
struct Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppTargetType_UseEventData_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppTargetType_UseEventData(); \
	friend struct ::Z_Construct_UClass_USGSCppTargetType_UseEventData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppTargetType_UseEventData_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppTargetType_UseEventData, USGSCppTargetType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppTargetType_UseEventData_NoRegister) \
	DECLARE_SERIALIZER(USGSCppTargetType_UseEventData)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppTargetType_UseEventData(USGSCppTargetType_UseEventData&&) = delete; \
	USGSCppTargetType_UseEventData(const USGSCppTargetType_UseEventData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppTargetType_UseEventData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppTargetType_UseEventData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSCppTargetType_UseEventData) \
	NO_API virtual ~USGSCppTargetType_UseEventData();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_61_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_64_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppTargetType_UseEventData;

// ********** End Class USGSCppTargetType_UseEventData *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppTargetType_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
