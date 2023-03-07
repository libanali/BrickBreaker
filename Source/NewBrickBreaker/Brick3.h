// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick3.generated.h"

UCLASS()
class NEWBRICKBREAKER_API ABrick3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABrick3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	float Health;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Cube;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Materials")
		UMaterial* MaxMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Materials")
		UMaterial* NormalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Materials")
		UMaterial* HalfDamageMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Materials")
		UMaterial* AlmostDestroyedMaterial;


	UFUNCTION(BlueprintCallable)
		void TakeDamage(float Damage);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
