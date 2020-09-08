// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Missle.generated.h"

UCLASS()
class TANKS_API AMissle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMissle();

	//The speed of the missile
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	float Speed;

	//The missiles radius for collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	float Radius;
	
	//The damage the zombie will take/ is taking.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	int32 DirectDamage;

	//Describes what the missile hits 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	FName MovementCollisionProfile;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

protected:
	FTimerHandle ExplodeTimerHandle;
	
	void Explode();

	UFUNCTION(BlueprintNativeEvent, Category = "Projectile")
	void OnExplode();
	virtual void OnExplode_Implementation();
};
