// Fill out your copyright notice in the Description page of Project Settings.

#include "TankStatics.h"
#include "TankPawn.h"
#include "TankGameMode.h"

float UTankStatics::FindDeltaAngleDegrees(float A1, float A2)
{
	//Find the difference
	float Delta = A2 - A1;

	if (Delta > 180.f)
	{
		Delta = Delta - (360.f);
	}
	else if (Delta < -180.f)
	{
		Delta = Delta + (360.f);
	}
	return Delta;
}

bool UTankStatics::FindLookAtAngle2D(const FVector2D& Start, const FVector2D& Target, float& Angle)
{
	FVector2D Normal = (Target - Start).GetSafeNormal();

	if (!Normal.IsNearlyZero()) 
	{
		Angle = FMath::RadiansToDegrees(FMath::Atan2(Normal.Y, Normal.X));
		return true;
	}
	return false;
}

ATankGameMode * UTankStatics::GetTanksGameMode(UObject * WorldContextObject)
{
	return Cast<ATankGameMode>(UGameplayStatics::GetGameMode(WorldContextObject));
}

void UTankStatics::PutInZPlane(AActor * ActorToMove)
{
	if (ATankGameMode* GM = UTankStatics::GetTanksGameMode(ActorToMove))
	{
		FVector Loc = ActorToMove->GetActorLocation();
		Loc.Z = GM->PlayInZPlane;
		ActorToMove->SetActorLocation(Loc);
	}
}


