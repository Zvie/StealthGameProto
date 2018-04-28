// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAIGuard.generated.h"

class UPawnSensingComponent;
class UAnimSequence;
class USoundBase;
class AFPSCharacter;

UENUM(BlueprintType)
enum class EAIState : uint8
{
	Idle,

	Suspicious,

	Alerted,

	Patrol
};

UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSAIGuard();

	UPROPERTY(EditDefaultsOnly, Category = "SoundFX")
	USoundBase* SeenSFX;

	UPROPERTY(EditDefaultsOnly, Category = "SoundFX")
	bool isSFXPlaying;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	UAnimSequence* WalkAnim;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
	UAnimSequence* IdleAnim;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "AI Component")
	UPawnSensingComponent* PawnSensingComp;

	
	UFUNCTION(BlueprintCallable, Category="AI")
	void AlertState(APawn* SeenPawn);


	UFUNCTION(BlueprintCallable, Category="AI")
	void SuspisciousState(APawn* NoiseInstigator, const FVector& Location, float Volume);

	UFUNCTION(BlueprintCallable, Category = "AI")
	void PatrolState();

	UFUNCTION(BlueprintCallable, Category = "AI")
	void IdleState();

	FRotator OriginalRotation;

	UFUNCTION()
	void ResetSFX();

	UFUNCTION()
		void ResetOrientation();

	FTimerHandle TimerHandle_ResetOrientation;

	FTimerHandle TimerHandle_ResetSFX;

	UPROPERTY(ReplicatedUsing = OnRep_GuardState)
	EAIState GuardState;

	UFUNCTION()
	void OnRep_GuardState();

	void SetGuardState(EAIState NewState);

	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void OnStateChanged(EAIState NewState);

	
		

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	// CHALLENGE CODE	

	/* Let the guard go on patrol */
	UPROPERTY(EditInstanceOnly, Category = "AI")
		bool bPatrol;

	/* First of two patrol points to patrol between */
	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
		AActor* FirstPatrolPoint;

	/* Second of two patrol points to patrol between */
	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
		AActor* SecondPatrolPoint;

	// The current point the actor is either moving to or standing at
	AActor* CurrentPatrolPoint;

	void MoveToNextPatrolPoint();

	
	
};
