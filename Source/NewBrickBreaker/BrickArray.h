// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrickArray.generated.h"

UCLASS()
class NEWBRICKBREAKER_API ABrickArray : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABrickArray();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, Category = "Bricks")
		TArray<AActor*> Bricks;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
