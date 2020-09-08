// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPawn.h"
#include "PaperSpriteComponent.h"


void FTankInput::Sanitize()
{
	MovementInput = RawMovementInput.ClampAxes(-1.f, 1.f);
	MovementInput = MovementInput.GetSafeNormal();
	RawMovementInput.Set(0.f, 0.f);
}

void FTankInput::MoveX(float AxisValue)
{
	RawMovementInput.X += AxisValue;
	//UE_LOG(LogTemp, Warning, TEXT("Movement: %f"), RawMovementInput.X);

}

void FTankInput::MoveY(float AxisValue)
{
	RawMovementInput.Y += AxisValue;
	//UE_LOG(LogTemp, Warning, TEXT("MovementYaw: %f"), RawMovementInput.Y);

}

// Sets default values
ATankPawn::ATankPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent) {
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Tank Base"));
	}

	TankDirection = CreateDefaultSubobject<UArrowComponent>("Tank Direction");
	TankDirection->SetupAttachment(RootComponent);

	TankBody = CreateDefaultSubobject<UBoxComponent>(TEXT("TankBody"));
	TankBody->SetupAttachment(TankDirection);
	TankBody->SetBoxExtent(FVector(40.f, 40.f, 100.f));

	TankSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Tank Sprite"));
	TankSprite->SetupAttachment(TankDirection);

	USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->TargetArmLength = 500.f;
	SpringArm->CameraLagSpeed = 2.f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bEnableCameraRotationLag = false;
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetWorldRotation(FRotator(-90.f, 0.f, 0.f));
	
	ChildTurret = CreateDefaultSubobject<UChildActorComponent>(TEXT("Turret"));
	ChildTurret->SetupAttachment(TankDirection);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->bUsePawnControlRotation = false;
	CameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	CameraComponent->OrthoWidth = 1024.f;
	CameraComponent->AspectRatio = 3.f / 4.f;
	CameraComponent->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	CameraComponent->SetWorldRotation(FRotator(-90.f, 0.f, 0.f));

	MoveSpeed = 100.0f;
	MoveAccel = 200.0f;
	YawSpeed = 180.0f;

	Health = 100;

	CrushCollisionProfile = TEXT("Tank:Crush");
}

// Called when the game starts or when spawned
void ATankPawn::BeginPlay()
{
	Super::BeginPlay();
	
	UTankStatics::PutInZPlane(this);
}

// Called every frame
void ATankPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TankInput.Sanitize();
//	UE_LOG(LogTemp, Warning, TEXT("Movement: %f %f"), TankInput.MovementInput.X, TankInput.MovementInput.Y);
	//Move the tank
	{
		if (GetHealthRemaining() >= 0)
		{
			FVector DesiredMovementDirection = FVector(TankInput.MovementInput.X, TankInput.MovementInput.Y, 0.f);
			//UE_LOG(LogTemp, Warning, TEXT("TankMovementX and Y: %f %f"), TankInput.MovementInput.X, TankInput.MovementInput.Y);
			if (!DesiredMovementDirection.IsNearlyZero())
			{
				//Rotate the tank
				//Note that we rotate the tank direction not the root component.
				FRotator MovementAngle = DesiredMovementDirection.Rotation();
				float DeltaYaw = UTankStatics::FindDeltaAngleDegrees(TankDirection->GetComponentRotation().Yaw, MovementAngle.Yaw);
				bool bReverse = false;

				if (DeltaYaw != 0.0f)
				{
					//UE_LOG(LogTemp, Warning, TEXT("DeltaYaw: %f"), DeltaYaw);

					float AdjustedDeltaYaw = DeltaYaw;

					if (AdjustedDeltaYaw < -90.0f)
					{
						bReverse = true;
						AdjustedDeltaYaw += 180.0f;
						//UE_LOG(LogTemp, Warning, TEXT("AdjustedDeltaYaw: %f"), AdjustedDeltaYaw);

					}
					else if (AdjustedDeltaYaw > 90.0f)
					{
						bReverse = true;
						AdjustedDeltaYaw -= 180.0f;
						//UE_LOG(LogTemp, Warning, TEXT("AdjustedDeltaYaw: %f"), AdjustedDeltaYaw);
					}

					//Turn towards the desired Angle. Stop if we can get there in one frame
					float MaxYawThisFrame = YawSpeed * DeltaTime;
					if (MaxYawThisFrame >= FMath::Abs(AdjustedDeltaYaw))
					{
						if (bReverse)
						{
							//Move Backwards
							FRotator FacingAngle = MovementAngle;
							FacingAngle.Yaw = MovementAngle.Yaw + 180.0f;
							TankDirection->SetWorldRotation(FacingAngle);
						}
						else
						{
							TankDirection->SetWorldRotation(MovementAngle);
						}
					}
					else
					{
						//Can't reach desired angle this frame, Rotate part way 
						TankDirection->AddLocalRotation(FRotator(0.0f, FMath::Sign(AdjustedDeltaYaw) * MaxYawThisFrame, 0.0f));
					}
				}
				//Move the tank!
				{
					FVector MovementDirection = TankDirection->GetForwardVector() * (bReverse ? -1.0f : 1.0f);
					FVector StartPos = GetActorLocation();
					FVector Pos = StartPos;
					Pos.X += MovementDirection.X * 100.0f * DeltaTime;
					//UE_LOG(LogTemp, Warning, TEXT("PositionX: %f"), Pos.X);

					Pos.Y += MovementDirection.Y * 100.0f * DeltaTime;
					//UE_LOG(LogTemp, Warning, TEXT("PositionY: %f"), Pos.Y);

					if (UWorld* World = GetWorld())
					{
						TArray<FHitResult> HitResults;
						FVector BoxSize = TankBody->GetScaledBoxExtent();
						FCollisionShape CollisionShape;
						CollisionShape.SetBox(BoxSize);
						World->SweepMultiByProfile(HitResults, StartPos, Pos, TankBody->GetComponentRotation().Quaternion(), CrushCollisionProfile, CollisionShape);
						for (const FHitResult& HitResult : HitResults)
						{
							if (IDamageInterface* DamageTarget = Cast<IDamageInterface>(HitResult.Actor.Get()))
							{
								//GettingCrushed by tank is pretty final
								int32 TargetHealth = DamageTarget->GetHealthRemaining();
								if (TargetHealth >= 0) 
								{
									DamageTarget->ReceiveDamage(TargetHealth, EDamageType::Crushed);
								}
							}
						}
					}
					SetActorLocation(Pos);
				}
			}
		}
	}
}

// Called to bind functionality to input
void ATankPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Movement Input
	PlayerInputComponent->BindAxis("MoveX", this, &ATankPawn::MoveX);
	PlayerInputComponent->BindAxis("MoveYou", this, &ATankPawn::MoveY);

	//Firing Input
	PlayerInputComponent->BindAction("Fire1", IE_Pressed, this, &ATankPawn::Fire1Pressed);
	PlayerInputComponent->BindAction("Fire1", IE_Released, this, &ATankPawn::Fire1Released);
	PlayerInputComponent->BindAction("Fire2", IE_Pressed, this, &ATankPawn::Fire2Pressed);
	PlayerInputComponent->BindAction("Fire2", IE_Released, this, &ATankPawn::Fire2Released);
}

void ATankPawn::MoveX(float AxisValue)
{
	TankInput.MoveX(AxisValue);
}

void ATankPawn::MoveY(float AxisValue)
{
	TankInput.MoveY(AxisValue);
}

void FTankInput::Fire1(bool bPressed)
{
	bFire1 = bPressed;
}

void FTankInput::Fire2(bool bPressed)
{
	bFire2 = bPressed;
}

void ATankPawn::Fire1Pressed() 
{
	TankInput.Fire1(true);
}

void ATankPawn::Fire1Released()
{
	TankInput.Fire1(false);
}

void ATankPawn::Fire2Pressed()
{
	TankInput.Fire2(true);
}

void ATankPawn::Fire2Released()
{
	TankInput.Fire2(false);
}

void ATankPawn::ReceiveDamage(int32 IncomingDamage, EDamageType DamageType)
{
	if (IncomingDamage >= Health)
	{
		if (Health >= 0)
		{
			Health = -1;
			TankDie(DamageType);
		}
		return;
	}
	Health -= IncomingDamage;
}

void ATankPawn::TankDie_Implementation(EDamageType DamageType)
{
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		//TODO: Manage extra lives
		PC->RestartLevel();
	}
}