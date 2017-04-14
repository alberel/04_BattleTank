// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"

void UTankTurret::MoveTo(float Yaw)
{
	// Move the barrel the right amount this frame given max elevation speed and framerate
	auto MaxDegreesThisFrame = MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto YawChange = FMath::Clamp(Yaw - GetComponentRotation().Yaw, -MaxDegreesThisFrame, MaxDegreesThisFrame);
	auto NewYaw = RelativeRotation.Yaw + YawChange;

	SetRelativeRotation(FRotator(0, NewYaw, 0));
}


