// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_ZombieBrains_generated_h
#error "ZombieBrains.generated.h already included, missing '#pragma once' in ZombieBrains.h"
#endif
#define TANKS_ZombieBrains_generated_h

#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_RPC_WRAPPERS
#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieBrains(); \
	friend struct Z_Construct_UClass_AZombieBrains_Statics; \
public: \
	DECLARE_CLASS(AZombieBrains, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AZombieBrains)


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAZombieBrains(); \
	friend struct Z_Construct_UClass_AZombieBrains_Statics; \
public: \
	DECLARE_CLASS(AZombieBrains, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AZombieBrains)


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieBrains(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieBrains) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieBrains); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieBrains); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieBrains(AZombieBrains&&); \
	NO_API AZombieBrains(const AZombieBrains&); \
public:


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieBrains(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieBrains(AZombieBrains&&); \
	NO_API AZombieBrains(const AZombieBrains&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieBrains); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieBrains); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieBrains)


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnAsZombie() { return STRUCT_OFFSET(AZombieBrains, PawnAsZombie); }


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_12_PROLOG
#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_RPC_WRAPPERS \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_INCLASS \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Enemies_ZombieBrains_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_Enemies_ZombieBrains_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
