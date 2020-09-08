// Fill out your copyright notice in the Description page of Project Settings.

#include "ZombieBrains.h"
#include "TankPawn.h"

void AZombieBrains::Tick(float DeltaTime)
{
	if (PawnAsZombie)
	{
		if (AActor* Target = PawnAsZombie->GetTarget())
		{
			//We do have a target. Shamble towards it and attemp voilence!
			FVector DirectionToTarget = (Target->GetActorLocation() - PawnAsZombie->GetActorLocation()).GetSafeNormal2D();
			float DotToTarget = FVector::DotProduct(DirectionToTarget, PawnAsZombie->GetActorForwardVector());
			float SidewaysDotToTarget = FVector::DotProduct(DirectionToTarget, PawnAsZombie->GetActorRightVector());
			float DeltaYawDesired = FMath::Atan2(SidewaysDotToTarget, DotToTarget);
			
			if (PawnAsZombie->ZombieAIShouldAttack())
			{
				PawnAsZombie->AddAttackInput();
			}
			else
			{
				//Move faster when facing towards the target so that we turn more accurately
				PawnAsZombie->AddMovementInput(FVector(1.f, 0.f, 0.f), FMath::GetMappedRangeValueClamped(FVector2D(-0.707f, 0.707f), FVector2D(0.f, 1.f), DotToTarget));

				PawnAsZombie->AddRotationInput(DeltaYawDesired);
			}
		}
	}
}

void AZombieBrains::Possess(APawn * InPawn)
{
	Super::Possess(InPawn);
	PawnAsZombie = Cast<AZombies>(GetPawn());
}

void AZombieBrains::UnPossess()
{
	Super::UnPossess();
	PawnAsZombie = nullptr;
}
