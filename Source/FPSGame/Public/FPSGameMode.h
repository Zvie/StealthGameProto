// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly, Category="Spectating Camera")
	TSubclassOf<AActor> SpectatingViewpointClass;

	

public:

	AFPSGameMode();

	UPROPERTY(BlueprintReadWrite, Category = "Mission Complete/Fail")
	bool bIsMissionComplete;

	void CompleteMission(APawn* InstigatorPawn);

	UFUNCTION(BlueprintImplementableEvent, Category="GameMode")
	void OnMissionCompleted(APawn* InstigatorPawn);

};



