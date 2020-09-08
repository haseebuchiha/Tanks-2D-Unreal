// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define TANKS_Spawner_generated_h

#define Tanks_Source_Tanks_Spawner_h_12_RPC_WRAPPERS
#define Tanks_Source_Tanks_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_Spawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define Tanks_Source_Tanks_Spawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define Tanks_Source_Tanks_Spawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public:


#define Tanks_Source_Tanks_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner)


#define Tanks_Source_Tanks_Spawner_h_12_PRIVATE_PROPERTY_OFFSET
#define Tanks_Source_Tanks_Spawner_h_9_PROLOG
#define Tanks_Source_Tanks_Spawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Spawner_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_Spawner_h_12_INCLASS \
	Tanks_Source_Tanks_Spawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_Spawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Spawner_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
