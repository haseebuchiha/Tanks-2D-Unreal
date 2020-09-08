// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Enemies/ZombieBrains.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBrains() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_AZombieBrains_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AZombieBrains();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UClass* Z_Construct_UClass_AZombies_NoRegister();
// End Cross Module References
	void AZombieBrains::StaticRegisterNativesAZombieBrains()
	{
	}
	UClass* Z_Construct_UClass_AZombieBrains_NoRegister()
	{
		return AZombieBrains::StaticClass();
	}
	struct Z_Construct_UClass_AZombieBrains_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnAsZombie_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnAsZombie;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieBrains_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBrains_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Enemies/ZombieBrains.h" },
		{ "ModuleRelativePath", "Enemies/ZombieBrains.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBrains_Statics::NewProp_PawnAsZombie_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Enemies/ZombieBrains.h" },
		{ "ToolTip", "Our pawn, pre-cast to a zombie. Will be NULL if the pawn is NULL or is not a zombie" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieBrains_Statics::NewProp_PawnAsZombie = { UE4CodeGen_Private::EPropertyClass::Object, "PawnAsZombie", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(AZombieBrains, PawnAsZombie), Z_Construct_UClass_AZombies_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieBrains_Statics::NewProp_PawnAsZombie_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBrains_Statics::NewProp_PawnAsZombie_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieBrains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBrains_Statics::NewProp_PawnAsZombie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieBrains_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieBrains>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieBrains_Statics::ClassParams = {
		&AZombieBrains::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		Z_Construct_UClass_AZombieBrains_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AZombieBrains_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AZombieBrains_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombieBrains_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieBrains()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieBrains_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieBrains, 3186133243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieBrains(Z_Construct_UClass_AZombieBrains, &AZombieBrains::StaticClass, TEXT("/Script/Tanks"), TEXT("AZombieBrains"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBrains);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
