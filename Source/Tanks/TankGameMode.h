// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API ATankGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATankGameMode();
	
	UPROPERTY(EditAnywhere)
	float PlayInZPlane;
};
