// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathTrigger.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADeathTrigger::ADeathTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	CollisionBox->SetBoxExtent(FVector(70.f, 70.f, 70.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeathTrigger::OnOverlapBegin);




}

// Called when the game starts or when spawned
void ADeathTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADeathTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{


	if (OtherActor->ActorHasTag("Ball"))

	{

		GEngine->AddOnScreenDebugMessage(1, 3.0f, FColor::Blue, TEXT("death!"));

		OtherActor->Destroy(true);

		FTimerHandle RestartTimer;

		GetWorld()->GetTimerManager().SetTimer(RestartTimer, this, &ADeathTrigger::RestartLevel, 1.0f, false, 1.0f);


	}
}


void ADeathTrigger::RestartLevel()
{

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));

}



// Called every frame
void ADeathTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

