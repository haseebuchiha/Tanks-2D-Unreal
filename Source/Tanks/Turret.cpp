// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "PaperSpriteComponent.h"
#include "TankPawn.h"
#include "Missle.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = TurretDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Turret Direction"));

	TurretSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("TurretSprite"));
	TurretSprite->SetupAttachment(TurretDirection);

	YawSpeed = 180.f;
	Fire1CoolDown = 1.f;
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	check(GetParentComponent());
	Tank = Cast<ATankPawn>(GetParentComponent()->GetOwner());
	check(Tank);
}

// Called every frame
void ATurret::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	check(TurretDirection);
	if (Tank)
	{
		if (APlayerController* PC = Cast<APlayerController>(Tank->GetController()))
		{
			FVector2D AimLocation;
			if (PC->GetMousePosition(AimLocation.X, AimLocation.Y))
			{
				FVector2D TurretLocation = FVector2D::ZeroVector;
				UGameplayStatics::ProjectWorldToScreen(PC, TurretDirection->GetComponentLocation(), TurretLocation);
				
				float DesiredYaw;
				
				if (UTankStatics::FindLookAtAngle2D(TurretLocation, AimLocation, DesiredYaw))
				{
					FRotator CurrentRotation = TurretDirection->GetComponentRotation();
					
					
					float DeltaYaw = UTankStatics::FindDeltaAngleDegrees(CurrentRotation.Yaw, DesiredYaw);
					float MaxDeltaYawThisFrame = YawSpeed * DeltaSeconds;
					if (MaxDeltaYawThisFrame > FMath::Abs(DeltaYaw))
					{
						//We can get there on this frame, So just set it.
						CurrentRotation.Yaw = DesiredYaw;
					}
					else
					{
						CurrentRotation.Yaw += (MaxDeltaYawThisFrame * FMath::Sign(DeltaYaw));
					}
					TurretDirection->SetWorldRotation(CurrentRotation);
				}
			}

			//Handle Input.
			const FTankInput& CurrentInput = Tank->GetCurrentInput();
			if (CurrentInput.bFire1 && Projectile)
			{
				if (UWorld* World = GetWorld())
				{
					float CurrentTime = World->GetTimeSeconds();
					//UE_LOG(LogTemp, Warning, TEXT("Fire!"));
					if (Fire1ReadyTime <= CurrentTime)
					{
						FVector Loc = TurretSprite->GetSocketLocation("MuzzleSocketName");
						FRotator Rot = TurretSprite->GetComponentRotation();
						
						if (AActor* NewProjectile = World->SpawnActor(Projectile))
						{
							NewProjectile->SetActorLocation(Loc);
							NewProjectile->SetActorRotation(Rot);
						}
						Fire1ReadyTime = CurrentTime + Fire1CoolDown;
					}
				}
			}
		}
	}
}

