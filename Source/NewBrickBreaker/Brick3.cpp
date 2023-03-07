// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick3.h"

// Sets default values
ABrick3::ABrick3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Health = 2.0f;

	//creating the components

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	RootComponent = Cube;

	MaxMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Max Material"));
	NormalMaterial = CreateAbstractDefaultSubobject<UMaterial>(TEXT("Normal Material"));
	HalfDamageMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Half Damage Material"));
	AlmostDestroyedMaterial = CreateAbstractDefaultSubobject<UMaterial>(TEXT("Almost Destroyed Material"));


}

// Called when the game starts or when spawned
void ABrick3::BeginPlay()
{
	Super::BeginPlay();

	Cube->SetMaterial(0, MaxMaterial);

	
}

void ABrick3::TakeDamage(float Damage)
{

	Health -= Damage;

	if (Health == 1.5f)
	{

		Cube->SetMaterial(0, NormalMaterial);

	}

	if (Health < 1.5f)
	{

		Cube->SetMaterial(0, HalfDamageMaterial);

	}

	if (Health < 1.0f)
	{

		Cube->SetMaterial(0, AlmostDestroyedMaterial);

	}

	if (Health <= 0)
	{

		Destroy(true);

	}

}

// Called every frame
void ABrick3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

