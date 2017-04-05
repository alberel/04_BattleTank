// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller not posessing a tank!"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller posessing: %s"), *ControlledTank->GetName());
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("Player controller ticking."));
}

ATank* ATankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }
	//Get world location of linetrace through crosshair
		//If it hits something
			//Tell controlled tank to aim at this point
}
