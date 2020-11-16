// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodSpawnerActor.h"

// Sets default values
AFoodSpawnerActor::AFoodSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFoodSpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AFoodSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

