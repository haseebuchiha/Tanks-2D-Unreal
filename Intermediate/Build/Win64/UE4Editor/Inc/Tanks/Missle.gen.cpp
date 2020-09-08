// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Missle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissle() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_AMissle_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AMissle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UFunction* Z_Construct_UFunction_AMissle_OnExplode();
// End Cross Module References
	static FName NAME_AMissle_OnExplode = FName(TEXT("OnExplode"));
	void AMissle::OnExplode()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMissle_OnExplode),NULL);
	}
	void AMissle::StaticRegisterNativesAMissle()
	{
		UClass* Class = AMissle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExplode", &AMissle::execOnExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMissle_OnExplode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissle_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Missle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissle_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissle, "OnExplode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissle_OnExplode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMissle_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissle_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMissle_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMissle_NoRegister()
	{
		return AMissle::StaticClass();
	}
	struct Z_Construct_UClass_AMissle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovementCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DirectDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMissle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMissle_OnExplode, "OnExplode" }, // 1724158394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Missle.h" },
		{ "ModuleRelativePath", "Missle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissle_Statics::NewProp_MovementCollisionProfile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Missle.h" },
		{ "ToolTip", "Describes what the missile hits" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMissle_Statics::NewProp_MovementCollisionProfile = { UE4CodeGen_Private::EPropertyClass::Name, "MovementCollisionProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMissle, MovementCollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AMissle_Statics::NewProp_MovementCollisionProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::NewProp_MovementCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissle_Statics::NewProp_DirectDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Missle.h" },
		{ "ToolTip", "The damage the zombie will take/ is taking." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMissle_Statics::NewProp_DirectDamage = { UE4CodeGen_Private::EPropertyClass::Int, "DirectDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMissle, DirectDamage), METADATA_PARAMS(Z_Construct_UClass_AMissle_Statics::NewProp_DirectDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::NewProp_DirectDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissle_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Missle.h" },
		{ "ToolTip", "The missiles radius for collision" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMissle_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMissle, Radius), METADATA_PARAMS(Z_Construct_UClass_AMissle_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissle_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Missle.h" },
		{ "ToolTip", "The speed of the missile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMissle_Statics::NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMissle, Speed), METADATA_PARAMS(Z_Construct_UClass_AMissle_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissle_Statics::NewProp_MovementCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissle_Statics::NewProp_DirectDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissle_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissle_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMissle_Statics::ClassParams = {
		&AMissle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMissle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMissle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMissle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMissle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMissle, 1399001905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMissle(Z_Construct_UClass_AMissle, &AMissle::StaticClass, TEXT("/Script/Tanks"), TEXT("AMissle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
