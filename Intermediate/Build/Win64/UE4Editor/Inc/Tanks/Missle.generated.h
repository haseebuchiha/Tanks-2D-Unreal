// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_Missle_generated_h
#error "Missle.generated.h already included, missing '#pragma once' in Missle.h"
#endif
#define TANKS_Missle_generated_h

#define Tanks_Source_Tanks_Missle_h_12_RPC_WRAPPERS \
	virtual void OnExplode_Implementation(); \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode_Implementation(); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_Missle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode_Implementation(); \
		P_NATIVE_END; \
	}


#define Tanks_Source_Tanks_Missle_h_12_EVENT_PARMS
#define Tanks_Source_Tanks_Missle_h_12_CALLBACK_WRAPPERS
#define Tanks_Source_Tanks_Missle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissle(); \
	friend struct Z_Construct_UClass_AMissle_Statics; \
public: \
	DECLARE_CLASS(AMissle, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AMissle)


#define Tanks_Source_Tanks_Missle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMissle(); \
	friend struct Z_Construct_UClass_AMissle_Statics; \
public: \
	DECLARE_CLASS(AMissle, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AMissle)


#define Tanks_Source_Tanks_Missle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissle(AMissle&&); \
	NO_API AMissle(const AMissle&); \
public:


#define Tanks_Source_Tanks_Missle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissle(AMissle&&); \
	NO_API AMissle(const AMissle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissle)


#define Tanks_Source_Tanks_Missle_h_12_PRIVATE_PROPERTY_OFFSET
#define Tanks_Source_Tanks_Missle_h_9_PROLOG \
	Tanks_Source_Tanks_Missle_h_12_EVENT_PARMS


#define Tanks_Source_Tanks_Missle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Missle_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Missle_h_12_RPC_WRAPPERS \
	Tanks_Source_Tanks_Missle_h_12_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_Missle_h_12_INCLASS \
	Tanks_Source_Tanks_Missle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_Missle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_Missle_h_12_PRIVATE_PROPERTY_OFFSET \
	Tanks_Source_Tanks_Missle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Missle_h_12_CALLBACK_WRAPPERS \
	Tanks_Source_Tanks_Missle_h_12_INCLASS_NO_PURE_DECLS \
	Tanks_Source_Tanks_Missle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_Missle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
