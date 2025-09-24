// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "Asteroid.generated.h"

UCLASS()
class SPACESHOOT_API AAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroid();
	FTimerHandle DestroyTimerHandle;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite;
	UPROPERTY(EditAnywhere, Category = "Sprite")
	UPaperSprite* DestroyedSprite;
	
	UPROPERTY(VisibleAnywhere)
	float size;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Movement
	FVector MovementDirection;
	float MovementSpeed;	
	int32 life =3;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetTargetLocation(FVector Target);
	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
	
	UFUNCTION()
	void DestroyAsteroidFinal();
};
