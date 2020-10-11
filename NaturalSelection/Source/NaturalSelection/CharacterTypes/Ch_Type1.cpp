// Fill out your copyright notice in the Description page of Project Settings.


#include "Ch_Type1.h"

// Sets default values
ACh_Type1::ACh_Type1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACh_Type1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACh_Type1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACh_Type1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

