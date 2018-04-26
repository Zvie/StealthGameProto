// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"


AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
}

void AFPSGameMode::CompleteMission(APawn* InstigatorPawn)
{
	if (InstigatorPawn) 
	{
		InstigatorPawn->DisableInput(nullptr);

		// SpectatingViewpointClass at default is null
		if (SpectatingViewpointClass) {

			// create an array to get the returned actors
			TArray<AActor*> ReturnedActors;

			// the get all actors of class function
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointClass,ReturnedActors);

			
			if (ReturnedActors.Num() > 0) {
			
				// define the variable for the new view target and set it to the returned actor
				// at the zero index
				AActor* NewViewTarget = ReturnedActors[0];

				// Cast to the player controller then set view target with blend to the 
				// spectator camera
				APlayerController* PC = Cast<APlayerController>(InstigatorPawn->GetController());
					if (PC)
					{
						PC->SetViewTargetWithBlend(NewViewTarget, 0.5f, EViewTargetBlendFunction::VTBlend_Cubic);
						
					}
			}
		} else 
		{
			UE_LOG(LogTemp, Warning, TEXT("SpectatingViewPointClass is nullptr. Please update GameMode class with valid subclass. Cannot change spectating view point."));
		}
	}

	OnMissionCompleted(InstigatorPawn);

	
}
