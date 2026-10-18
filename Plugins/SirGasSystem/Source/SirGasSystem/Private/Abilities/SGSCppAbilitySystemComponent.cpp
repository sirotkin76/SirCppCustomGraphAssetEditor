// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/SGSCppAbilitySystemComponent.h"

#include "SGSCppCharacterBase.h"
#include "AbilitySystemGlobals.h"

USGSCppAbilitySystemComponent::USGSCppAbilitySystemComponent()
{
}

void USGSCppAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer,
	TArray<USGSCppGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
	{
		// Iterate all instances on this ability spec
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			ActiveAbilities.Add(Cast<USGSCppGameplayAbility>(ActiveAbility));
		}
	}
}

int32 USGSCppAbilitySystemComponent::GetDefaultAbilityLevel() const
{
	ASGSCppCharacterBase* OwningCharacter = Cast<ASGSCppCharacterBase>(GetOwnerActor());

	if (OwningCharacter)
	{
		return OwningCharacter->FSGSCppGetCharacterLevel();
	}
	return 1;
}

USGSCppAbilitySystemComponent* USGSCppAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor,
	bool LookForComponent)
{
	return Cast<USGSCppAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}
