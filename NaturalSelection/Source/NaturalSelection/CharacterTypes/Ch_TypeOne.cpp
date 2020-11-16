// Fill out your copyright notice in the Description page of Project Settings.


#include "Ch_TypeOne.h"

#include "Kismet/GameplayStatics.h"

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
	Age = UGameplayStatics::GetTimeSeconds(this);
	bCanMove = true;
	bIsAlive = true;
	bIsGrowing = true;
	CalculateStatsBasedOnAge();
	ChangeMaterialBasedOnGender();
	
}

// Called every frame
void ACh_TypeOne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckIfAlive();
	CheckIfNeedsFood();
	Grow();
	//UE_LOG(LogTemp, Warning, TEXT("Testing"));
}

// Called to bind functionality to input
void ACh_TypeOne::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACh_TypeOne::CalculateStatsBasedOnAge()
{
	switch (SpawnAge)
	{
		case EAge::Baby: BabyStats(); break;
		case EAge::Adolescent: AdolescentStats(); break;
		case EAge::OldAge: break;
		default: ;
	}
}

void ACh_TypeOne::Grow()
{
	if(bIsGrowing)
	{
		if(Age>MaxAge/2)
		{
			bIsGrowing = false;
			currentSpeed = MaxSpeed;
			CurrentSize = Mass;
			this->SetActorScale3D(FVector(CurrentSize / 100, CurrentSize / 100, CurrentSize / 100));
			bIsGrowing = false;
			SpawnAge = EAge::Adolescent;
		}
		else
		{
			IncreaseSize();
			IncreaseSpeed();
		}
	}
}

FAIStats ACh_TypeOne::GetStats()
{
	FAIStats returnStats;

	if (Parent)
	{

		returnStats.Gender = FMath::RandRange(0, 100) > 50 ? EAIType::Female : EAIType::Male;
		returnStats.MaxEnergy = Parent->MaxEnergy;
		returnStats.MaxSpeed = Parent->MaxSpeed;
		returnStats.MaxAge = Parent->MaxAge;
		returnStats.MaxSize = Parent->Mass;


		const bool canMutate = FMath::RandRange(0, 100) < 30 ? true : false;

		if (canMutate)
		{
			if (Parent->Energy < (0.5 * Parent->MaxEnergy))
			{
				const bool tempChange = FMath::RandRange(0, 100) < 10 ? true : false;

				if (tempChange)
				{
					returnStats.MaxSpeed -= 0.1 * returnStats.MaxSpeed;
					returnStats.ChangedGene = EGenes::Speed;
				}
				else
				{
					const bool SizeChange = FMath::RandRange(0, 100) < 50 ? true : false;

					if (SizeChange)
					{
						returnStats.MaxSize -= 0.1 * returnStats.MaxSize;
						returnStats.ChangedGene = EGenes::Size;
					}
					else
					{
						returnStats.MaxEnergy += 0.1 * returnStats.MaxEnergy;
						returnStats.ChangedGene = EGenes::Energy;
					}
				}
			}
			else if (Parent->Energy > (0.8 * Parent->MaxEnergy))
			{
				const bool tempChange = FMath::RandRange(0, 100) < 10 ? true : false;

				if (tempChange)
				{
					returnStats.MaxEnergy -= 0.1 * returnStats.MaxEnergy;
					returnStats.ChangedGene = EGenes::Energy;
				}
				else
				{
					const bool SizeChange = FMath::RandRange(0, 100) < 50 ? true : false;

					if (SizeChange)
					{
						returnStats.MaxSize += 0.1 * returnStats.MaxSize;
						returnStats.ChangedGene = EGenes::Size;
					}
					else
					{
						returnStats.MaxSpeed += 0.1 * returnStats.MaxSpeed;
						returnStats.ChangedGene = EGenes::Speed;
					}
				}
			}
		}
		else
			returnStats.ChangedGene = EGenes::None;
	}


	return returnStats;
	
}

void ACh_TypeOne::SetStats(FAIStats babyStats)
{

	Type = babyStats.Gender;
	MaxEnergy = babyStats.MaxEnergy;
	MaxAge = babyStats.MaxAge;
	MaxSpeed = babyStats.MaxSpeed;
	Mass = babyStats.MaxSize;
	SpawnAge = EAge::Baby;
	ChangedGene = babyStats.ChangedGene;
	ChangeMaterialBasedOnGender();
	
}

void ACh_TypeOne::CalculateEnergyConsumed(float CurrentVelocity)
{
	if(Energy>0.0f && bIsAlive)
	{
		//Divide by 100 to convert from CM/s to M/S
		const auto temp= (CurrentSize * ((CurrentVelocity * CurrentVelocity)/100)) / 2;
		Energy -= temp;
		
	}
	else
	{
		if(bIsAlive)
		{
			
			Age = UGameplayStatics::GetTimeSeconds(this) - Age;
			bCanMove = false;
			bIsAlive = false;
		}
		//implement game over here!
	}
	
}

void ACh_TypeOne::AddEnergy(float amount)
{
	Energy += amount;
	if(Energy> MaxEnergy)
	{
		Energy = MaxEnergy;
	}
}

bool ACh_TypeOne::GetCanMove()
{
	if (bIsAlive)
	{

		if (Energy > 0.0f)
			bCanMove = true;
		else
			bCanMove = false;
	}
	else
		bCanMove = false;

	return bCanMove;
}

bool ACh_TypeOne::GetIsGrowing()
{

	if (bIsAlive)
	{

		if (GetAge() > (MaxAge / 2))
		{
			bIsGrowing = false;
		}
		else
			bIsGrowing = true;
	}
	else
		bIsGrowing = false;

	
	return bIsGrowing;
}

void ACh_TypeOne::CheckIfAlive()
{
	if (Age > MaxAge)
	{
		bIsAlive = false;
	}
	else
		bIsAlive = true;

	if(Energy<=0)
	{
		bIsAlive = false;
	}
}

bool ACh_TypeOne::CanReproduce()
{
	if (!bIsReproducing && !bNeedsFood)
	{

		if (Energy > (0.3 * MaxEnergy) && Age > (MaxAge / 2))
		{
			bCanReproduce = true;
			bNeedsFood = false;
		}
		else
			bCanReproduce = false;
	}
	else
		bCanReproduce = false;
	
	return bCanReproduce;
	
}

float ACh_TypeOne::GetAge()
{
	if(bIsAlive)
		Age = UGameplayStatics::GetTimeSeconds(this) - Age;

	return Age;

}

void ACh_TypeOne::CheckIfNeedsFood()
{
	if (bIsAlive)
	{
		if(Energy>(0.3* MaxEnergy) && bCanReproduce)
		{
			bNeedsFood = false;
		}
		if (Energy > (0.3 * MaxEnergy) && !bCanReproduce)
		{
			bNeedsFood = true;
		}
		if(Energy>(0.85*MaxEnergy))
		{
			bNeedsFood = false;
		}

		if (Energy < 0.15* MaxEnergy)
		{
			
			bNeedsFood = true;
			bCanReproduce = false;
		}
	}
	else
		bNeedsFood = false;
}

void ACh_TypeOne::Reproduce()
{
	bCanReproduce = false;
	bIsReproducing = true;
		
}

void ACh_TypeOne::ResetReproduce()
{
	if(Type==EAIType::Female)
	{
		auto temp = FMath::RandRange(0, 100) > 50 ? CurrentMate : this;
		SpawnBabies(temp);
	}
	bIsReproducing = false;
	CurrentMate = nullptr;
	CanReproduce();
}

void ACh_TypeOne::AdolescentStats()
{
	Age = MaxAge / 2;
	currentSpeed = MaxSpeed;
	CurrentSize = Mass;
	Energy = MaxEnergy/2;
	this->SetActorScale3D(FVector(CurrentSize / 100, CurrentSize / 100, CurrentSize / 100));
	bIsGrowing = false;
}

void ACh_TypeOne::IncreaseSpeed()
{
	if(currentSpeed<MaxSpeed)
	{
		currentSpeed += 0.005;
		if(currentSpeed>MaxSpeed)
		{
			currentSpeed = MaxSpeed;
		}
	}
}

void ACh_TypeOne::IncreaseSize()
{
	if (CurrentSize < Mass)
	{
		CurrentSize += 0.005;
		this->SetActorScale3D(FVector(CurrentSize / 100, CurrentSize / 100, CurrentSize / 100));
		if (CurrentSize > Mass)
		{
			CurrentSize = Mass;
		}
	}
}

void ACh_TypeOne::BabyStats()
{
	Age = 0.0;
	currentSpeed = MaxSpeed / 2;
	CurrentSize = Mass / 2;
	Energy = MaxEnergy / 4;

	this->SetActorScale3D(FVector(CurrentSize / 100, CurrentSize / 100, CurrentSize / 100));
	bIsGrowing = true;
	
}


