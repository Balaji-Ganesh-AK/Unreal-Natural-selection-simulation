// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/AISpawnControllerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnControllerActor() {}
// Cross Module References
	NATURALSELECTION_API UClass* Z_Construct_UClass_AAISpawnControllerActor_NoRegister();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AAISpawnControllerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
	NATURALSELECTION_API UClass* Z_Construct_UClass_AGameControllerActor_NoRegister();
// End Cross Module References
	static FName NAME_AAISpawnControllerActor_SpawnCharacter = FName(TEXT("SpawnCharacter"));
	void AAISpawnControllerActor::SpawnCharacter(int32 count, AGameControllerActor* ControllerRef)
	{
		AISpawnControllerActor_eventSpawnCharacter_Parms Parms;
		Parms.count=count;
		Parms.ControllerRef=ControllerRef;
		ProcessEvent(FindFunctionChecked(NAME_AAISpawnControllerActor_SpawnCharacter),&Parms);
	}
	void AAISpawnControllerActor::StaticRegisterNativesAAISpawnControllerActor()
	{
	}
	struct Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnControllerActor_eventSpawnCharacter_Parms, ControllerRef), Z_Construct_UClass_AGameControllerActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnControllerActor_eventSpawnCharacter_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::NewProp_ControllerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Game play functions\n" },
		{ "ModuleRelativePath", "AISpawnControllerActor.h" },
		{ "ToolTip", "Game play functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawnControllerActor, nullptr, "SpawnCharacter", nullptr, nullptr, sizeof(AISpawnControllerActor_eventSpawnCharacter_Parms), Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAISpawnControllerActor_NoRegister()
	{
		return AAISpawnControllerActor::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawnControllerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawnControllerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAISpawnControllerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAISpawnControllerActor_SpawnCharacter, "SpawnCharacter" }, // 1262891190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnControllerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISpawnControllerActor.h" },
		{ "ModuleRelativePath", "AISpawnControllerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnControllerActor_Statics::NewProp_CharacterCount_MetaData[] = {
		{ "Category", "AISpawnControllerActor" },
		{ "Comment", "//Game play variables.\n" },
		{ "ModuleRelativePath", "AISpawnControllerActor.h" },
		{ "ToolTip", "Game play variables." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAISpawnControllerActor_Statics::NewProp_CharacterCount = { "CharacterCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnControllerActor, CharacterCount), METADATA_PARAMS(Z_Construct_UClass_AAISpawnControllerActor_Statics::NewProp_CharacterCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnControllerActor_Statics::NewProp_CharacterCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawnControllerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnControllerActor_Statics::NewProp_CharacterCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawnControllerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawnControllerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAISpawnControllerActor_Statics::ClassParams = {
		&AAISpawnControllerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAISpawnControllerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnControllerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAISpawnControllerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnControllerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISpawnControllerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAISpawnControllerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAISpawnControllerActor, 4223957701);
	template<> NATURALSELECTION_API UClass* StaticClass<AAISpawnControllerActor>()
	{
		return AAISpawnControllerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAISpawnControllerActor(Z_Construct_UClass_AAISpawnControllerActor, &AAISpawnControllerActor::StaticClass, TEXT("/Script/NaturalSelection"), TEXT("AAISpawnControllerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawnControllerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
