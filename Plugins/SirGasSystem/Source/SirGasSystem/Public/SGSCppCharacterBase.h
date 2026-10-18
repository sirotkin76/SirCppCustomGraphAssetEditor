// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SGSCpp.h"

#include "GenericTeamAgentInterface.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "Abilities/SGSCppAttributeSet.h"
#include "Abilities/SGSCppAbilitySystemComponent.h"

#include "SGSCppCharacterBase.generated.h"

class USGSCppGameplayAbility;
class UGameplayEffect;


UCLASS()
class SIRGASSYSTEM_API ASGSCppCharacterBase : public ACharacter, public IAbilitySystemInterface, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASGSCppCharacterBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;
	virtual void OnRep_Controller() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	// Implement IAbilitySystemInterface
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSGSCpp|Character|Active")
	TArray<USGSCppGameplayAbility * > ArrActiveAbilities;

protected:
	/** The level of this character, should not be modified directly once it has already spawned */
	UPROPERTY(EditAnywhere, Replicated, Category = "FSGSCpp|Character|Active")
	int32 CharacterLevel;

	UPROPERTY()
	int32 bAbilitiesInitialized;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSGSCpp|Character|Passive")
	TArray<TSubclassOf<USGSCppGameplayAbility>> GameplayAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FSGSCpp|Character|Passive")
	TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/**
	 * Called when character takes damage, which may have killed them
	 *
	 * @param DamageAmount Amount of damage that was done, not clamped based on current health
	 * @param HitInfo The hit info that generated this damage
	 * @param DamageTags The gameplay tags of the event that did the damage
	 * @param InstigatorCharacter The character that initiated this damage
	 * @param DamageCauser The actual actor that did the damage, might be a weapon or projectile
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "FSGSCpp|Event")
	void FSGSCppOnDamaged(float DamageAmount, const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, ASGSCppCharacterBase* InstigatorCharacter, AActor* DamageCauser);

	/**
	 * Called when health is changed, either from healing or from being damaged
	 * For damage this is called in addition to OnDamaged/OnKilled
	 *
	 * @param DeltaValue Change in health value, positive for heal, negative for cost. If 0 the delta is unknown
	 * @param EventTags The gameplay tags of the event that changed mana
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "FSGSCpp|Event")
	void FSGSCppOnHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);

	/**
	 * Called when mana is changed, either from healing or from being used as a cost
	 *
	 * @param DeltaValue Change in mana value, positive for heal, negative for cost. If 0 the delta is unknown
	 * @param EventTags The gameplay tags of the event that changed mana
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "FSGSCpp|Event")
	void FSGSCppOnManaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);

	/**
	 * Called when movement speed is changed
	 *
	 * @param DeltaValue Change in move speed
	 * @param EventTags The gameplay tags of the event that changed mana
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "FSGSCpp|Event")
	void FSGSCppOnMoveSpeedChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	
	/**
	* Character Attrubite
	*/

	//UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Attr|Initialization")
	UFUNCTION()
	void FSGSCppInitializationCharacterAttrubite() ;
	
	
	/**
	* ЛОГИКА С ТЕГАМИ
	*/

	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Activate")
	bool FSGSCppActivateAbilitiesWithTags(FGameplayTagContainer AbilityTags, bool bAllowRemoteActivation = true);

	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Activate")
	bool FSGSCppActivateAbilityWithTag(FGameplayTag AbilityTagL, bool bAllowRemoteActivation = true);

	
	/** Returns a list of active abilities matching the specified tags. This only returns if the ability is currently running */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Gettter")
	void FSGSCppGetActiveAbilitiesWithTags(FGameplayTagContainer AbilityTags, TArray<USGSCppGameplayAbility*>& ActiveAbilities);
	
	/** Returns total time and remaining time for cooldown tags. Returns false if no active cooldowns found */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Gettter")
	bool FSGSCppGetCooldownRemainingForTag(FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration);

	
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Add")
	bool FSGSCppAddNewGameplayAbility(TSubclassOf<USGSCppGameplayAbility> NewGameplayAbility);
	
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Add")
	void FSGSCppAddArrNewGameplayAbility(TArray<TSubclassOf<USGSCppGameplayAbility>> NewArrGameplayAbilities);

	
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Abilities|Cancel")
	void FSGSCppCancelAbility(FGameplayTag AbilityTag);

	/**
	* Данные Getter
	*/

	UFUNCTION(BlueprintPure, Category = "FSGSCpp|Getter")
	USGSCppAttributeSet* FSGSCppGetAttributeSet();
	
	/** Returns maximum health, health will never be greater than this */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual float FSGSCppGetMaxHealth() const;

	/** Returns current mana */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual float FSGSCppGetMana() const;

	/** Returns maximum mana, mana will never be greater than this */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual float FSGSCppGetMaxMana() const;

	/** Returns current movement speed */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual float FSGSCppGetMoveSpeed() const;

	/** Returns the character level that is passed to the ability system */
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual int32 FSGSCppGetCharacterLevel() const;
	
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Getter")
	virtual float FSGSCppGetHealth() const;

	UFUNCTION(BlueprintPure, Category = "FSGSCpp|Getter")
	virtual bool FSGSCppGetIsAlive();

	
	/**
	* Данные Setter
	*/

	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Setter")
	void FSGSCppSetHealth(float SetNewHealth);

	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|Setter")
	virtual bool FSGSCppSetCharacterLevel(int32 NewLevel);

	/**
	* GameplayEffect
	*/

	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|GameplayEffect|Add")
	virtual void FSGSCppAddGameplayEffect(TSubclassOf<UGameplayEffect> GameplayEffectL);
	
	UFUNCTION(BlueprintCallable, Category = "FSGSCpp|GameplayEffect|Add")
	virtual void FSGSCppAddGameplayEffects(TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsL );
	
protected:
	/** The component used to handle ability system interactions */
	UPROPERTY()
	USGSCppAbilitySystemComponent* AbilitySystemComponent;

	/** List of attributes modified by the ability system */
	UPROPERTY()
	USGSCppAttributeSet* AttributeSet;
	
	/** Apply the startup gameplay abilities and effects */
	void AddStartupGameplayAbilities();

	/** Adds slotted item abilities if needed */
	void AddGameplayAbilities();
	
	/** Attempts to remove any startup gameplay abilities */
	void RemoveStartupGameplayAbilities();
	
	// Called from RPGAttributeSet, these call BP events above
	virtual void HandleDamage(float DamageAmount, const FHitResult& HitInfo, const struct FGameplayTagContainer& DamageTags, ASGSCppCharacterBase* InstigatorCharacter, AActor* DamageCauser);
	virtual void HandleHealthChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	virtual void HandleManaChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);
	virtual void HandleMoveSpeedChanged(float DeltaValue, const struct FGameplayTagContainer& EventTags);

	/** Required to support AIPerceptionSystem */
	virtual FGenericTeamId GetGenericTeamId() const override;

	// Friended to allow access to handle functions above
	friend USGSCppAttributeSet;
};
