// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/CharacterTypes/Ch_TypeOne.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCh_TypeOne() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_ACh_TypeOne_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_ACh_TypeOne();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
	NATURALSELECTION_API UScriptStruct* Z_Construct_UScriptStruct_FAIStats();
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EGenes();
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EAge();
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EAIType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AGameControllerActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACh_TypeOne::execResetReproduce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetReproduce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execReproduce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reproduce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCheckIfNeedsFood)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckIfNeedsFood();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execGetAge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCanReproduce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReproduce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCheckIfAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckIfAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execGetIsGrowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGrowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execGetCanMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execAddEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEnergy(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCalculateEnergyConsumed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateEnergyConsumed(Z_Param_CurrentVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execSetStats)
	{
		P_GET_STRUCT(FAIStats,Z_Param_babyStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStats(Z_Param_babyStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execGetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAIStats*)Z_Param__Result=P_THIS->GetStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execGrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCalculateStatsBasedOnAge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateStatsBasedOnAge();
		P_NATIVE_END;
	}
	static FName NAME_ACh_TypeOne_ChangeMaterialBasedOnGender = FName(TEXT("ChangeMaterialBasedOnGender"));
	void ACh_TypeOne::ChangeMaterialBasedOnGender()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACh_TypeOne_ChangeMaterialBasedOnGender),NULL);
	}
	static FName NAME_ACh_TypeOne_SpawnBabies = FName(TEXT("SpawnBabies"));
	void ACh_TypeOne::SpawnBabies(ACh_TypeOne* ParentRef)
	{
		Ch_TypeOne_eventSpawnBabies_Parms Parms;
		Parms.ParentRef=ParentRef;
		ProcessEvent(FindFunctionChecked(NAME_ACh_TypeOne_SpawnBabies),&Parms);
	}
	void ACh_TypeOne::StaticRegisterNativesACh_TypeOne()
	{
		UClass* Class = ACh_TypeOne::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnergy", &ACh_TypeOne::execAddEnergy },
			{ "CalculateEnergyConsumed", &ACh_TypeOne::execCalculateEnergyConsumed },
			{ "CalculateStatsBasedOnAge", &ACh_TypeOne::execCalculateStatsBasedOnAge },
			{ "CanReproduce", &ACh_TypeOne::execCanReproduce },
			{ "CheckIfAlive", &ACh_TypeOne::execCheckIfAlive },
			{ "CheckIfNeedsFood", &ACh_TypeOne::execCheckIfNeedsFood },
			{ "GetAge", &ACh_TypeOne::execGetAge },
			{ "GetCanMove", &ACh_TypeOne::execGetCanMove },
			{ "GetIsGrowing", &ACh_TypeOne::execGetIsGrowing },
			{ "GetStats", &ACh_TypeOne::execGetStats },
			{ "Grow", &ACh_TypeOne::execGrow },
			{ "Reproduce", &ACh_TypeOne::execReproduce },
			{ "ResetReproduce", &ACh_TypeOne::execResetReproduce },
			{ "SetStats", &ACh_TypeOne::execSetStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics
	{
		struct Ch_TypeOne_eventAddEnergy_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventAddEnergy_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "AddEnergy", nullptr, nullptr, sizeof(Ch_TypeOne_eventAddEnergy_Parms), Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_AddEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_AddEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics
	{
		struct Ch_TypeOne_eventCalculateEnergyConsumed_Parms
		{
			float CurrentVelocity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventCalculateEnergyConsumed_Parms, CurrentVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::NewProp_CurrentVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CalculateEnergyConsumed", nullptr, nullptr, sizeof(Ch_TypeOne_eventCalculateEnergyConsumed_Parms), Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CalculateStatsBasedOnAge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics
	{
		struct Ch_TypeOne_eventCanReproduce_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ch_TypeOne_eventCanReproduce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ch_TypeOne_eventCanReproduce_Parms), &Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CanReproduce", nullptr, nullptr, sizeof(Ch_TypeOne_eventCanReproduce_Parms), Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CanReproduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CanReproduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "ChangeMaterialBasedOnGender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CheckIfAlive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CheckIfNeedsFood", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics
	{
		struct Ch_TypeOne_eventGetAge_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventGetAge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "GetAge", nullptr, nullptr, sizeof(Ch_TypeOne_eventGetAge_Parms), Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_GetAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_GetAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics
	{
		struct Ch_TypeOne_eventGetCanMove_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ch_TypeOne_eventGetCanMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ch_TypeOne_eventGetCanMove_Parms), &Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "GetCanMove", nullptr, nullptr, sizeof(Ch_TypeOne_eventGetCanMove_Parms), Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_GetCanMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_GetCanMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics
	{
		struct Ch_TypeOne_eventGetIsGrowing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ch_TypeOne_eventGetIsGrowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ch_TypeOne_eventGetIsGrowing_Parms), &Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "GetIsGrowing", nullptr, nullptr, sizeof(Ch_TypeOne_eventGetIsGrowing_Parms), Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics
	{
		struct Ch_TypeOne_eventGetStats_Parms
		{
			FAIStats ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventGetStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FAIStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "GetStats", nullptr, nullptr, sizeof(Ch_TypeOne_eventGetStats_Parms), Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_Grow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_Grow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_Grow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "Grow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_Grow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_Grow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_Grow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_Grow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "Reproduce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_Reproduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_Reproduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "ResetReproduce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_ResetReproduce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_ResetReproduce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics
	{
		struct Ch_TypeOne_eventSetStats_Parms
		{
			FAIStats babyStats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_babyStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::NewProp_babyStats = { "babyStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventSetStats_Parms, babyStats), Z_Construct_UScriptStruct_FAIStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::NewProp_babyStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "SetStats", nullptr, nullptr, sizeof(Ch_TypeOne_eventSetStats_Parms), Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_SetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_SetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::NewProp_ParentRef = { "ParentRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ch_TypeOne_eventSpawnBabies_Parms, ParentRef), Z_Construct_UClass_ACh_TypeOne_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::NewProp_ParentRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "SpawnBabies", nullptr, nullptr, sizeof(Ch_TypeOne_eventSpawnBabies_Parms), Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_SpawnBabies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_SpawnBabies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACh_TypeOne_NoRegister()
	{
		return ACh_TypeOne::StaticClass();
	}
	struct Z_Construct_UClass_ACh_TypeOne_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReproducing_MetaData[];
#endif
		static void NewProp_bIsReproducing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReproducing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsFood_MetaData[];
#endif
		static void NewProp_bNeedsFood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanReproduce_MetaData[];
#endif
		static void NewProp_bCanReproduce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanReproduce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedGene_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChangedGene;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangedGene_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnAge;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnAge_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrowingAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrowingAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestationPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GestationPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MutationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffSpringChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffSpringChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BabiesBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BabiesBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameControllerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameControllerRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACh_TypeOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACh_TypeOne_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACh_TypeOne_AddEnergy, "AddEnergy" }, // 758411386
		{ &Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed, "CalculateEnergyConsumed" }, // 2067939165
		{ &Z_Construct_UFunction_ACh_TypeOne_CalculateStatsBasedOnAge, "CalculateStatsBasedOnAge" }, // 2935504188
		{ &Z_Construct_UFunction_ACh_TypeOne_CanReproduce, "CanReproduce" }, // 3958215466
		{ &Z_Construct_UFunction_ACh_TypeOne_ChangeMaterialBasedOnGender, "ChangeMaterialBasedOnGender" }, // 3261228610
		{ &Z_Construct_UFunction_ACh_TypeOne_CheckIfAlive, "CheckIfAlive" }, // 3727289851
		{ &Z_Construct_UFunction_ACh_TypeOne_CheckIfNeedsFood, "CheckIfNeedsFood" }, // 758162930
		{ &Z_Construct_UFunction_ACh_TypeOne_GetAge, "GetAge" }, // 1554631111
		{ &Z_Construct_UFunction_ACh_TypeOne_GetCanMove, "GetCanMove" }, // 491100721
		{ &Z_Construct_UFunction_ACh_TypeOne_GetIsGrowing, "GetIsGrowing" }, // 1225308407
		{ &Z_Construct_UFunction_ACh_TypeOne_GetStats, "GetStats" }, // 3695384287
		{ &Z_Construct_UFunction_ACh_TypeOne_Grow, "Grow" }, // 1562239994
		{ &Z_Construct_UFunction_ACh_TypeOne_Reproduce, "Reproduce" }, // 3756219300
		{ &Z_Construct_UFunction_ACh_TypeOne_ResetReproduce, "ResetReproduce" }, // 1420747759
		{ &Z_Construct_UFunction_ACh_TypeOne_SetStats, "SetStats" }, // 3724059494
		{ &Z_Construct_UFunction_ACh_TypeOne_SpawnBabies, "SpawnBabies" }, // 3626410158
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterTypes/Ch_TypeOne.h" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	void Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing_SetBit(void* Obj)
	{
		((ACh_TypeOne*)Obj)->bIsReproducing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing = { "bIsReproducing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACh_TypeOne), &Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	void Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((ACh_TypeOne*)Obj)->bIsAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACh_TypeOne), &Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	void Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood_SetBit(void* Obj)
	{
		((ACh_TypeOne*)Obj)->bNeedsFood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood = { "bNeedsFood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACh_TypeOne), &Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	void Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce_SetBit(void* Obj)
	{
		((ACh_TypeOne*)Obj)->bCanReproduce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce = { "bCanReproduce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACh_TypeOne), &Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Parent), Z_Construct_UClass_ACh_TypeOne_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentMate_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentMate = { "CurrentMate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, CurrentMate), Z_Construct_UClass_ACh_TypeOne_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentMate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentMate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene = { "ChangedGene", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, ChangedGene), Z_Construct_UEnum_NaturalSelection_EGenes, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge = { "SpawnAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, SpawnAge), Z_Construct_UEnum_NaturalSelection_EAge, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Type), Z_Construct_UEnum_NaturalSelection_EAIType, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GrowingAge_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GrowingAge = { "GrowingAge", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, GrowingAge), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GrowingAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GrowingAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GestationPeriod_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GestationPeriod = { "GestationPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, GestationPeriod), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GestationPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GestationPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MutationPercentage_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MutationPercentage = { "MutationPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, MutationPercentage), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MutationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MutationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentSize_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentSize = { "CurrentSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, CurrentSize), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_currentSpeed_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, currentSpeed), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_currentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_currentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxAge_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, MaxAge), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_OffSpringChance_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "Comment", "//KG\n" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
		{ "ToolTip", "KG" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_OffSpringChance = { "OffSpringChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, OffSpringChance), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_OffSpringChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_OffSpringChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Mass), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "Comment", "// in Joules //default  600000000\n" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
		{ "ToolTip", "in Joules default  600000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Energy), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "Comment", "//Cm/s\n" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
		{ "ToolTip", "Cm/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_BabiesBP_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_BabiesBP = { "BabiesBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, BabiesBP), Z_Construct_UClass_ACh_TypeOne_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_BabiesBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_BabiesBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GameControllerRef_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GameControllerRef = { "GameControllerRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, GameControllerRef), Z_Construct_UClass_AGameControllerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GameControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GameControllerRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACh_TypeOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsReproducing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bNeedsFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bCanReproduce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentMate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_ChangedGene_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_SpawnAge_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GrowingAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GestationPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MutationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_CurrentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_currentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_OffSpringChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_BabiesBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_GameControllerRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACh_TypeOne_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACh_TypeOne>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACh_TypeOne_Statics::ClassParams = {
		&ACh_TypeOne::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACh_TypeOne_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACh_TypeOne()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACh_TypeOne_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACh_TypeOne, 2341372395);
	template<> NATURALSELECTION_API UClass* StaticClass<ACh_TypeOne>()
	{
		return ACh_TypeOne::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACh_TypeOne(Z_Construct_UClass_ACh_TypeOne, &ACh_TypeOne::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("ACh_TypeOne"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACh_TypeOne);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
