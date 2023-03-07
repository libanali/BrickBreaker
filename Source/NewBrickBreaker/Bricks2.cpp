// Fill out your copyright notice in the Description page of Project Settings.


#include "Bricks2.h"

// Sets default values
ABricks2::ABricks2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 1.5f;

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	RootComponent = Cube;


	NormalMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Normal Material"));
	HalfDamageMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Half Damage Material"));
	AlmostDestroyedMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Almost Destroyed Material"));


}

// Called when the game starts or when spawned
void ABricks2::BeginPlay()
{
	Super::BeginPlay();

	Cube->SetMaterial(0, NormalMaterial);
	
}

void ABricks2::TakeDamage(float Damage)
{
	Health -= Damage;

	if (Health == 1.0f)
	{

		Cube->SetMaterial(0, HalfDamageMaterial);

		GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Blue, TEXT("Hit"));

	}


	if (Health < 1.0f)
	{

		Cube->SetMaterial(0, AlmostDestroyedMaterial);

	}


	if (Health <= 0.0f)

	{

		Destroy(true);

	}


}

// Called every frame
void ABricks2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

