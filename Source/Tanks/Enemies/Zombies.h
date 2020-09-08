// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Engine.h"
#include "GameFramework/Pawn.h"
#include "DamageInterface.h"
#include "TankPawn.h"
#include "Zombies.generated.h"

UCLASS()
class TANKS_API AZombies : public APawn, public IDamageInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AZombies();

	//Set this zombie's target. The base version of this function will handle updating targetActor
	UFUNCTION(BlueprintCallable, Category = "AI")
	void SetTarget(AActor* NewTarget);

	UFUNCTION(BlueprintCallable, Category =	"AI")
	AActor* GetTarget();

	//Return the target Actor as a Tank, if possible. Returning Null indicated no target 
	UFUNCTION(BlueprintCallable, Category = "AI")
	ATankPawn* GetTargetAsTank();

	//Zombie AI
	UFUNCTION(BlueprintNativeEvent, Category = "AI")
	void ZombieAI(float DeltaSeconds);
	virtual void ZombieAI_Implementation(float DeltaSeconds);

	UFUNCTION(BlueprintNativeEvent, Category = "AI")
	bool ZombieAIShouldAttack();
	virtual bool ZombieAIShouldAttack_Implementation();

	//This can be used to animate walking 
	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void ZombieWalk(float DeltaSeconds, FVector DistanceWalkedThisFrame);

	//This can be used to start attack animation 
	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void ZombieAttack(float DeltaSeconds);

	//This can be used to handle death from the source
	UFUNCTION(BlueprintImplementableEvent, Category = "AI")
	void ZombieDie(EDamageType DamageType);

	//~ Begin IDamageInterface
	virtual void ReceiveDamage(int32 IncomingDamage, EDamageType DamageType) override;
	virtual int32 GetHealthRemaining() override;

	//~
	//New Zombie input	
	//~
		
	//Add rotation equal to the yaw (in degrees) provided. 
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "AddInput"))
	virtual void AddRotationInput(float DeltaYawDegrees);

	//Get Rotation input. Returns pre-clear value
	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual float GetRotationInput();

	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual float ConsumeRotationInput();

	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "AddInput"))
	virtual void AddAttackInput();

	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual bool GetAttackInput();

	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (Keywords = "ConsumeInput"))
	virtual bool ConsumeAttackInput();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//Camera Effects 
	UPROPERTY(EditAnywhere)
	TSubclassOf<UCameraShake>HitShake;
	
	//Current Health value. Might be fun to have different values for different attack types 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	int32 Health;
	
	//Sight Distace (When no target is present)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float SightDistance;

	//Sight half-angle in degrees (when no target is present)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float SightAngle;

	//Max yaw speed per second in degrees 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float YawSpeed;

	//Speed when wandering around or when facing away from the target 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float WalkSpeed;

	//Speed when rushing towards the target
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float RunSpeed;

	//Attack Distance
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackDistance;
	
	//Minimum time between attacks 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackCooldown;

	/** Game time, in seconds, when the Zombie will be allowed to attack again. */
	UPROPERTY(Transient, VisibleInstanceOnly, BlueprintReadWrite, Category = "Zombie")
	float AttackAvailableTime;

	/** Half-angle (in degrees) for our attack. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Zombie", meta = (ClampMin = "0.0"))
	float AttackAngle;

private:
	//The actor we're targeting. Will be NULL if there is no target 
	UPROPERTY(VisibleInstanceOnly, Category = "AI")
	AActor* TargetActor;

	//The Actor we're targeting, cast to a tank and chached. will be NULL if no Target or if the target 
	UPROPERTY(VisibleInstanceOnly, Category = "AI")
	ATankPawn* TargetTank;
	
	//Current Rotation input
	float YawInput;

	// Current Attack button status
	uint32 bAttackInput	: 1;
};
