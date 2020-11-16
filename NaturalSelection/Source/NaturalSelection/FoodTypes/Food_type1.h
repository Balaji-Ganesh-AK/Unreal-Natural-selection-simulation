// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaturalSelection/FoodSpawnerActor.h"

#include "Food_type1.generated.h"

UCLASS()
class NATURALSELECTION_API AFood_type1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFood_type1();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
protected:
	// Called when the game starts or when spawned

public:	

	// Game play Variables.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Energy = 100000000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AFoodSpawnerActor* FoodControllerRef = nullptr;

	//Game play methods.
	UFUNCTION(BlueprintCallable)
		void DestoryThis();


	
};
