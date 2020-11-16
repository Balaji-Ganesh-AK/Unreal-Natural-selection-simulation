// Fill out your copyright notice in the Description page of Project Settings.


#include "Food_type1.h"

// Sets default values
AFood_type1::AFood_type1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFood_type1::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFood_type1::DestoryThis()
{
	FoodControllerRef->CurrentFoodCount--;
	this->Destroy();
}

// Called every frame
void AFood_type1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

