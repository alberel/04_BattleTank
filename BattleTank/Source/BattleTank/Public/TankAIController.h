// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	// How close AI tank will try to get to player
	float AcceptanceRadius = 3000;
};
