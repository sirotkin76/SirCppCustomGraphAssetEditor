// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SGSCpp.h"
#include "AbilitySystemComponent.h"
#include "SGSCppGameplayAbility.h"
#include "SGSCppAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class SIRGASSYSTEM_API USGSCppAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	// Constructors and overrides
	USGSCppAbilitySystemComponent();

	/** Returns a list of currently active ability instances that match the tags */
	void GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<USGSCppGameplayAbility*>& ActiveAbilities);

	/** Returns the default level used for ability activations, derived from the character */
	int32 GetDefaultAbilityLevel() const;

	/** Version of function in AbilitySystemGlobals that returns correct type */
	static USGSCppAbilitySystemComponent* GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);


	
};
