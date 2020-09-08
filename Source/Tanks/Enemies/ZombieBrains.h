// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine.h"
#include "AIController.h"
#include "Zombies.h"
#include "ZombieBrains.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API AZombieBrains : public AAIController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	
	virtual void Possess(APawn *InPawn) override;
	virtual void UnPossess() override;

protected:
	//Our pawn, pre-cast to a zombie. Will be NULL if the pawn is NULL or is not a zombie
	UPROPERTY(BlueprintReadOnly, Category = "Zombie")
	AZombies* PawnAsZombie;
};
