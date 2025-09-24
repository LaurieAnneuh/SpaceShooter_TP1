// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Laser.generated.h"

UCLASS()
class SPACESHOOT_API ALaser : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ALaser();
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess="true"))
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
	float speed = 200.f;
	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category="Movement")
	FVector Direction;
	UFUNCTION()
	void SetThrowDirection(const FVector& InDirection, float InSpeed);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
