// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISpawnControllerActor.generated.h"

class AGameControllerActor;
UCLASS()
class NATURALSELECTION_API AAISpawnControllerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAISpawnControllerActor();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

protected:

	

public:
	//Game play variables.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CharacterCount = 0;

	
	//Game play functions
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void SpawnCharacter(int count, AGameControllerActor* ControllerRef);

};
