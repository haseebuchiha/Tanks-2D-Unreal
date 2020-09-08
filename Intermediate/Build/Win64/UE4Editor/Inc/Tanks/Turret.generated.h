// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TANKS_Turret_generated_h

#define Tanks_Source_Tanks_Turret_h_12_RPC_WRAPPERS
#define Tanks_Source_Tanks_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_Turret_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define Tanks_Source_Tanks_Turret_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define Tanks_Source_Tanks_Turret_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define Tanks_Source_Tanks_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define Tanks_Source_Tanks_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TurretDirection() { return STRUCT_OFFSET(ATurret, TurretDirection); } \
	FORCEINLINE static uint32 __PPO__TurretSprite() { return STRUCT_OFFSET(ATurret, TurretSprite); } \
	FORCEINLINE static uint32 __PPO__Projectile() { return STRUCT_OFFSET(ATurret, Projectile); } \
	FORCEINLINE static uint32 __PPO__YawSpeed() { return STRUCT_OFFSET(ATurret, YawSpeed); } \
	FORCEINLINE static uint32 __PPO__Tank() { return STRUCT_OFFSET(ATurret, Tank); } \
	FORCEINLINE static uint32 __PPO__Fire1CoolDown() { return STRUCT_OFFSET(ATurret, Fire1CoolDown); } \
	FORCEINLINE static uint32 __PPO__Fire1ReadyTime() { return STRUCT_OFFSET(ATurret, Fire1ReadyTime); }


#define Tanks_Source_Tanks_Turret_h_9_PROLOG
#define Tanks_Source_Tanks_Turret_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Turret_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_Turret_h_12_INCLASS \
	Tanks_Source_Tanks_Turret_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_Turret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Turret_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
