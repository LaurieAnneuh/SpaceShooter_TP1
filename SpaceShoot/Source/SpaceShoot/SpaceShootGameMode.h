// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceShootGameMode.generated.h"

UCLASS(minimalapi)
class ASpaceShootGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASpaceShootGameMode();
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> GameOverWidgetClass;
	UPROPERTY(EditAnywhere)
	UUserWidget* GameOverWidget;

	UFUNCTION(BlueprintCallable)
	void GameOver();
};



