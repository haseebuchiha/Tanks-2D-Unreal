// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TankStatics.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API UTankStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Calculate the angle difference between [-180, 180]*/
	UFUNCTION(BlueprintCallable, Category = "Math")
	static float FindDeltaAngleDegrees(float A1, float A2);
	
	/**Find the angle between two 2D Points */
	UFUNCTION(BlueprintPure, Category = "Math|Rotator", meta = (Keyword = "rotation rotate"))
	static bool FindLookAtAngle2D(const FVector2D& Start, const FVector2D& Target, float& Angle);

	UFUNCTION(BlueprintCallable, Category = "Tanks")
	static class ATankGameMode* GetTanksGameMode(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Tanks")	
	static void PutInZPlane(AActor* ActorToMove);
};