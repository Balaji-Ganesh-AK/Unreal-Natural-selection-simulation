// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameEnumTypes.generated.h"
UENUM(BlueprintType)
enum class EAIType : uint8
{
	Male,
	Female
};

UENUM(BlueprintType)
enum class EAge : uint8
{
	Baby,
	Adolescent,
	OldAge
};

UENUM(BlueprintType)
enum class EGenes : uint8
{
	None,
	Age,
	Energy,
	Speed,
	Size
};


USTRUCT(BlueprintType)
struct FAIStats
{
	GENERATED_BODY()
		int MaxAge;
	float MaxEnergy;
	float MaxSpeed;
	float MaxSize;
	EAIType Gender;
	EGenes ChangedGene;


};

