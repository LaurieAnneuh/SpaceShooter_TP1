// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShoot/Public/Object/SpaceShip.h"

#include <string>

#include "EnhancedInputComponent.h"
#include "SpaceShoot/Public/Object/Laser.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "Object/Asteroid.h"
#include "SpaceShoot/SpaceShootGameMode.h"

// Sets default values
ASpaceShip::ASpaceShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
	
	BoxCollision->SetGenerateOverlapEvents(true);
	BoxCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	
	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(BoxCollision);
	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

}

// Called when the game starts or when spawned
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ASpaceShip::OnOverlapBegin);
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
	if (SpaceshipHUDClass)
	{
		SpaceshipHUD = CreateWidget<UUserWidget>(GetWorld(), SpaceshipHUDClass);
		if (SpaceshipHUD)
		{
			SpaceshipHUD->AddToViewport();
		}
	}
}

// Called every frame
void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector Location = GetActorLocation();

	Location.X = FMath::Clamp(Location.X, -1100.f, 500.f);
	Location.Y = FMath::Clamp(Location.Y, -1500.f, 1600.f);

	SetActorLocation(Location);
}

// Called to bind functionality to input
void ASpaceShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASpaceShip::Move);
		EnhancedInput->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ASpaceShip::ThrowLaser);
	}
}

void ASpaceShip::Move(const FInputActionValue& Value)
{
	FVector2D Movement = Value.Get<FVector2D>();
	AddMovementInput(GetActorForwardVector(), Movement.Y);
	AddMovementInput(GetActorRightVector(), Movement.X);
}

void ASpaceShip::ThrowLaser()
{
	if (!LaserObj) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	FVector SpawnLocation = GetActorLocation();
	FRotator SpawnRotation = GetActorRotation();

	ALaser* Laser = GetWorld()->SpawnActor<ALaser>(LaserObj, SpawnLocation, SpawnRotation, SpawnParams);

	if (Laser)
	{
		FVector LaunchDirection = GetActorForwardVector();
		Laser->SetThrowDirection(LaunchDirection, ThrowSpeed);
	}
}

void ASpaceShip::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
							   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
							   bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this && OtherActor->IsA(AAsteroid::StaticClass()))
	{
		if (life > 0)
		{
			life--;
			OtherActor->Destroy();
			FlashRed();
		}
		if (SpaceshipHUD)
        {
			if (life == 2)
			{
				UImage* BonusImg = Cast<UImage>(SpaceshipHUD->GetWidgetFromName("first_life"));
				if (BonusImg)
				{
					BonusImg->SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f, 0.0f));
				}
			}
			else if (life == 1)
			{
				UImage* BonusImg = Cast<UImage>(SpaceshipHUD->GetWidgetFromName("second_life"));
				if (BonusImg)
				{
					BonusImg->SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f, 0.0f));
				}
			}
        }
		if (life == 0)
		{
			// Get reference to GameMode
			ASpaceShootGameMode* GameMode = Cast<ASpaceShootGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
			if (GameMode)
			{
				GameMode->GameOver();
			}

			Destroy();
		}
	}
}

void ASpaceShip::FlashRed()
{
	OriginalColor = Sprite->GetSpriteColor();

	Sprite->SetSpriteColor(FLinearColor(1.0f, 0.0f, 0.0f, 0.5f));

	GetWorld()->GetTimerManager().SetTimer(FlashTimerHandle, this, &ASpaceShip::ResetSpriteColor, 0.5f, false);
}

void ASpaceShip::ResetSpriteColor()
{
	Sprite->SetSpriteColor(OriginalColor);
}