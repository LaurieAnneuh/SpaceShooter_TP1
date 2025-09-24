// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/AsteroidManager.h"

#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAsteroidManager::AAsteroidManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAsteroidManager::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AAsteroidManager::SpawnAsteroid, 2.f, true);

	if (AsteroidHUDClass)
	{
		AsteroidHUD = CreateWidget<UUserWidget>(GetWorld(), AsteroidHUDClass);
		if (AsteroidHUD)
		{
			AsteroidHUD->AddToViewport();
		}
	}
}

// Called every frame
void AAsteroidManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AAsteroidManager::GetRandomSpawnLocation()
{
	// Assume we have a reference to player pawn or ship somewhere
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!PlayerPawn) return FVector::ZeroVector;

	FVector PlayerLocation = PlayerPawn->GetActorLocation();

	FVector RandomDir = FMath::VRand();
	FVector SpawnPos = PlayerLocation + RandomDir * SpawnRadius;
	SpawnPos.Z= PlayerLocation.Z;
	SpawnPos.X= 1500.0f;
	return SpawnPos;
}

void AAsteroidManager::SpawnAsteroid()
{
	if (!AsteroidClass) return;

	FVector SpawnLocation = GetRandomSpawnLocation();

	FRotator SpawnRotation = FRotator::ZeroRotator;
	SpawnRotation.Yaw = FMath::RandRange(0.f, 360.f);

	AAsteroid* SpawnedAsteroid = GetWorld()->SpawnActor<AAsteroid>(AsteroidClass, SpawnLocation, SpawnRotation);
	if (SpawnedAsteroid)
	{
		// Get the player ship location (or any target you want)
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (PlayerPawn)
		{
			SpawnedAsteroid->SetTargetLocation(PlayerPawn->GetActorLocation());
		}
	}
}

void AAsteroidManager::AddScore(int32 Amount)
{
	score += Amount;

	FString DisplayText = FString::Printf(TEXT("Score: %d"), score);
	
	if (AsteroidHUD)
	{
		UTextBlock* BonusText = Cast<UTextBlock>(AsteroidHUD->GetWidgetFromName("textscore"));
		if (BonusText)
		{
			BonusText->SetText(FText::FromString(DisplayText));
		}
	}

}