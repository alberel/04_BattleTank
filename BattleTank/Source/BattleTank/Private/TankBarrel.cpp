// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::ElevateBarrel(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame given max elevation speed and framerate
	UE_LOG(LogTemp, Warning, TEXT("ElevateBarrel() called at speed %f"), DegreesPerSecond);
}
