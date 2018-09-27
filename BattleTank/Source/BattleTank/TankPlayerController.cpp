// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* PossessedTank = GetControlledTank();
	
	if (PossessedTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller possessing %s"), *PossessedTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Player controller not possessing any tank"));
	}
}


