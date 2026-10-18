// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGSCppCharacterBase.h"

#ifdef SIRGASSYSTEM_SGSCppCharacterBase_generated_h
#error "SGSCppCharacterBase.generated.h already included, missing '#pragma once' in SGSCppCharacterBase.h"
#endif
#define SIRGASSYSTEM_SGSCppCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASGSCppCharacterBase;
class UClass;
class UGameplayEffect;
class USGSCppAttributeSet;
class USGSCppGameplayAbility;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;

// ********** Begin Class ASGSCppCharacterBase *****************************************************
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFSGSCppAddGameplayEffects); \
	DECLARE_FUNCTION(execFSGSCppAddGameplayEffect); \
	DECLARE_FUNCTION(execFSGSCppSetCharacterLevel); \
	DECLARE_FUNCTION(execFSGSCppSetHealth); \
	DECLARE_FUNCTION(execFSGSCppGetIsAlive); \
	DECLARE_FUNCTION(execFSGSCppGetHealth); \
	DECLARE_FUNCTION(execFSGSCppGetCharacterLevel); \
	DECLARE_FUNCTION(execFSGSCppGetMoveSpeed); \
	DECLARE_FUNCTION(execFSGSCppGetMaxMana); \
	DECLARE_FUNCTION(execFSGSCppGetMana); \
	DECLARE_FUNCTION(execFSGSCppGetMaxHealth); \
	DECLARE_FUNCTION(execFSGSCppGetAttributeSet); \
	DECLARE_FUNCTION(execFSGSCppCancelAbility); \
	DECLARE_FUNCTION(execFSGSCppAddArrNewGameplayAbility); \
	DECLARE_FUNCTION(execFSGSCppAddNewGameplayAbility); \
	DECLARE_FUNCTION(execFSGSCppGetCooldownRemainingForTag); \
	DECLARE_FUNCTION(execFSGSCppGetActiveAbilitiesWithTags); \
	DECLARE_FUNCTION(execFSGSCppActivateAbilityWithTag); \
	DECLARE_FUNCTION(execFSGSCppActivateAbilitiesWithTags); \
	DECLARE_FUNCTION(execFSGSCppInitializationCharacterAttrubite);


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASGSCppCharacterBase_Statics;
SIRGASSYSTEM_API UClass* Z_Construct_UClass_ASGSCppCharacterBase_NoRegister();

#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGSCppCharacterBase(); \
	friend struct ::Z_Construct_UClass_ASGSCppCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIRGASSYSTEM_API UClass* ::Z_Construct_UClass_ASGSCppCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGSCppCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SirGasSystem"), Z_Construct_UClass_ASGSCppCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(ASGSCppCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASGSCppCharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterLevel=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterLevel	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGSCppCharacterBase(ASGSCppCharacterBase&&) = delete; \
	ASGSCppCharacterBase(const ASGSCppCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGSCppCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGSCppCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGSCppCharacterBase) \
	NO_API virtual ~ASGSCppCharacterBase();


#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_19_PROLOG
#define FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_CALLBACK_WRAPPERS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGSCppCharacterBase;

// ********** End Class ASGSCppCharacterBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_04_Git_SirCppCustomGraphAssetEditor_Plugins_SirGasSystem_Source_SirGasSystem_Public_SGSCppCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
