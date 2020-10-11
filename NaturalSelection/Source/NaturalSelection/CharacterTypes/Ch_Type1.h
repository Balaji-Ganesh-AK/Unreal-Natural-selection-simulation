// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ch_Type1.generated.h"

UCLASS()
class NATURALSELECTION_API ACh_Type1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACh_Type1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
