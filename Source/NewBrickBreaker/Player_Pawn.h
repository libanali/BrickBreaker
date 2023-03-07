// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Player_Pawn.generated.h"

UCLASS()
class NEWBRICKBREAKER_API APlayer_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayer_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	float MovementSpeed;

	void MoveRight(float value);

	FVector MoveDirection;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
