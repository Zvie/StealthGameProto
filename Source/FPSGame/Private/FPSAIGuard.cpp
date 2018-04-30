
// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Net/UnrealNetwork.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "FPSCharacter.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	SetReplicates(true);
	SetReplicateMovement(true);

}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetActorRotation();

	if (bPatrol)
	{
		PatrolState();
	}
	else {
		IdleState();
	}
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// Patrol Goal Checks
	if (CurrentPatrolPoint)
	{
		FVector Delta = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		if (GuardState == EAIState::Patrol) {

			// Check if we are within 50 units of our goal, if so - pick a new patrol point
			if (DistanceToGoal < 75)
			{
				MoveToNextPatrolPoint();
			}
		}

	}

}


void AFPSAIGuard::OnRep_GuardState()
{
	OnStateChanged(GuardState);
}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if (GuardState == NewState)
	{
		return;
	}

	GuardState = NewState;
	OnRep_GuardState();
}


void AFPSAIGuard::AlertState(APawn* SeenPawn)
{
	
	SetGuardState(EAIState::Alerted);

	if (SeenPawn == nullptr)
	{
		return;
	}

	if (isSFXPlaying == false) {

		UGameplayStatics::PlaySound2D(this, SeenSFX);
		isSFXPlaying = true;
		GetWorldTimerManager().ClearTimer(TimerHandle_ResetSFX);
		GetWorldTimerManager().SetTimer(TimerHandle_ResetSFX, this, &AFPSAIGuard::ResetSFX, 4.0f);
	 }
	
		
	

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM)
	{
		AFPSCharacter* myChar = Cast<AFPSCharacter>(this->GetClass());

		
		GM->OnMissionComplete(SeenPawn, false);
		
		
	}

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3.0f);

	// Stop Movement if Patrolling
	AController* Controller = GetController();
	if (Controller)
	{
		Controller->StopMovement();
	}

	

}

void AFPSAIGuard::SuspisciousState(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	SetGuardState(EAIState::Suspicious);

	

	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();

	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;


	SetActorRotation(NewLookAt);

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3.0f);

	

	// Stop Movement if Patrolling
	AController* Controller = GetController();
	if (Controller)
	{
		Controller->StopMovement();
	}
}

void AFPSAIGuard::ResetOrientation()
{
	if (GuardState == EAIState::Alerted)
	{
		return;
	}

	SetActorRotation(OriginalRotation);


	if (bPatrol) {
		PatrolState();
	}
	else {
		IdleState();
	}
}


void AFPSAIGuard::PatrolState()
{
	

	SetGuardState(EAIState::Patrol);

	bool bLoop = true;

	GetMesh()->PlayAnimation(WalkAnim, bLoop);

	MoveToNextPatrolPoint();

}

void AFPSAIGuard::MoveToNextPatrolPoint()
{
	// Assign next patrol point.
	if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == SecondPatrolPoint)
	{
		CurrentPatrolPoint = FirstPatrolPoint;
	}
	else
	{
		CurrentPatrolPoint = SecondPatrolPoint;
	}

	UNavigationSystem::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
}

void AFPSAIGuard::IdleState()
{
	SetGuardState(EAIState::Idle);

	bool bLoop = true;

	GetMesh()->PlayAnimation(WalkAnim, bLoop);

	AController* Controller = GetController();
	if (Controller)
	{
		Controller->StopMovement();
	}
}

void AFPSAIGuard::ResetSFX()
{
	isSFXPlaying = false;
}

void AFPSAIGuard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSAIGuard, GuardState);
}





