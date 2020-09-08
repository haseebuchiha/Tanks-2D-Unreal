// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Turret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATurret();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire1ReadyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fire1ReadyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire1CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fire1CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Fire1ReadyTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Turret.h" },
		{ "ToolTip", "If this value is greater than the current game time, Fire1 is ignored because it has been fired too recently." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Fire1ReadyTime = { UE4CodeGen_Private::EPropertyClass::Float, "Fire1ReadyTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ATurret, Fire1ReadyTime), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Fire1ReadyTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Fire1ReadyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Fire1CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Turret.h" },
		{ "ToolTip", "Time to delay between Fire1 commands." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Fire1CoolDown = { UE4CodeGen_Private::EPropertyClass::Float, "Fire1CoolDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATurret, Fire1CoolDown), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Fire1CoolDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Fire1CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Tank_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Tank = { UE4CodeGen_Private::EPropertyClass::Object, "Tank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ATurret, Tank), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Tank_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Tank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Turret.h" },
		{ "ToolTip", "Max Turn rate in degrees/second for turret" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_YawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "YawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATurret, YawSpeed), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_YawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Projectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Projectile = { UE4CodeGen_Private::EPropertyClass::Class, "Projectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000015, 1, nullptr, STRUCT_OFFSET(ATurret, Projectile), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretSprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
		{ "ToolTip", "Sprite for the Turret" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretSprite = { UE4CodeGen_Private::EPropertyClass::Object, "TurretSprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATurret, TurretSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TurretSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Turret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Turret.h" },
		{ "ToolTip", "Helpful debug tool - Which direction is the tank facing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretDirection = { UE4CodeGen_Private::EPropertyClass::Object, "TurretDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATurret, TurretDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TurretDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Fire1ReadyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Fire1CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Tank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_YawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TurretSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TurretDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATurret_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurret, 1602437149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurret(Z_Construct_UClass_ATurret, &ATurret::StaticClass, TEXT("/Script/Tanks"), TEXT("ATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
