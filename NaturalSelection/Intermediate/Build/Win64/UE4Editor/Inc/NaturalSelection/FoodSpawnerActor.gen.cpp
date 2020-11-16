// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/FoodSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodSpawnerActor() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFoodSpawnerActor_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFoodSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
// End Cross Module References
	static FName NAME_AFoodSpawnerActor_GenerateFoodFirstTime = FName(TEXT("GenerateFoodFirstTime"));
	void AFoodSpawnerActor::GenerateFoodFirstTime(int32 count)
	{
		FoodSpawnerActor_eventGenerateFoodFirstTime_Parms Parms;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_AFoodSpawnerActor_GenerateFoodFirstTime),&Parms);
	}
	void AFoodSpawnerActor::StaticRegisterNativesAFoodSpawnerActor()
	{
	}
	struct Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoodSpawnerActor_eventGenerateFoodFirstTime_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "FoodSpawnerActor.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFoodSpawnerActor, nullptr, "GenerateFoodFirstTime", nullptr, nullptr, sizeof(FoodSpawnerActor_eventGenerateFoodFirstTime_Parms), Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFoodSpawnerActor_NoRegister()
	{
		return AFoodSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AFoodSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFoodCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentFoodCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxFood;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFoodSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFoodSpawnerActor_GenerateFoodFirstTime, "GenerateFoodFirstTime" }, // 1438099805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodSpawnerActor.h" },
		{ "ModuleRelativePath", "FoodSpawnerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_CurrentFoodCount_MetaData[] = {
		{ "Category", "FoodSpawnerActor" },
		{ "ModuleRelativePath", "FoodSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_CurrentFoodCount = { "CurrentFoodCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawnerActor, CurrentFoodCount), METADATA_PARAMS(Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_CurrentFoodCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_CurrentFoodCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_MaxFood_MetaData[] = {
		{ "Category", "FoodSpawnerActor" },
		{ "ModuleRelativePath", "FoodSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_MaxFood = { "MaxFood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodSpawnerActor, MaxFood), METADATA_PARAMS(Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_MaxFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_MaxFood_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_CurrentFoodCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodSpawnerActor_Statics::NewProp_MaxFood,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodSpawnerActor_Statics::ClassParams = {
		&AFoodSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFoodSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodSpawnerActor, 3959078525);
	template<> NATURALSELECTION_API UClass* StaticClass<AFoodSpawnerActor>()
	{
		return AFoodSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodSpawnerActor(Z_Construct_UClass_AFoodSpawnerActor, &AFoodSpawnerActor::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("AFoodSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
