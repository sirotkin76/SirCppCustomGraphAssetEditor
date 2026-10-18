// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SGSCpp.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "SGSCppTargetType.generated.h"


/**
 * Class that is used to determine targeting for abilities
 * It is meant to be blueprinted to run target logic
 * This does not subclass GameplayAbilityTargetActor because this class is never instanced into the world
 * This can be used as a basis for a game-specific targeting blueprint
 * If your targeting is more complicated you may need to instance into the world once or as a pooled actor
 */

class ASGSCppCharacterBase;

UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class SIRGASSYSTEM_API USGSCppTargetType : public UObject
{
	GENERATED_BODY()
	
public:
	// Constructor and overrides
	USGSCppTargetType() {};

	/** Called to determine targets to apply gameplay effects to */
	UFUNCTION(BlueprintNativeEvent)
	void GetTargets(
		ASGSCppCharacterBase* TargetingCharacter,
		AActor* TargetingActor,
		FGameplayEventData EventData,
		TArray<FHitResult>& OutHitResults,
		TArray<AActor*>& OutActors
		) const;
};

/** Trivial target type that uses the owner */
UCLASS(NotBlueprintable)
class SIRGASSYSTEM_API USGSCppTargetType_UseOwner : public USGSCppTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	USGSCppTargetType_UseOwner() {}

	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(
		ASGSCppCharacterBase* TargetingCharacter, 
		AActor* TargetingActor,
		FGameplayEventData EventData,
		TArray<FHitResult>& OutHitResults,
		TArray<AActor*>& OutActors
		) const override;
};

/** Trivial target type that pulls the target out of the event data */
UCLASS(NotBlueprintable)
class SIRGASSYSTEM_API USGSCppTargetType_UseEventData : public USGSCppTargetType
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	USGSCppTargetType_UseEventData() {}

	/** Uses the passed in event data */
	virtual void GetTargets_Implementation(
		ASGSCppCharacterBase* TargetingCharacter,
		AActor* TargetingActor,
		FGameplayEventData EventData,
		TArray<FHitResult>& OutHitResults,
		TArray<AActor*>& OutActors
		) const override;
};
