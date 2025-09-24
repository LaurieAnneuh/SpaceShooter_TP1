// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceShoot/Public/Object/Asteroid.h"
#include "AsteroidManager.generated.h"

UCLASS()
class SPACESHOOT_API AAsteroidManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroidManager();
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAsteroid> AsteroidClass;
	
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> AsteroidHUDClass;
	UPROPERTY()
	UUserWidget* AsteroidHUD;

	int32 score =0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	float SpawnRadius = 2000.f;

	FTimerHandle SpawnTimerHandle;

	void SpawnAsteroid();

	FVector GetRandomSpawnLocation();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;UFUNCTION()
	void AddScore(int32 Amount = 100);
};
