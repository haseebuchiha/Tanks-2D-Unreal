// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine.h"
#include "GameFramework/Pawn.h"
#include "DamageInterface.h"
#include "TankStatics.h"
#include "TankPawn.generated.h"

//Let this struct handle all of our inputs 
USTRUCT(BlueprintType)
struct FTankInput 
{
	GENERATED_BODY()

public:
	//Sanitized movement input, ready to use by game logic
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Input")
	FVector2D MovementInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Input")
	uint32 bFire1 : 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Input")
	uint32 bFire2 : 1;

	void Sanitize();
	void MoveX(float AxisValue);
	void MoveY(float AxisValue);
	void Fire1(bool bPressed);
	void Fire2(bool bPressed);

private:
	//Private because its internal, raw data and game code should never see this 
	FVector2D RawMovementInput;
};

UCLASS(abstract)
class TANKS_API ATankPawn : public APawn, public IDamageInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();
	
	//~Begin IDamage Interface
	virtual void ReceiveDamage(int32 IncomingDamage, EDamageType DamageType) override;
	virtual int32 GetHealthRemaining() override { return Health; }
	//~End IDamage interface

	UFUNCTION(BlueprintNativeEvent, Category = "Tank")
	void TankDie(EDamageType DamageType);
	void TankDie_Implementation(EDamageType DamageType);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UFUNCTION(BlueprintCallable, Category = "Tank")
	FORCEINLINE const FTankInput& GetCurrentInput() const { return TankInput; }

private:

	//Helpful debug tool - Which direction is the tank facing 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank", meta = (AllowPrivateAccess = "true"))
	class UArrowComponent* TankDirection;

	//Collision body for the tank
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* TankBody;
	
	//Sprite for the tank body
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank", meta = (AllowPrivateAccess = "true"))
	class UPaperSpriteComponent* TankSprite;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank", meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* ChildTurret;

	//Our Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	
private:
	void MoveX(float AxisValue);
	void MoveY(float AxisValue);
	void Fire1Pressed();
	void Fire1Released();
	void Fire2Pressed();
	void Fire2Released();

protected:
	//Our Input Struct
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Input")
	FTankInput TankInput;

	//Maximum turn rate (Degree/seconds) of the tank
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank", meta = (ClampMin = "0.0"))
	float YawSpeed;
	
	//Current Health
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank", meta = (CampMin = "1.0"))
	int32 Health;

	//Collision profile for detecting (via overlaps) the thing we can crush
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank")
	FName CrushCollisionProfile;

	//Maximum Movement rate (unit/second) of the tank.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank", meta = (ClampMin = "0.0"))
	float MoveSpeed;
	
	// Acceleration for our tank, when player is trying to move or change directions.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank", meta = (ClampMin = "0.0"))
	float MoveAccel;
	
};
