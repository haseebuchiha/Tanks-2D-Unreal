// Fill out your copyright notice in the Description page of Project Settings.

#include "Zombies.h"


// Sets default values
AZombies::AZombies()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	Health = 10;
	SightDistance = 500.f;
	SightAngle = 60.f;
	YawSpeed = 90.f;
	WalkSpeed = 25.f;
	RunSpeed = 45.f;
	AttackDistance = 100.f;
	AttackAngle = 30.f;
	AttackCooldown = 1.f;
}

void AZombies::SetTarget(AActor * NewTarget)
{
	TargetActor = NewTarget;
	TargetTank = Cast<ATankPawn>(NewTarget);
}

AActor * AZombies::GetTarget()
{
	return TargetActor;
}

ATankPawn * AZombies::GetTargetAsTank()
{
	return TargetTank;
}

void AZombies::ZombieAI_Implementation(float DeltaSeconds)
{
	//The zombie always moves unless attacking. If moving, it moves between WalkSpeed and RunSpeed.
	FVector DesiredMovement = GetAttackInput() ? FVector::ZeroVector : (FMath::GetMappedRangeValueClamped(FVector2D(0.f, 1.f), FVector2D(WalkSpeed, RunSpeed), GetPendingMovementInputVector().X)) * DeltaSeconds * GetActorForwardVector();
	FVector OriginalLocation = GetActorLocation();
	FVector DesiredLoc = OriginalLocation + DesiredMovement;
	float MaxYawThisFrame = YawSpeed * DeltaSeconds;
	FRotator DesiredRot = GetActorRotation() + FRotator(0.f, FMath::Clamp(GetRotationInput(), -MaxYawThisFrame, MaxYawThisFrame), 0.f);

	SetActorLocationAndRotation(DesiredLoc, DesiredRot.Quaternion(), true);

	FVector DistanceWalked = GetActorLocation() - OriginalLocation;
	if (!DistanceWalked.IsNearlyZero())
	{
		ZombieWalk(DeltaSeconds, DistanceWalked);
	}

	//See if we have a target and deal with it if we do.
	//Find a target if we don't.
	if (AActor* Target = GetTarget())
	{
		//We Do not have a target. See if we're attacking, since our attack always hit.
		FVector OurLocation = GetActorLocation();
		FVector DirectionToTarget = (Target->GetActorLocation() - OurLocation).GetSafeNormal2D();
		float DotToTarget = FVector::DotProduct(DirectionToTarget, GetActorForwardVector());

		//Check to see if we should attack based on button status and attack cooldown
		float CurrentTime = GetWorld()->GetTimeSeconds();
		if (GetAttackInput() && (AttackAvailableTime <= CurrentTime))
		{
			AttackAvailableTime = CurrentTime + AttackCooldown;
			ZombieAttack(DeltaSeconds);
			if (DotToTarget >= FMath::Cos(FMath::DegreesToRadians(AttackAngle)))
			{
				float DistSqXY = FVector::DistSquaredXY(Target->GetActorLocation(), OurLocation);
				if (DistSqXY <= (AttackDistance * AttackDistance))
				{
					if (ATankPawn* TankTarget = GetTargetAsTank())
					{
						TankTarget->ReceiveDamage(10.f, EDamageType::ZombieSlap);
						if (APlayerController* PC = Cast<APlayerController>(TankTarget->GetController()))	
						{
							PC->ClientPlayCameraShake(HitShake, 1.f);
						}
					}
					else
					{
						SetTarget(nullptr);
					}
				}
			}
		}
	}
	else
	{
		//Look for a target. We might not do this every singlg frame, but for now it's OK. 
		//TODO: Make this use a list of registered targets so we can handle multiplayer or add decoys.
		Target = UGameplayStatics::GetPlayerPawn(this, 0);
		float DistSqXY = FVector::DistSquaredXY(Target->GetActorLocation(), GetActorLocation());
		if (DistSqXY <= (SightDistance * SightAngle))
		{
			FVector DirectionToTarget = (Target->GetActorLocation() - GetActorLocation()).GetSafeNormal2D();
			if (FVector::DotProduct(DirectionToTarget, GetActorForwardVector()) >= FMath::Cos(FMath::DegreesToRadians(SightAngle)))
			{
				SetTarget(Target);
			}
		}
	}
}

bool AZombies::ZombieAIShouldAttack_Implementation()
{
	if (AActor* Target = GetTarget())
	{
		//Attack our target if we're in range(Distance and angle). 
		FVector OurLocation = GetActorLocation();
		FVector DirectionToTarget = (Target->GetActorLocation() - OurLocation).GetSafeNormal2D();
		float DotToTarget = FVector::DotProduct(DirectionToTarget, GetActorForwardVector());
		if (DotToTarget >= FMath::Cos(FMath::DegreesToRadians(AttackAngle)))
		{
			float DistSqXY = FVector::DistSquaredXY(Target->GetActorLocation(), OurLocation);
			if (DistSqXY <= (AttackDistance * AttackDistance))
			{
				//Attacking cooldown is not checked 
				return true;
			}
		}
	}
	return false;
}

void AZombies::AddRotationInput(float DeltaYawDegrees)
{
	YawInput += DeltaYawDegrees;
}

float AZombies::GetRotationInput()
{
	return YawInput;
}

float AZombies::ConsumeRotationInput()
{
	float RetVal = YawInput;
	YawInput = 0.f;
	return RetVal;
}

void AZombies::AddAttackInput()
{
	bAttackInput = true;
}

bool AZombies::GetAttackInput()
{
	return bAttackInput;
}

bool AZombies::ConsumeAttackInput()
{
	bool bRetVal = bAttackInput;
	bAttackInput = false;
	return bRetVal;
}

//void AZombies::ZombieDie_Implementation(EDamageType DamageType)
//{
//}

void AZombies::ReceiveDamage(int32 IncomingDamage, EDamageType DamageType)
{
	UE_LOG(LogTemp, Warning, TEXT("IncomingDamage: %d, Health: %d"), IncomingDamage, Health);
	if (IncomingDamage >= Health)
	{
		//Health -= IncomingDamage;
		if (Health >= 0)
		{
			//UE_LOG(LogTemp, Warning, TEXT("I am : %d"), Health);
			Health = -1;
			ZombieDie(DamageType);
		}
		Health -= IncomingDamage;
	}
}

int32 AZombies::GetHealthRemaining()
{
	return Health;
}

// Called when the game starts or when spawned
void AZombies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ZombieAI(DeltaTime);

	//Make Sure to consume all input on each frame
	ConsumeMovementInputVector();
	ConsumeRotationInput();
	ConsumeAttackInput();

}

// Called to bind functionality to input
void AZombies::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

