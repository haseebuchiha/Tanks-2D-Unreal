// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATankPawn;
class AActor;
enum class EDamageType : uint8;
struct FVector;
#ifdef TANKS_Zombies_generated_h
#error "Zombies.generated.h already included, missing '#pragma once' in Zombies.h"
#endif
#define TANKS_Zombies_generated_h

#define Tanks_Source_Tanks_Enemies_Zombies_h_12_RPC_WRAPPERS \
	virtual bool ZombieAIShouldAttack_Implementation(); \
	virtual void ZombieAI_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execConsumeAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ConsumeAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeRotationInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ConsumeRotationInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRotationInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRotationInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaYawDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRotationInput(Z_Param_DeltaYawDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZombieAIShouldAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ZombieAIShouldAttack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZombieAI) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZombieAI_Implementation(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetAsTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATankPawn**)Z_Param__Result=P_THIS->GetTargetAsTank(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTarget(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConsumeAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ConsumeAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAttackInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeRotationInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->ConsumeRotationInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRotationInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddRotationInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaYawDegrees); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddRotationInput(Z_Param_DeltaYawDegrees); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZombieAIShouldAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ZombieAIShouldAttack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execZombieAI) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ZombieAI_Implementation(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetAsTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATankPawn**)Z_Param__Result=P_THIS->GetTargetAsTank(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTarget) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_NewTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTarget(Z_Param_NewTarget); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_EVENT_PARMS \
	struct Zombies_eventZombieAI_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct Zombies_eventZombieAIShouldAttack_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Zombies_eventZombieAIShouldAttack_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Zombies_eventZombieAttack_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct Zombies_eventZombieDie_Parms \
	{ \
		EDamageType DamageType; \
	}; \
	struct Zombies_eventZombieWalk_Parms \
	{ \
		float DeltaSeconds; \
		FVector DistanceWalkedThisFrame; \
	};


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_CALLBACK_WRAPPERS
#define Tanks_Source_Tanks_Enemies_Zombies_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombies(); \
	friend struct Z_Construct_UClass_AZombies_Statics; \
public: \
	DECLARE_CLASS(AZombies, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AZombies) \
	virtual UObject* _getUObject() const override { return const_cast<AZombies*>(this); }


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombies(); \
	friend struct Z_Construct_UClass_AZombies_Statics; \
public: \
	DECLARE_CLASS(AZombies, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AZombies) \
	virtual UObject* _getUObject() const override { return const_cast<AZombies*>(this); }


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombies(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombies) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombies); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombies(AZombies&&); \
	NO_API AZombies(const AZombies&); \
public:


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombies(AZombies&&); \
	NO_API AZombies(const AZombies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombies); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombies)


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitShake() { return STRUCT_OFFSET(AZombies, HitShake); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AZombies, Health); } \
	FORCEINLINE static uint32 __PPO__SightDistance() { return STRUCT_OFFSET(AZombies, SightDistance); } \
	FORCEINLINE static uint32 __PPO__SightAngle() { return STRUCT_OFFSET(AZombies, SightAngle); } \
	FORCEINLINE static uint32 __PPO__YawSpeed() { return STRUCT_OFFSET(AZombies, YawSpeed); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AZombies, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(AZombies, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__AttackDistance() { return STRUCT_OFFSET(AZombies, AttackDistance); } \
	FORCEINLINE static uint32 __PPO__AttackCooldown() { return STRUCT_OFFSET(AZombies, AttackCooldown); } \
	FORCEINLINE static uint32 __PPO__AttackAvailableTime() { return STRUCT_OFFSET(AZombies, AttackAvailableTime); } \
	FORCEINLINE static uint32 __PPO__AttackAngle() { return STRUCT_OFFSET(AZombies, AttackAngle); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(AZombies, TargetActor); } \
	FORCEINLINE static uint32 __PPO__TargetTank() { return STRUCT_OFFSET(AZombies, TargetTank); }


#define Tanks_Source_Tanks_Enemies_Zombies_h_9_PROLOG \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_EVENT_PARMS


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_INCLASS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_Enemies_Zombies_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Enemies_Zombies_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_Enemies_Zombies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
