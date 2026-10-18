// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SGSCppAttributeSet.h"

#ifdef SIRGASSYSTEM_SGSCppAttributeSet_generated_h
#error "SGSCppAttributeSet.generated.h already included, missing '#pragma once' in SGSCppAttributeSet.h"
#endif
#define SIRGASSYSTEM_SGSCppAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class USGSCppAttributeSet ******************************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ExperienceMax); \
	DECLARE_FUNCTION(execOnRep_ExperienceCur); \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_DefensePower); \
	DECLARE_FUNCTION(execOnRep_AttackPower); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execSetHpAndMaxHp);


struct Z_Construct_UClass_USGSCppAttributeSet_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_USGSCppAttributeSet_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSCppAttributeSet(); \
	friend struct ::Z_Construct_UClass_USGSCppAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_USGSCppAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSCppAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_USGSCppAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(USGSCppAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		AttackPower, \
		DefensePower, \
		MoveSpeed, \
		NETFIELD_REP_END=MoveSpeed	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(USGSCppAttributeSet) \
public:


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSCppAttributeSet(USGSCppAttributeSet&&) = delete; \
	USGSCppAttributeSet(const USGSCppAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSCppAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSCppAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSCppAttributeSet) \
	NO_API virtual ~USGSCppAttributeSet();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_21_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSCppAttributeSet;

// ********** End Class USGSCppAttributeSet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_Abilities_SGSCppAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
