// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATURALSELECTION_GameEnumTypes_generated_h
#error "GameEnumTypes.generated.h already included, missing '#pragma once' in GameEnumTypes.h"
#endif
#define NATURALSELECTION_GameEnumTypes_generated_h

#define NaturalSelection_Source_NaturalSelection_GameEnumTypes_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIStats_Statics; \
	NATURALSELECTION_API static class UScriptStruct* StaticStruct();


template<> NATURALSELECTION_API UScriptStruct* StaticStruct<struct FAIStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaturalSelection_Source_NaturalSelection_GameEnumTypes_h


#define FOREACH_ENUM_EGENES(op) \
	op(EGenes::None) \
	op(EGenes::Age) \
	op(EGenes::Energy) \
	op(EGenes::Speed) \
	op(EGenes::Size) 

enum class EGenes : uint8;
template<> NATURALSELECTION_API UEnum* StaticEnum<EGenes>();

#define FOREACH_ENUM_EAGE(op) \
	op(EAge::Baby) \
	op(EAge::Adolescent) \
	op(EAge::OldAge) 

enum class EAge : uint8;
template<> NATURALSELECTION_API UEnum* StaticEnum<EAge>();

#define FOREACH_ENUM_EAITYPE(op) \
	op(EAIType::Male) \
	op(EAIType::Female) 

enum class EAIType : uint8;
template<> NATURALSELECTION_API UEnum* StaticEnum<EAIType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
