// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BrickBreakerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class NEWBRICKBREAKER_API ABrickBreakerGameMode : public AGameMode
{
	GENERATED_BODY()

		ABrickBreakerGameMode();

protected:

	virtual void BeginPlay() override;

	


public:

	UPROPERTY(EditAnywhere, Category = "Number of Bricks")
      TArray<AActor*> Bricks;


	//UPROPERTY(EditAnywhere, Category = "Bricks")
	 //TSubclassOf<AActor> Brick;



	virtual void Tick(float DeltaTime) override;
	
};
