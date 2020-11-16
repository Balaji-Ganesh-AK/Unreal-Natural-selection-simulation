// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIStats;
class ACh_TypeOne;
#ifdef NATURALSELECTION_Ch_TypeOne_generated_h
#error "Ch_TypeOne.generated.h already included, missing '#pragma once' in Ch_TypeOne.h"
#endif
#define NATURALSELECTION_Ch_TypeOne_generated_h

#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_SPARSE_DATA
#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetReproduce); \
	DECLARE_FUNCTION(execReproduce); \
	DECLARE_FUNCTION(execCheckIfNeedsFood); \
	DECLARE_FUNCTION(execGetAge); \
	DECLARE_FUNCTION(execCanReproduce); \
	DECLARE_FUNCTION(execCheckIfAlive); \
	DECLARE_FUNCTION(execGetIsGrowing); \
	DECLARE_FUNCTION(execGetCanMove); \
	DECLARE_FUNCTION(execAddEnergy); \
	DECLARE_FUNCTION(execCalculateEnergyConsumed); \
	DECLARE_FUNCTION(execSetStats); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execGrow); \
	DECLARE_FUNCTION(execCalculateStatsBasedOnAge);


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetReproduce); \
	DECLARE_FUNCTION(execReproduce); \
	DECLARE_FUNCTION(execCheckIfNeedsFood); \
	DECLARE_FUNCTION(execGetAge); \
	DECLARE_FUNCTION(execCanReproduce); \
	DECLARE_FUNCTION(execCheckIfAlive); \
	DECLARE_FUNCTION(execGetIsGrowing); \
	DECLARE_FUNCTION(execGetCanMove); \
	DECLARE_FUNCTION(execAddEnergy); \
	DECLARE_FUNCTION(execCalculateEnergyConsumed); \
	DECLARE_FUNCTION(execSetStats); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execGrow); \
	DECLARE_FUNCTION(execCalculateStatsBasedOnAge);


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_EVENT_PARMS \
	struct Ch_TypeOne_eventSpawnBabies_Parms \
	{ \
		ACh_TypeOne* ParentRef; \
	};


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_CALLBACK_WRAPPERS
#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACh_TypeOne(); \
	friend struct Z_Construct_UClass_ACh_TypeOne_Statics; \
public: \
	DECLARE_CLASS(ACh_TypeOne, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaturalSelection"), NO_API) \
	DECLARE_SERIALIZER(ACh_TypeOne)


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACh_TypeOne(); \
	friend struct Z_Construct_UClass_ACh_TypeOne_Statics; \
public: \
	DECLARE_CLASS(ACh_TypeOne, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaturalSelection"), NO_API) \
	DECLARE_SERIALIZER(ACh_TypeOne)


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACh_TypeOne(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACh_TypeOne) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACh_TypeOne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACh_TypeOne); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACh_TypeOne(ACh_TypeOne&&); \
	NO_API ACh_TypeOne(const ACh_TypeOne&); \
public:


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACh_TypeOne(ACh_TypeOne&&); \
	NO_API ACh_TypeOne(const ACh_TypeOne&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACh_TypeOne); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACh_TypeOne); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACh_TypeOne)


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_PRIVATE_PROPERTY_OFFSET
#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_17_PROLOG \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_EVENT_PARMS


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_PRIVATE_PROPERTY_OFFSET \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_SPARSE_DATA \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_RPC_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_CALLBACK_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_INCLASS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_PRIVATE_PROPERTY_OFFSET \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_SPARSE_DATA \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_CALLBACK_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_INCLASS_NO_PURE_DECLS \
	NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATURALSELECTION_API UClass* StaticClass<class ACh_TypeOne>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaturalSelection_Source_NaturalSelection_CharacterTypes_Ch_TypeOne_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
