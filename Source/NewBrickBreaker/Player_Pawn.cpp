// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Pawn.h"

// Sets default values
APlayer_Pawn::APlayer_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementSpeed = 400.0f;

}

// Called when the game starts or when spawned
void APlayer_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}



void APlayer_Pawn::MoveRight(float value)
{

	MoveDirection.Y = FMath::Clamp(value, -1.0f, 1.0f);


}

// Called every frame
void APlayer_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!MoveDirection.IsZero())
	{
		const FVector NewLocation = GetActorLocation() + (MoveDirection * DeltaTime * MovementSpeed);
		SetActorLocation(NewLocation);

	}

}

// Called to bind functionality to input
void APlayer_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	PlayerInputComponent->BindAxis("MoveRight", this, &APlayer_Pawn::MoveRight);

}

