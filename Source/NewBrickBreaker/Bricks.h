// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Bricks.generated.h"

UCLASS()
class NEWBRICKBREAKER_API ABricks : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABricks();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Health;


	UFUNCTION(BlueprintCallable)
		void TakeDamage(float Damage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage Material")
		UMaterial* DamageMaterial;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Cube;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Normal Material")
		UMaterial* NormalMaterial;


	UPROPERTY(EditAnywhere, Category = "Bricks")
		TArray<AActor*> Bricks;

	UPROPERTY(EditAnywhere, Category = "The Bricks")
		TSubclassOf<AActor> Brick;


		



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
