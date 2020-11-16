// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Character.h"
#include "NaturalSelection/GameControllerActor.h"
#include "NaturalSelection/GameEnumTypes.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		AGameControllerActor* GameControllerRef;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		TSubclassOf<class ACh_TypeOne> BabiesBP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		float MaxSpeed = 400; //Cm/s

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		float MaxEnergy = 600000000;// in Joules //default  600000000
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		float Energy = MaxEnergy/2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		float Mass = 100; //KG

	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		float OffSpringChance = 30;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float MaxAge = 60 * 7;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float currentSpeed = MaxSpeed / 2;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float CurrentSize = Mass / 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float MutationPercentage = 30;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float GestationPeriod = 30;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		float GrowingAge = MaxAge / 2;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "AI Settings")
		EAIType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		EAge SpawnAge = EAge::Baby;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Settings")
		EGenes ChangedGene = EGenes::None;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		ACh_TypeOne* CurrentMate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		ACh_TypeOne* Parent;
	

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		bool bCanReproduce = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		bool bNeedsFood = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		bool bIsAlive = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Settings")
		bool bIsReproducing = false;
	
private:
	
	bool bCanMove = false;
	bool bIsGrowing = false;
	float Age = 0.0f;
	
#pragma endregion

#pragma region Structs
	
	
#pragma endregion 

#pragma region GamePlay Methods
public:
	UFUNCTION(BlueprintCallable)
		void CalculateStatsBasedOnAge();

	UFUNCTION(BlueprintCallable)
		void Grow();
	
	UFUNCTION(BlueprintCallable)
		FAIStats GetStats();

	UFUNCTION(BlueprintCallable)
		void SetStats(FAIStats babyStats);
	
	UFUNCTION(BlueprintCallable)
		void CalculateEnergyConsumed(float CurrentVelocity);

	UFUNCTION(BlueprintCallable)
		void AddEnergy(float amount);
	
	UFUNCTION(BlueprintCallable)
		bool GetCanMove();

	UFUNCTION(BlueprintCallable)
		bool GetIsGrowing();

	UFUNCTION(BlueprintCallable)
		void CheckIfAlive();

	UFUNCTION(BlueprintCallable)
		bool CanReproduce();
	
	UFUNCTION(BlueprintCallable)
		float GetAge();
	
	UFUNCTION(BlueprintCallable)
		void CheckIfNeedsFood();

	UFUNCTION(BlueprintCallable)
		void Reproduce();
	
	UFUNCTION(BlueprintCallable)
		void ResetReproduce();
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void SpawnBabies(ACh_TypeOne* ParentRef);
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void ChangeMaterialBasedOnGender();


private:
	void BabyStats();
	void AdolescentStats();
	void IncreaseSpeed();
	void IncreaseSize();


#pragma endregion 
};
