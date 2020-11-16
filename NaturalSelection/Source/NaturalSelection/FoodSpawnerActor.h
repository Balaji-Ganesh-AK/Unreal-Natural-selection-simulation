// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoodSpawnerActor.generated.h"

UCLASS()
class NATURALSELECTION_API AFoodSpawnerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFoodSpawnerActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
protected:
	// Called when the game starts or when spawned

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxFood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CurrentFoodCount = 0;

	
//Functions
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
		void GenerateFoodFirstTime(int count);

};
