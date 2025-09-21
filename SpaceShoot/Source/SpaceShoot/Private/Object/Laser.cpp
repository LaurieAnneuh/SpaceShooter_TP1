// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShoot/Public/Object/Laser.h"

// Sets default values
ALaser::ALaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(BoxCollision);

	BoxCollision->SetGenerateOverlapEvents(true);
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	Direction = FVector(-1.f, 0.f, 0.f);
}

// Called when the game starts or when spawned
void ALaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetActorLocation().X <= 500.f)
	{
		Super::Tick(DeltaTime);
		FVector NewLocation = GetActorLocation() + (Direction * speed * DeltaTime);
		SetActorLocation(NewLocation);
	}
	else
	{
		Destroy();
	}
}

void ALaser::SetThrowDirection(const FVector& InDirection, float InSpeed)
{
	Direction = InDirection.GetSafeNormal();
	speed = InSpeed;
}