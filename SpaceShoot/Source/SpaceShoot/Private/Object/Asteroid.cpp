// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShoot/Public/Object/Asteroid.h"

#include "Kismet/GameplayStatics.h"
#include "Managers/AsteroidManager.h"
#include "Object/Laser.h"

// Sets default values
AAsteroid::AAsteroid()
{
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
	
	BoxCollision->SetGenerateOverlapEvents(true);
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	
	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(BoxCollision);
	MovementSpeed = 200.f;
	size = 0;
}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();	
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AAsteroid::OnOverlapBegin);
	if (MovementDirection.IsNearlyZero())
	{
		MovementDirection = FMath::VRand().GetSafeNormal();
	}
	size = FMath::RandRange(1, 3);
	float ScaleFactor = 0.5f * (size);
	life = size;
	BoxCollision->SetWorldScale3D(FVector(ScaleFactor));
}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(MovementDirection * MovementSpeed * DeltaTime, true);
	if (GetActorLocation().X <= -2000.f)
	{
		Destroy();
	}
}

void AAsteroid::SetTargetLocation(FVector Target)
{
	FVector DirectionToTarget = (Target - GetActorLocation()).GetSafeNormal();
	MovementDirection = DirectionToTarget;

	// Optionally randomize speed a bit here
	MovementSpeed = FMath::RandRange(300.f, 800.f);
}

void AAsteroid::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
							   bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this && OtherActor->IsA(ALaser::StaticClass()))
	{
		if (life > 0)
		{
			life--;
			OtherActor->Destroy();
		}
		if (life == 0)
		{
			// Notify the manager
			AAsteroidManager* Manager = Cast<AAsteroidManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AAsteroidManager::StaticClass()));
			if (Manager)
			{
				Manager->AddScore(100*size);
			}
			OtherActor->Destroy();
			if (DestroyedSprite)
			{
				Sprite->SetSprite(DestroyedSprite);
				BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
			
			SetActorTickEnabled(false);
			
			GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AAsteroid::DestroyAsteroid, 1.0f, false);
		}
	}
}

void AAsteroid::DestroyAsteroid()
{
	Destroy();
}