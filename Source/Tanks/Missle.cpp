// Fill out your copyright notice in the Description page of Project Settings.

#include "Missle.h"
#include "DamageInterface.h"


// Sets default values
AMissle::AMissle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Speed = 200.f;
	Radius = 20.f;
	DirectDamage = 5;
}

// Called when the game starts or when spawned
void AMissle::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(ExplodeTimerHandle, this, &AMissle::Explode, 1.f);
}

// Called every frame
void AMissle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Loc = GetActorLocation();
	FVector DesiredEndLoc = Loc + ((DeltaTime * Speed) * GetTransform().GetUnitAxis(EAxis::X));
	
	if (UWorld* World = GetWorld())
	{
		//int32 lol = 0;
		FHitResult OutHit;
		FCollisionShape CollisionShape;
		CollisionShape.SetCapsule(Radius, 200.f);
		if (World->SweepSingleByProfile(OutHit, Loc, DesiredEndLoc, FQuat::Identity, MovementCollisionProfile, CollisionShape))
		{
			
			//UE_LOG(LogTemp, Warning, TEXT("I am working bruh!"));
			SetActorLocation(OutHit.Location);
			if (IDamageInterface* DamageActor = Cast<IDamageInterface>(OutHit.Actor.Get()))
			{
				//lol += 1;
				DamageActor->ReceiveDamage(DirectDamage, EDamageType::HitWithMissile);
				//UE_LOG(LogTemp, Warning, TEXT("lawl: %d "), lol);
			}
			Explode();
		}
		else
		{
			SetActorLocation(DesiredEndLoc);
		}
	}
}

void AMissle::Explode()
{
	GetWorldTimerManager().ClearTimer(ExplodeTimerHandle);
	SetActorEnableCollision(false);
	OnExplode();
}

void AMissle::OnExplode_Implementation()
{
	Destroy();
}

