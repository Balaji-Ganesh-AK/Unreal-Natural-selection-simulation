// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/CharacterTypes/Ch_Type1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCh_Type1() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_ACh_Type1_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_ACh_Type1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
// End Cross Module References
	void ACh_Type1::StaticRegisterNativesACh_Type1()
	{
	}
	UClass* Z_Construct_UClass_ACh_Type1_NoRegister()
	{
		return ACh_Type1::StaticClass();
	}
	struct Z_Construct_UClass_ACh_Type1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACh_Type1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACh_Type1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterTypes/Ch_Type1.h" },
		{ "ModuleRelativePath", "CharacterTypes/Ch_Type1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACh_Type1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACh_Type1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACh_Type1_Statics::ClassParams = {
		&ACh_Type1::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ACh_Type1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACh_Type1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACh_Type1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACh_Type1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACh_Type1, 3678538943);
	template<> NATURALSELECTION_API UClass* StaticClass<ACh_Type1>()
	{
		return ACh_Type1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACh_Type1(Z_Construct_UClass_ACh_Type1, &ACh_Type1::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("ACh_Type1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACh_Type1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
