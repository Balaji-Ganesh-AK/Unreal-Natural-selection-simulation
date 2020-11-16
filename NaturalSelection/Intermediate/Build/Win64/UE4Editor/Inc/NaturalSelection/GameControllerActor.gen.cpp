// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/GameControllerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameControllerActor() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_AGameControllerActor_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AGameControllerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AAISpawnControllerActor_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFoodSpawnerActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameControllerActor::execStartSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSimulation();
		P_NATIVE_END;
	}
	void AGameControllerActor::StaticRegisterNativesAGameControllerActor()
	{
		UClass* Class = AGameControllerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSimulation", &AGameControllerActor::execStartSimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Game play methods\n" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
		{ "ToolTip", "Game play methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameControllerActor, nullptr, "StartSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameControllerActor_StartSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameControllerActor_StartSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameControllerActor_NoRegister()
	{
		return AGameControllerActor::StaticClass();
	}
	struct Z_Construct_UClass_AGameControllerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialFoodCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialFoodCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAICount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialAICount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISpawnRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodSpawnRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodSpawnRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameControllerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameControllerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameControllerActor_StartSimulation, "StartSimulation" }, // 1190733297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControllerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameControllerActor.h" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialFoodCount_MetaData[] = {
		{ "Category", "Game settings" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialFoodCount = { "InitialFoodCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameControllerActor, InitialFoodCount), METADATA_PARAMS(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialFoodCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialFoodCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialAICount_MetaData[] = {
		{ "Category", "Game settings" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialAICount = { "InitialAICount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameControllerActor, InitialAICount), METADATA_PARAMS(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialAICount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialAICount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControllerActor_Statics::NewProp_AISpawnRef_MetaData[] = {
		{ "Category", "Spawners" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameControllerActor_Statics::NewProp_AISpawnRef = { "AISpawnRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameControllerActor, AISpawnRef), Z_Construct_UClass_AAISpawnControllerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_AISpawnRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_AISpawnRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameControllerActor_Statics::NewProp_FoodSpawnRef_MetaData[] = {
		{ "Category", "Spawners" },
		{ "ModuleRelativePath", "GameControllerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameControllerActor_Statics::NewProp_FoodSpawnRef = { "FoodSpawnRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameControllerActor, FoodSpawnRef), Z_Construct_UClass_AFoodSpawnerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_FoodSpawnRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::NewProp_FoodSpawnRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameControllerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialFoodCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameControllerActor_Statics::NewProp_InitialAICount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameControllerActor_Statics::NewProp_AISpawnRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameControllerActor_Statics::NewProp_FoodSpawnRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameControllerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameControllerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameControllerActor_Statics::ClassParams = {
		&AGameControllerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameControllerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameControllerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameControllerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameControllerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameControllerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameControllerActor, 1552805852);
	template<> NATURALSELECTION_API UClass* StaticClass<AGameControllerActor>()
	{
		return AGameControllerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameControllerActor(Z_Construct_UClass_AGameControllerActor, &AGameControllerActor::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("AGameControllerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameControllerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
