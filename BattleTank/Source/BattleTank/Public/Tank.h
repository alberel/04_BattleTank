// Copyright James Herd.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward declarations
class AProjectile;
class UTankBarrel;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

	UFUNCTION(BlueprintCallable, Category = "Firing")
	void Fire();

private:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

	// TODO Remove once firing is moved to aiming component
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 5000;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3.f;

	UTankBarrel* Barrel = nullptr; // TODO Remove

	double LastFireTime = 0;
};
