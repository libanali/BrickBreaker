// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickArray.h"

// Sets default values
ABrickArray::ABrickArray()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABrickArray::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrickArray::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

