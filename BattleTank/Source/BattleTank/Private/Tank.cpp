// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "../Public/Tank.h"
#include "TankBarrel.h"
#include "TankTurret.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	TankAimingComponent = CreateDefaultSubobject<UTankAimingComponent>(FName("AimingComponent"));
}

void ATank::AimAt(const FVector & HitLocation)
{
	TankAimingComponent->AimAt(HitLocation, LaunchSpeed);
}

void ATank::SetBarrel(UTankBarrel * Barrel)
{
	TankAimingComponent->SetBarrel(Barrel);
}

void ATank::SetTurret(UTankTurret * Turret)
{
	TankAimingComponent->SetTurret(Turret);
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

