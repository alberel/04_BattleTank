// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::MoveTo(float Pitch)
{
	// Move the barrel the right amount this frame given max elevation speed and framerate
	auto MaxDegreesThisFrame = MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto ElevationChange = FMath::Clamp(Pitch - RelativeRotation.Pitch, -MaxDegreesThisFrame, MaxDegreesThisFrame);
	auto NewElevation = FMath::Clamp(RelativeRotation.Pitch + ElevationChange, MinElevationDegrees, MaxElevationDegrees);

	UE_LOG(LogTemp, Warning, TEXT("Barrel pitch at: %f"), NewElevation);

	SetRelativeRotation(FRotator(NewElevation, 0, 0));
}
