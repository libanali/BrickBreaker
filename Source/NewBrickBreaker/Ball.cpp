// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

}

void ABall::OnBeginOverlap(UPrimitiveComponent* Hitcomp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//if ((OtherActor != nullptr) && (OtherComp != nullptr) && (OtherActor != this))

	//{

		//GEngine->AddOnScreenDebugMessage(1, 4.0f, FColor::Emerald, TEXT("Death"));

	//}


}




// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	Mesh->AddImpulse(FVector(1100.f, 0.0f, 0.0f), NAME_None, false);

	//GEngine->AddOnScreenDebugMessage(1, 3.0f, FColor::Purple, TEXT("Boom!"));
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

