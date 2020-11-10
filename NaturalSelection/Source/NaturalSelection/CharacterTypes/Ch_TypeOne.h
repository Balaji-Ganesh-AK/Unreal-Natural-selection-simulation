// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ch_TypeOne.generated.h"

UCLASS()
class NATURALSELECTION_API ACh_TypeOne : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACh_TypeOne();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


#pragma region GamePlay variables.
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Speed = 400;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxEnergy = 300;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Energy = MaxEnergy/2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Mass = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsGameOver = false;

	
		bool bCanMove = false;
	
#pragma endregion



#pragma region GamePlay Methods
public:
	UFUNCTION(BlueprintCallable)
		void CalculateEnergyConsumed();

	UFUNCTION(BlueprintCallable)
		bool GetCanMove();
#pragma endregion 
};
