// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/FoodTypes/Food_type1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood_type1() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFood_type1_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFood_type1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AFoodSpawnerActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFood_type1::execDestoryThis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestoryThis();
		P_NATIVE_END;
	}
	void AFood_type1::StaticRegisterNativesAFood_type1()
	{
		UClass* Class = AFood_type1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestoryThis", &AFood_type1::execDestoryThis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFood_type1_DestoryThis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_type1_DestoryThis_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Game play methods.\n" },
		{ "ModuleRelativePath", "FoodTypes/Food_type1.h" },
		{ "ToolTip", "Game play methods." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_type1_DestoryThis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood_type1, nullptr, "DestoryThis", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_type1_DestoryThis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_type1_DestoryThis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_type1_DestoryThis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_type1_DestoryThis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFood_type1_NoRegister()
	{
		return AFood_type1::StaticClass();
	}
	struct Z_Construct_UClass_AFood_type1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodControllerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodControllerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Energy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_type1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFood_type1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFood_type1_DestoryThis, "DestoryThis" }, // 1365785882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_type1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodTypes/Food_type1.h" },
		{ "ModuleRelativePath", "FoodTypes/Food_type1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_type1_Statics::NewProp_FoodControllerRef_MetaData[] = {
		{ "Category", "Food_type1" },
		{ "ModuleRelativePath", "FoodTypes/Food_type1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_type1_Statics::NewProp_FoodControllerRef = { "FoodControllerRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_type1, FoodControllerRef), Z_Construct_UClass_AFoodSpawnerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_type1_Statics::NewProp_FoodControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_type1_Statics::NewProp_FoodControllerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_type1_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "Food_type1" },
		{ "Comment", "// Game play Variables.\n" },
		{ "ModuleRelativePath", "FoodTypes/Food_type1.h" },
		{ "ToolTip", "Game play Variables." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFood_type1_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_type1, Energy), METADATA_PARAMS(Z_Construct_UClass_AFood_type1_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_type1_Statics::NewProp_Energy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFood_type1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_type1_Statics::NewProp_FoodControllerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_type1_Statics::NewProp_Energy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_type1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood_type1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_type1_Statics::ClassParams = {
		&AFood_type1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFood_type1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFood_type1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFood_type1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_type1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFood_type1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFood_type1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFood_type1, 248426030);
	template<> NATURALSELECTION_API UClass* StaticClass<AFood_type1>()
	{
		return AFood_type1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFood_type1(Z_Construct_UClass_AFood_type1, &AFood_type1::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("AFood_type1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood_type1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
