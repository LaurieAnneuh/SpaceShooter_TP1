// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "SpaceShip.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS(Blueprintable)
class SPACESHOOT_API ASpaceShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpaceShip();
	FTimerHandle FlashTimerHandle;
	FLinearColor OriginalColor;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Pawn)
	UPawnMovementComponent* MovementComponent;


	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* InputMappingContext;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* MoveAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* ShootAction;
	
	UPROPERTY(EditAnywhere, Category = "Thrower")
	TSubclassOf<class ALaser> LaserObj;

	UPROPERTY(EditAnywhere, Category = "Thrower")
	float ThrowSpeed = 1000.f;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> SpaceshipHUDClass;

	UPROPERTY()
	UUserWidget* SpaceshipHUD;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int32 life = 3;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Rotate(const FInputActionValue& Value);
	void ThrowLaser();
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
	void FlashRed();
	void ResetSpriteColor();
};