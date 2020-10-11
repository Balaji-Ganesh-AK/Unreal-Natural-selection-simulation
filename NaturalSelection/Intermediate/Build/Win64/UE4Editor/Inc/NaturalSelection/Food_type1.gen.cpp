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
// End Cross Module References
	void AFood_type1::StaticRegisterNativesAFood_type1()
	{
	}
	UClass* Z_Construct_UClass_AFood_type1_NoRegister()
	{
		return AFood_type1::StaticClass();
	}
	struct Z_Construct_UClass_AFood_type1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_type1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_type1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodTypes/Food_type1.h" },
		{ "ModuleRelativePath", "FoodTypes/Food_type1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_type1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood_type1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_type1_Statics::ClassParams = {
		&AFood_type1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AFood_type1, 97755377);
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
