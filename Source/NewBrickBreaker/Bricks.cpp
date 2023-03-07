// Fill out your copyright notice in the Description page of Project Settings.


#include "Bricks.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABricks::ABricks()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 1.0f;

	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));

	RootComponent = Cube;


	NormalMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Normal Material"));

	DamageMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Damaged Material"));
}

// Called when the game starts or when spawned
void ABricks::BeginPlay()
{
	Super::BeginPlay();
	

	Cube->SetMaterial(0, NormalMaterial);


}

void ABricks::TakeDamage(float Damage)
{

	Health -= Damage;

	//change material of mesh here

	Cube->SetMaterial(0, DamageMaterial);
	

	GEngine->AddOnScreenDebugMessage(1, 3.0f, FColor::Green, TEXT("Hit!"));

	if (Health <= 0)
	{

	//	GEngine->AddOnScreenDebugMessage(1, 3.0f, FColor::Red, TEXT("Destroyed!"));

		Destroy(true);

	}

}



// Called every frame
void ABricks::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*

	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), Brick, "Brick", Bricks);

	if (Bricks.Num() < 1)

	{

		GEngine->AddOnScreenDebugMessage(1, 3.0f, FColor::Black, TEXT("bye!"));


	}

	*/
	

}

