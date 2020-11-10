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
// End Cross Module References
	DEFINE_FUNCTION(ACh_TypeOne::execGetCanMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACh_TypeOne::execCalculateEnergyConsumed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateEnergyConsumed();
		P_NATIVE_END;
	}
	void ACh_TypeOne::StaticRegisterNativesACh_TypeOne()
	{
		UClass* Class = ACh_TypeOne::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateEnergyConsumed", &ACh_TypeOne::execCalculateEnergyConsumed },
			{ "GetCanMove", &ACh_TypeOne::execGetCanMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACh_TypeOne, nullptr, "CalculateEnergyConsumed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGameOver_MetaData[];
#endif
		static void NewProp_bIsGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGameOver;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACh_TypeOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACh_TypeOne_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACh_TypeOne_CalculateEnergyConsumed, "CalculateEnergyConsumed" }, // 3931332244
		{ &Z_Construct_UFunction_ACh_TypeOne_GetCanMove, "GetCanMove" }, // 491100721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterTypes/Ch_TypeOne.h" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver_MetaData[] = {
		{ "Category", "Ch_TypeOne" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	void Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver_SetBit(void* Obj)
	{
		((ACh_TypeOne*)Obj)->bIsGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver = { "bIsGameOver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACh_TypeOne), &Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Ch_TypeOne" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Mass), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Ch_TypeOne" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Energy), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Ch_TypeOne" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Ch_TypeOne" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_TypeOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACh_TypeOne, Speed), METADATA_PARAMS(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACh_TypeOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_bIsGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Energy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACh_TypeOne_Statics::NewProp_Speed,
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
	IMPLEMENT_CLASS(ACh_TypeOne, 251361992);
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
