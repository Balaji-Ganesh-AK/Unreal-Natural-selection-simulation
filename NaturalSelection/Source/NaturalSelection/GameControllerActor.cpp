// Fill out your copyright notice in the Description page of Project Settings.


#include "GameControllerActor.h"

// Sets default values
AGameControllerActor::AGameControllerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameControllerActor::BeginPlay()
{
	Super::BeginPlay();
	FoodSpawnRef->GenerateFoodFirstTime(InitialFoodCount);
	AISpawnRef->SpawnCharacter(InitialAICount,this);
}

void AGameControllerActor::StartSimulation()
{
	
}

// Called every frame
void AGameControllerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

