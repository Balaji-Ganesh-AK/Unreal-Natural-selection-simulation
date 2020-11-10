// Fill out your copyright notice in the Description page of Project Settings.


#include "Ch_TypeOne.h"

// Sets default values
ACh_TypeOne::ACh_TypeOne()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACh_TypeOne::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACh_TypeOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACh_TypeOne::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACh_TypeOne::CalculateEnergyConsumed()
{
	if(Energy>0.0f)
	{
		const auto temp= (Mass * (Speed * Speed)) / 2;
		Energy -= temp;
		
	}
	else
	{
		//implement game over here!
	}
	
}

bool ACh_TypeOne::GetCanMove()
{
	if (Energy > 0.0f)
		bCanMove = true;
	else
		bCanMove = false;

	return bCanMove;
}

