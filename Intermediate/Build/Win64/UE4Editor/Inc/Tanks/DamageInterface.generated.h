// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_DamageInterface_generated_h
#error "DamageInterface.generated.h already included, missing '#pragma once' in DamageInterface.h"
#endif
#define TANKS_DamageInterface_generated_h

#define Tanks_Source_Tanks_DamageInterface_h_22_RPC_WRAPPERS
#define Tanks_Source_Tanks_DamageInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Tanks_Source_Tanks_DamageInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANKS_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKS_API, UDamageInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKS_API UDamageInterface(UDamageInterface&&); \
	TANKS_API UDamageInterface(const UDamageInterface&); \
public:


#define Tanks_Source_Tanks_DamageInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TANKS_API UDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TANKS_API UDamageInterface(UDamageInterface&&); \
	TANKS_API UDamageInterface(const UDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TANKS_API, UDamageInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageInterface)


#define Tanks_Source_Tanks_DamageInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageInterface(); \
	friend struct Z_Construct_UClass_UDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Tanks"), TANKS_API) \
	DECLARE_SERIALIZER(UDamageInterface)


#define Tanks_Source_Tanks_DamageInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tanks_Source_Tanks_DamageInterface_h_22_GENERATED_UINTERFACE_BODY() \
	Tanks_Source_Tanks_DamageInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_DamageInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Tanks_Source_Tanks_DamageInterface_h_22_GENERATED_UINTERFACE_BODY() \
	Tanks_Source_Tanks_DamageInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_DamageInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tanks_Source_Tanks_DamageInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageInterface() {} \
public: \
	typedef UDamageInterface UClassType; \
	typedef IDamageInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Tanks_Source_Tanks_DamageInterface_h_19_PROLOG
#define Tanks_Source_Tanks_DamageInterface_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_DamageInterface_h_22_RPC_WRAPPERS \
	Tanks_Source_Tanks_DamageInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tanks_Source_Tanks_DamageInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tanks_Source_Tanks_DamageInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Tanks_Source_Tanks_DamageInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tanks_Source_Tanks_DamageInterface_h


#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::Unknown) \
	op(EDamageType::HitWithMissile) \
	op(EDamageType::Crushed) \
	op(EDamageType::ZombieSlap) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
