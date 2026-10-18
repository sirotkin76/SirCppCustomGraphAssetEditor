// Fill out your copyright notice in the Description page of Project Settings.


#include "SGSCppCharacterBase.h"


// Sets default values
ASGSCppCharacterBase::ASGSCppCharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<USGSCppAbilitySystemComponent>(TEXT("SGSCppAbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Create the attribute set, this replicates by default
	AttributeSet = CreateDefaultSubobject<USGSCppAttributeSet>(TEXT("SGSCppAttributeSet"));

	CharacterLevel = 1;
	bAbilitiesInitialized = false;
}

// Called when the game starts or when spawned
void ASGSCppCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	if (!bAbilitiesInitialized) FSGSCppInitializationCharacterAttrubite();

	//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Blue, TEXT("BeginPlay")); // print string
	
}

void ASGSCppCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!bAbilitiesInitialized) FSGSCppInitializationCharacterAttrubite();
	
	//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Blue, TEXT("PossessedBy")); // print string
}

void ASGSCppCharacterBase::UnPossessed()
{
	Super::UnPossessed();
}

void ASGSCppCharacterBase::OnRep_Controller()
{
	Super::OnRep_Controller();
}

void ASGSCppCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UAbilitySystemComponent* ASGSCppCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

float ASGSCppCharacterBase::FSGSCppGetHealth() const
{
	if (!AttributeSet)
		return 1.f;

	return AttributeSet->GetHealth();
}

void ASGSCppCharacterBase::FSGSCppSetHealth(float SetNewHealth)
{
	if (AttributeSet)
	{
		AttributeSet->SetHpAndMaxHp(SetNewHealth, FSGSCppGetMaxHealth());
	}
}

float ASGSCppCharacterBase::FSGSCppGetMaxHealth() const
{
	return AttributeSet->GetMaxHealth();
}

float ASGSCppCharacterBase::FSGSCppGetMana() const
{
	return AttributeSet->GetMana();
}

float ASGSCppCharacterBase::FSGSCppGetMaxMana() const
{
	return AttributeSet->GetMaxMana();
}

// Called every frame
void ASGSCppCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASGSCppCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

int32 ASGSCppCharacterBase::FSGSCppGetCharacterLevel() const
{
	return CharacterLevel;
}

bool ASGSCppCharacterBase::FSGSCppSetCharacterLevel(int32 NewLevel)
{
	if (CharacterLevel != NewLevel && NewLevel > 0)
	{
		// Our level changed so we need to refresh abilities
		RemoveStartupGameplayAbilities();
		CharacterLevel = NewLevel;
		
		AddStartupGameplayAbilities();

		return true;
	}
	return false;
}

void ASGSCppCharacterBase::FSGSCppAddGameplayEffect(TSubclassOf<UGameplayEffect> GameplayEffectL)
{
	FGameplayEffectContextHandle EffectContext = GetAbilitySystemComponent()->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = GetAbilitySystemComponent()->MakeOutgoingSpec(GameplayEffectL, FSGSCppGetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(),  GetAbilitySystemComponent());
	}
}

void ASGSCppCharacterBase::FSGSCppAddGameplayEffects(TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsL)
{
	for (TSubclassOf<UGameplayEffect> GameplayEffect : GameplayEffectsL)
	{
		FSGSCppAddGameplayEffect(GameplayEffect);
	}
}

float ASGSCppCharacterBase::FSGSCppGetMoveSpeed() const
{
	return AttributeSet->GetMoveSpeed();
}

USGSCppAttributeSet* ASGSCppCharacterBase::FSGSCppGetAttributeSet()
{
	if (IsValid(AttributeSet)) return AttributeSet;

	return nullptr;
}

void ASGSCppCharacterBase::AddStartupGameplayAbilities()
{
	check(AbilitySystemComponent);
	
	if (GetLocalRole() == ROLE_Authority && !bAbilitiesInitialized)
	{
		// Grant abilities, but only on the server	
		for (TSubclassOf<USGSCppGameplayAbility>& StartupAbility : GameplayAbilities)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StartupAbility, FSGSCppGetCharacterLevel(), INDEX_NONE, this));
		}

		// Now apply passives
		for (TSubclassOf<UGameplayEffect>& GameplayEffect : GameplayEffects)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, FSGSCppGetCharacterLevel(), EffectContext);
			if (NewHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent);
			}
		}

		//AddSlottedGameplayAbilities();
		AddGameplayAbilities();

		bAbilitiesInitialized = true;
	}
}

void ASGSCppCharacterBase::AddGameplayAbilities()
{
	for (USGSCppGameplayAbility * ActiveAbilit : ArrActiveAbilities)
	{
		if (IsValid(ActiveAbilit))
		{
			AbilitySystemComponent->GiveAbility(ActiveAbilit);
		}
	}
}

void ASGSCppCharacterBase::RemoveStartupGameplayAbilities()
{
	check(AbilitySystemComponent);

	if (GetLocalRole() == ROLE_Authority && bAbilitiesInitialized)
	{
		// Remove any abilities added from a previous call
		TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;

		for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
		{
			if ((Spec.SourceObject == this) && GameplayAbilities.Contains(Spec.Ability->GetClass()))
			{
				AbilitiesToRemove.Add(Spec.Handle);
			}
		}

		// Do in two passes so the removal happens after we have the full list
		for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
		{
			AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
		}

		// Remove all of the passive gameplay effects that were applied by this character
		FGameplayEffectQuery Query;
		Query.EffectSource = this;
		AbilitySystemComponent->RemoveActiveEffects(Query);

		//RemoveSlottedGameplayAbilities(true);

		bAbilitiesInitialized = false;
	}
}

void ASGSCppCharacterBase::HandleDamage(
	float DamageAmount,
	const FHitResult& HitInfo,
	const struct FGameplayTagContainer& DamageTags,
	ASGSCppCharacterBase* InstigatorPawn,
	AActor* DamageCauser
	)
{
	FSGSCppOnDamaged(DamageAmount, HitInfo, DamageTags, InstigatorPawn, DamageCauser);	
}

void ASGSCppCharacterBase::HandleHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{	// We only call the BP callback if this is not the initial ability setup
	if (bAbilitiesInitialized)
	{
		FSGSCppOnHealthChanged(DeltaValue, EventTags);
	}
}

void ASGSCppCharacterBase::HandleManaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	if (bAbilitiesInitialized)
	{
		FSGSCppOnManaChanged(DeltaValue, EventTags);
	}
}

void ASGSCppCharacterBase::HandleMoveSpeedChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags)
{
	// Update the character movement's walk speed
	GetCharacterMovement()->MaxWalkSpeed = FSGSCppGetMoveSpeed();

	if (bAbilitiesInitialized)
	{
		FSGSCppOnMoveSpeedChanged(DeltaValue, EventTags);
	}
}

FGenericTeamId ASGSCppCharacterBase::GetGenericTeamId() const
{
	static const FGenericTeamId PlayerTeam(0);
	static const FGenericTeamId AITeam(1);
	return Cast<APlayerController>(GetController()) ? PlayerTeam : AITeam;
}

bool ASGSCppCharacterBase::FSGSCppGetIsAlive()
{
	return FSGSCppGetHealth() > 0.0f;
}

void ASGSCppCharacterBase::FSGSCppInitializationCharacterAttrubite()
{
	if (GetAbilitySystemComponent())
	{
		GetAbilitySystemComponent()->InitAbilityActorInfo(this, this);
		//GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Blue, TEXT("PossessedBy")); // print string

		FSGSCppAddArrNewGameplayAbility(GameplayAbilities);
		
		FSGSCppAddGameplayEffects(GameplayEffects);

		bAbilitiesInitialized = true;
			
		GetAbilitySystemComponent()->RefreshAbilityActorInfo();
		// GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Blue, TEXT("PossessedBy")); // print string
}	
	
}

bool ASGSCppCharacterBase::FSGSCppActivateAbilitiesWithTags(FGameplayTagContainer AbilityTags, bool bAllowRemoteActivation)
{
	if (AbilitySystemComponent)
	{
		return AbilitySystemComponent->TryActivateAbilitiesByTag(AbilityTags, bAllowRemoteActivation);
	}

	return false;
}

void ASGSCppCharacterBase::FSGSCppGetActiveAbilitiesWithTags(FGameplayTagContainer AbilityTags, TArray<USGSCppGameplayAbility*>& ActiveAbilities)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->GetActiveAbilitiesWithTags(AbilityTags, ActiveAbilities);
	}
}

bool ASGSCppCharacterBase::FSGSCppGetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration)
{
	if (AbilitySystemComponent && CooldownTags.Num() > 0)
	{
		TimeRemaining = 0.f;
		CooldownDuration = 0.f;

		FGameplayEffectQuery const Query = FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(CooldownTags);
		TArray< TPair<float, float> > DurationAndTimeRemaining = AbilitySystemComponent->GetActiveEffectsTimeRemainingAndDuration(Query);
		if (DurationAndTimeRemaining.Num() > 0)
		{
			int32 BestIdx = 0;
			float LongestTime = DurationAndTimeRemaining[0].Key;
			for (int32 Idx = 1; Idx < DurationAndTimeRemaining.Num(); ++Idx)
			{
				if (DurationAndTimeRemaining[Idx].Key > LongestTime)
				{
					LongestTime = DurationAndTimeRemaining[Idx].Key;
					BestIdx = Idx;
				}
			}

			TimeRemaining = DurationAndTimeRemaining[BestIdx].Key;
			CooldownDuration = DurationAndTimeRemaining[BestIdx].Value;

			return true;
		}
	}
	return false;
}

void ASGSCppCharacterBase::FSGSCppCancelAbility(FGameplayTag AbilityTag)
{
	if (GetAbilitySystemComponent())
	{
		FGameplayTagContainer GameplayTagContainer;
		GameplayTagContainer.AddTag(AbilityTag);

		GetAbilitySystemComponent()->CancelAbilities(&GameplayTagContainer, nullptr, nullptr);
	}
}

bool ASGSCppCharacterBase::FSGSCppAddNewGameplayAbility(TSubclassOf<USGSCppGameplayAbility> NewGameplayAbility)
{
	if (IsValid(GetAbilitySystemComponent()))
	{
		GetAbilitySystemComponent()->GiveAbility(FGameplayAbilitySpec(NewGameplayAbility, FSGSCppGetCharacterLevel(), INDEX_NONE, this));
		USGSCppGameplayAbility* AbilityInstance = NewGameplayAbility.Get()->GetDefaultObject<USGSCppGameplayAbility>();
		ArrActiveAbilities.Add(AbilityInstance);
		return true;	
	}
	
	return false;
}

void ASGSCppCharacterBase::FSGSCppAddArrNewGameplayAbility(
	TArray<TSubclassOf<USGSCppGameplayAbility>> NewArrGameplayAbilities)
{
	for (TSubclassOf<USGSCppGameplayAbility> i : NewArrGameplayAbilities)
	{
		FSGSCppAddNewGameplayAbility(i);
	}
}

bool ASGSCppCharacterBase::FSGSCppActivateAbilityWithTag(FGameplayTag AbilityTagL, bool bAllowRemoteActivation)
{
	if (GetAbilitySystemComponent())
	{
		FGameplayTagContainer GameplayTagContainer;
		GameplayTagContainer.AddTag(AbilityTagL);

		return GetAbilitySystemComponent()->TryActivateAbilitiesByTag(GameplayTagContainer, bAllowRemoteActivation);
	}

	return false;
}
