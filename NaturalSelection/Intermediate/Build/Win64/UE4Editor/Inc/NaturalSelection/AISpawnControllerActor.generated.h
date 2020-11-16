// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameControllerActor;
#ifdef NATURALSELECTION_AISpawnControllerActor_generated_h
#error "AISpawnControllerActor.generated.h already included, missing '#pragma once' in AISpawnControllerActor.h"
#endif
#define NATURALSELECTION_AISpawnControllerActor_generated_h

#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_SPARSE_DATA
#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_RPC_WRAPPERS
#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_EVENT_PARMS \
	struct AISpawnControllerActor_eventSpawnCharacter_Parms \
	{ \
		int32 count; \
		AGameControllerActor* ControllerRef; \
	};


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_CALLBACK_WRAPPERS
#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAISpawnControllerActor(); \
	friend struct Z_Construct_UClass_AAISpawnControllerActor_Statics; \
public: \
	DECLARE_CLASS(AAISpawnControllerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaturalSelection"), NO_API) \
	DECLARE_SERIALIZER(AAISpawnControllerActor)


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAISpawnControllerActor(); \
	friend struct Z_Construct_UClass_AAISpawnControllerActor_Statics; \
public: \
	DECLARE_CLASS(AAISpawnControllerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaturalSelection"), NO_API) \
	DECLARE_SERIALIZER(AAISpawnControllerActor)


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAISpawnControllerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAISpawnControllerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAISpawnControllerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAISpawnControllerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAISpawnControllerActor(AAISpawnControllerActor&&); \
	NO_API AAISpawnControllerActor(const AAISpawnControllerActor&); \
public:


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAISpawnControllerActor(AAISpawnControllerActor&&); \
	NO_API AAISpawnControllerActor(const AAISpawnControllerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAISpawnControllerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAISpawnControllerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAISpawnControllerActor)


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_PRIVATE_PROPERTY_OFFSET
#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_10_PROLOG \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_EVENT_PARMS


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_SPARSE_DATA \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_RPC_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_CALLBACK_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_INCLASS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_SPARSE_DATA \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_CALLBACK_WRAPPERS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_INCLASS_NO_PURE_DECLS \
	NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATURALSELECTION_API UClass* StaticClass<class AAISpawnControllerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaturalSelection_Source_NaturalSelection_AISpawnControllerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
