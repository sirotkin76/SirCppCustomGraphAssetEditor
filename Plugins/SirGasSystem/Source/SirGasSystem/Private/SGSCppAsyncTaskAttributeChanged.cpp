// Fill out your copyright notice in the Description page of Project Settings.

#include "SGSCppAsyncTaskAttributeChanged.h"


USGSCppAsyncTaskAttributeChanged* USGSCppAsyncTaskAttributeChanged::ListenForAttributeChange(
	UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute)
{
	USGSCppAsyncTaskAttributeChanged* WaitForAttributeChangedTask = NewObject<USGSCppAsyncTaskAttributeChanged>();
	WaitForAttributeChangedTask->ASC = AbilitySystemComponent;
	WaitForAttributeChangedTask->AttributeToListenFor = Attribute;

	if (!IsValid(AbilitySystemComponent) || !Attribute.IsValid())
	{
		WaitForAttributeChangedTask->RemoveFromRoot();
		return nullptr;
	}

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute).AddUObject(WaitForAttributeChangedTask, &USGSCppAsyncTaskAttributeChanged::AttributeChanged);

	return WaitForAttributeChangedTask;
}

USGSCppAsyncTaskAttributeChanged* USGSCppAsyncTaskAttributeChanged::ListenForAttributesChange(
	UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayAttribute> Attributes)
{
	USGSCppAsyncTaskAttributeChanged* WaitForAttributeChangedTask = NewObject<USGSCppAsyncTaskAttributeChanged>();
	WaitForAttributeChangedTask->ASC = AbilitySystemComponent;
	WaitForAttributeChangedTask->AttributesToListenFor = Attributes;

	if (!IsValid(AbilitySystemComponent) || Attributes.Num() < 1)
	{
		WaitForAttributeChangedTask->RemoveFromRoot();
		return nullptr;
	}

	for (FGameplayAttribute Attribute : Attributes)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(Attribute).AddUObject(WaitForAttributeChangedTask, &USGSCppAsyncTaskAttributeChanged::AttributeChanged);
	}

	return WaitForAttributeChangedTask;
}

void USGSCppAsyncTaskAttributeChanged::EndTask()
{
	if (IsValid(ASC))
	{
		ASC->GetGameplayAttributeValueChangeDelegate(AttributeToListenFor).RemoveAll(this);

		for (FGameplayAttribute Attribute : AttributesToListenFor)
		{
			ASC->GetGameplayAttributeValueChangeDelegate(Attribute).RemoveAll(this);
		}
	}

	SetReadyToDestroy();
	//MarkPendingKill();
	MarkAsGarbage();
}

void USGSCppAsyncTaskAttributeChanged::AttributeChanged(const FOnAttributeChangeData& Data)
{
	OnAttributeChanged.Broadcast(Data.Attribute, Data.NewValue, Data.OldValue);
}
