// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bricks2.generated.h"

UCLASS()
class NEWBRICKBREAKER_API ABricks2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABricks2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Health;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
		UMaterial* NormalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
		UMaterial* HalfDamageMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
		UMaterial* AlmostDestroyedMaterial;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Cube;


	UFUNCTION(BlueprintCallable)
	void TakeDamage(float Damage);











public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

};
