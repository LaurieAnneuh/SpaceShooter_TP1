// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceShootGameMode.h"
#include "SpaceShootCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ASpaceShootGameMode::ASpaceShootGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/BP_SpaceShip"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ASpaceShootGameMode::GameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("GAME OVER"));
	
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		PC->SetPause(true);
		PC->bShowMouseCursor = true;
	}
	if (GameOverWidgetClass)
	{
		GameOverWidget = CreateWidget<UUserWidget>(GetWorld(), GameOverWidgetClass);
		if (GameOverWidget)
		{
			GameOverWidget->AddToViewport();
		}
	}
}
