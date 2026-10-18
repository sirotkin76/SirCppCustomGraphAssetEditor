// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/SGSCppTargetType.h"
#include "Abilities/SGSCppGameplayAbility.h"
#include "SGSCppCharacterBase.h"

void USGSCppTargetType::GetTargets_Implementation(
	ASGSCppCharacterBase* TargetingCharacter,
	AActor* TargetingActor,
	FGameplayEventData EventData,
	TArray<FHitResult>& OutHitResults,
	TArray<AActor*>& OutActors
	) const
{
	return;
}

void USGSCppTargetType_UseOwner::GetTargets_Implementation(
	ASGSCppCharacterBase* TargetingCharacterLocal,
	AActor* TargetingActor,
	FGameplayEventData EventData,
	TArray<FHitResult>& OutHitResults,
	TArray<AActor*>& OutActors
	) const
{
	OutActors.Add(TargetingCharacterLocal);
}

void USGSCppTargetType_UseEventData::GetTargets_Implementation(
	ASGSCppCharacterBase* TargetingCharacter,
	AActor* TargetingActor,
	FGameplayEventData EventData,
	TArray<FHitResult>& OutHitResults,
	TArray<AActor*>& OutActors
	) const
{
	const FHitResult* FoundHitResult = EventData.ContextHandle.GetHitResult();
	if (FoundHitResult)
	{
		OutHitResults.Add(*FoundHitResult);
	}
	else if (EventData.Target)
	{
		OutActors.Add(const_cast<AActor*>(EventData.Target.Get()));
	}
}

