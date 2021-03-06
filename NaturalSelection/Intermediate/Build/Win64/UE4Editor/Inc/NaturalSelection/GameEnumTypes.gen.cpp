// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaturalSelection/GameEnumTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEnumTypes() {}
// Cross Module References
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EGenes();
	UPackage* Z_Construct_UPackage__Script_NaturalSelection();
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EAge();
	NATURALSELECTION_API UEnum* Z_Construct_UEnum_NaturalSelection_EAIType();
	NATURALSELECTION_API UScriptStruct* Z_Construct_UScriptStruct_FAIStats();
// End Cross Module References
	static UEnum* EGenes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NaturalSelection_EGenes, Z_Construct_UPackage__Script_NaturalSelection(), TEXT("EGenes"));
		}
		return Singleton;
	}
	template<> NATURALSELECTION_API UEnum* StaticEnum<EGenes>()
	{
		return EGenes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenes(EGenes_StaticEnum, TEXT("/Script/NaturalSelection"), TEXT("EGenes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NaturalSelection_EGenes_Hash() { return 3620976072U; }
	UEnum* Z_Construct_UEnum_NaturalSelection_EGenes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NaturalSelection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenes"), 0, Get_Z_Construct_UEnum_NaturalSelection_EGenes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenes::None", (int64)EGenes::None },
				{ "EGenes::Age", (int64)EGenes::Age },
				{ "EGenes::Energy", (int64)EGenes::Energy },
				{ "EGenes::Speed", (int64)EGenes::Speed },
				{ "EGenes::Size", (int64)EGenes::Size },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Age.Name", "EGenes::Age" },
				{ "BlueprintType", "true" },
				{ "Energy.Name", "EGenes::Energy" },
				{ "ModuleRelativePath", "GameEnumTypes.h" },
				{ "None.Name", "EGenes::None" },
				{ "Size.Name", "EGenes::Size" },
				{ "Speed.Name", "EGenes::Speed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NaturalSelection,
				nullptr,
				"EGenes",
				"EGenes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAge_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NaturalSelection_EAge, Z_Construct_UPackage__Script_NaturalSelection(), TEXT("EAge"));
		}
		return Singleton;
	}
	template<> NATURALSELECTION_API UEnum* StaticEnum<EAge>()
	{
		return EAge_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAge(EAge_StaticEnum, TEXT("/Script/NaturalSelection"), TEXT("EAge"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NaturalSelection_EAge_Hash() { return 1703465679U; }
	UEnum* Z_Construct_UEnum_NaturalSelection_EAge()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NaturalSelection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAge"), 0, Get_Z_Construct_UEnum_NaturalSelection_EAge_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAge::Baby", (int64)EAge::Baby },
				{ "EAge::Adolescent", (int64)EAge::Adolescent },
				{ "EAge::OldAge", (int64)EAge::OldAge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Adolescent.Name", "EAge::Adolescent" },
				{ "Baby.Name", "EAge::Baby" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameEnumTypes.h" },
				{ "OldAge.Name", "EAge::OldAge" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NaturalSelection,
				nullptr,
				"EAge",
				"EAge",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAIType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NaturalSelection_EAIType, Z_Construct_UPackage__Script_NaturalSelection(), TEXT("EAIType"));
		}
		return Singleton;
	}
	template<> NATURALSELECTION_API UEnum* StaticEnum<EAIType>()
	{
		return EAIType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIType(EAIType_StaticEnum, TEXT("/Script/NaturalSelection"), TEXT("EAIType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NaturalSelection_EAIType_Hash() { return 3626012127U; }
	UEnum* Z_Construct_UEnum_NaturalSelection_EAIType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NaturalSelection();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIType"), 0, Get_Z_Construct_UEnum_NaturalSelection_EAIType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIType::Male", (int64)EAIType::Male },
				{ "EAIType::Female", (int64)EAIType::Female },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Female.Name", "EAIType::Female" },
				{ "Male.Name", "EAIType::Male" },
				{ "ModuleRelativePath", "GameEnumTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NaturalSelection,
				nullptr,
				"EAIType",
				"EAIType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAIStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NATURALSELECTION_API uint32 Get_Z_Construct_UScriptStruct_FAIStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIStats, Z_Construct_UPackage__Script_NaturalSelection(), TEXT("AIStats"), sizeof(FAIStats), Get_Z_Construct_UScriptStruct_FAIStats_Hash());
	}
	return Singleton;
}
template<> NATURALSELECTION_API UScriptStruct* StaticStruct<FAIStats>()
{
	return FAIStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIStats(FAIStats::StaticStruct, TEXT("/Script/NaturalSelection"), TEXT("AIStats"), false, nullptr, nullptr);
static struct FScriptStruct_NaturalSelection_StaticRegisterNativesFAIStats
{
	FScriptStruct_NaturalSelection_StaticRegisterNativesFAIStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIStats")),new UScriptStruct::TCppStructOps<FAIStats>);
	}
} ScriptStruct_NaturalSelection_StaticRegisterNativesFAIStats;
	struct Z_Construct_UScriptStruct_FAIStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameEnumTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIStats>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NaturalSelection,
		nullptr,
		&NewStructOps,
		"AIStats",
		sizeof(FAIStats),
		alignof(FAIStats),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NaturalSelection();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIStats"), sizeof(FAIStats), Get_Z_Construct_UScriptStruct_FAIStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIStats_Hash() { return 906153800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
