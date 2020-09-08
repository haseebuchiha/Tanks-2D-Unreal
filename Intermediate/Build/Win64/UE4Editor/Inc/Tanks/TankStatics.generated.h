// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class ATankGameMode;
struct FVector2D;
#ifdef TANKS_TankStatics_generated_h
#error "TankStatics.generated.h already included, missing '#pragma once' in TankStatics.h"
#endif
#define TANKS_TankStatics_generated_h

#define Tanks_Source_Tanks_TankStatics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutInZPlane) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTankStatics::PutInZPlane(Z_Param_ActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTanksGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATankGameMode**)Z_Param__Result=UTankStatics::GetTanksGameMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLookAtAngle2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Target); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTankStatics::FindLookAtAngle2D(Z_Param_Out_Start,Z_Param_Out_Target,Z_Param_Out_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDeltaAngleDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A1); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTankStatics::FindDeltaAngleDegrees(Z_Param_A1,Z_Param_A2); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_TankStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutInZPlane) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTankStatics::PutInZPlane(Z_Param_ActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTanksGameMode) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATankGameMode**)Z_Param__Result=UTankStatics::GetTanksGameMode(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindLookAtAngle2D) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Start); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Target); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UTankStatics::FindLookAtAngle2D(Z_Param_Out_Start,Z_Param_Out_Target,Z_Param_Out_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindDeltaAngleDegrees) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A1); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_A2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UTankStatics::FindDeltaAngleDegrees(Z_Param_A1,Z_Param_A2); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_TankStatics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankStatics(); \
	friend struct Z_Construct_UClass_UTankStatics_Statics; \
public: \
	DECLARE_CLASS(UTankStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UTankStatics)


#define Tanks_Source_Tanks_TankStatics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankStatics(); \
	friend struct Z_Construct_UClass_UTankStatics_Statics; \
public: \
	DECLARE_CLASS(UTankStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UTankStatics)


#define Tanks_Source_Tanks_TankStatics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankStatics(UTankStatics&&); \
	NO_API UTankStatics(const UTankStatics&); \
public:


#define Tanks_Source_Tanks_TankStatics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankStatics(UTankStatics&&); \
	NO_API UTankStatics(const UTankStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankStatics)


#define Tanks_Source_Tanks_TankStatics_h_15_PRIVATE_PROPERTY_OFFSET
#define Tanks_Source_Tanks_TankStatics_h_12_PROLOG
#define Tanks_Source_Tanks_TankStatics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TankStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TankStatics_h_15_RPC_WRAPPERS \
	Tanks_Source_Tanks_TankStatics_h_15_INCLASS \
	Tanks_Source_Tanks_TankStatics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_TankStatics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_TankStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_TankStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TankStatics_h_15_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_TankStatics_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_TankStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
