// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankGameMode() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATankGameMode_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tanks();
// End Cross Module References
	void ATankGameMode::StaticRegisterNativesATankGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATankGameMode_NoRegister()
	{
		return ATankGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATankGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInZPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayInZPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankGameMode.h" },
		{ "ModuleRelativePath", "TankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameMode_Statics::NewProp_PlayInZPlane_MetaData[] = {
		{ "Category", "TankGameMode" },
		{ "ModuleRelativePath", "TankGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankGameMode_Statics::NewProp_PlayInZPlane = { UE4CodeGen_Private::EPropertyClass::Float, "PlayInZPlane", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATankGameMode, PlayInZPlane), METADATA_PARAMS(Z_Construct_UClass_ATankGameMode_Statics::NewProp_PlayInZPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankGameMode_Statics::NewProp_PlayInZPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankGameMode_Statics::NewProp_PlayInZPlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankGameMode_Statics::ClassParams = {
		&ATankGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		Z_Construct_UClass_ATankGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATankGameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankGameMode, 529003617);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankGameMode(Z_Construct_UClass_ATankGameMode, &ATankGameMode::StaticClass, TEXT("/Script/Tanks"), TEXT("ATankGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
