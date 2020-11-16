// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AISpawnControllerActor.h"
#include "CoreMinimal.h"
#include "FoodSpawnerActor.h"
#include "GameFramework/Actor.h"
#include "GameControllerActor.generated.h"

UCLASS()
class NATURALSELECTION_API AGameControllerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameControllerActor();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
protected:
	
	

public:	
	
	//Game Play Variables.


	FTimerHandle TimerHandle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawners")
		AFoodSpawnerActor* FoodSpawnRef = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawners")
		AAISpawnControllerActor* AISpawnRef = nullptr;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game settings")
		int InitialAICount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game settings")
		int InitialFoodCount;
	
	//Game play methods
	UFUNCTION(BlueprintCallable)
		void StartSimulation();
};
