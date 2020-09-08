// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDamageType : uint8;
#ifdef TANKS_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define TANKS_TankPawn_generated_h

#define Tanks_Source_Tanks_TankPawn_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTankInput_Statics; \
	TANKS_API static class UScriptStruct* StaticStruct();


#define Tanks_Source_Tanks_TankPawn_h_41_RPC_WRAPPERS \
	virtual void TankDie_Implementation(EDamageType DamageType); \
 \
	DECLARE_FUNCTION(execTankDie) \
	{ \
		P_GET_ENUM(EDamageType,Z_Param_DamageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TankDie_Implementation(EDamageType(Z_Param_DamageType)); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_TankPawn_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTankDie) \
	{ \
		P_GET_ENUM(EDamageType,Z_Param_DamageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TankDie_Implementation(EDamageType(Z_Param_DamageType)); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_TankPawn_h_41_EVENT_PARMS \
	struct TankPawn_eventTankDie_Parms \
	{ \
		EDamageType DamageType; \
	};


#define Tanks_Source_Tanks_TankPawn_h_41_CALLBACK_WRAPPERS
#define Tanks_Source_Tanks_TankPawn_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATankPawn*>(this); }


#define Tanks_Source_Tanks_TankPawn_h_41_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATankPawn*>(this); }


#define Tanks_Source_Tanks_TankPawn_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define Tanks_Source_Tanks_TankPawn_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define Tanks_Source_Tanks_TankPawn_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankDirection() { return STRUCT_OFFSET(ATankPawn, TankDirection); } \
	FORCEINLINE static uint32 __PPO__TankBody() { return STRUCT_OFFSET(ATankPawn, TankBody); } \
	FORCEINLINE static uint32 __PPO__TankSprite() { return STRUCT_OFFSET(ATankPawn, TankSprite); } \
	FORCEINLINE static uint32 __PPO__ChildTurret() { return STRUCT_OFFSET(ATankPawn, ChildTurret); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ATankPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__TankInput() { return STRUCT_OFFSET(ATankPawn, TankInput); } \
	FORCEINLINE static uint32 __PPO__YawSpeed() { return STRUCT_OFFSET(ATankPawn, YawSpeed); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ATankPawn, Health); } \
	FORCEINLINE static uint32 __PPO__CrushCollisionProfile() { return STRUCT_OFFSET(ATankPawn, CrushCollisionProfile); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(ATankPawn, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__MoveAccel() { return STRUCT_OFFSET(ATankPawn, MoveAccel); }


#define Tanks_Source_Tanks_TankPawn_h_38_PROLOG \
	Tanks_Source_Tanks_TankPawn_h_41_EVENT_PARMS


#define Tanks_Source_Tanks_TankPawn_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TankPawn_h_41_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TankPawn_h_41_RPC_WRAPPERS \
	Tanks_Source_Tanks_TankPawn_h_41_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_TankPawn_h_41_INCLASS \
	Tanks_Source_Tanks_TankPawn_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_TankPawn_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TankPawn_h_41_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TankPawn_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TankPawn_h_41_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_TankPawn_h_41_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TankPawn_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
