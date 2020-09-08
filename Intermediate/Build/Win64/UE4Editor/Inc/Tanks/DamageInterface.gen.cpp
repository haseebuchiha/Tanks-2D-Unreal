// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/DamageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageInterface() {}
// Cross Module References
	TANKS_API UEnum* Z_Construct_UEnum_Tanks_EDamageType();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UDamageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* EDamageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tanks_EDamageType, Z_Construct_UPackage__Script_Tanks(), TEXT("EDamageType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamageType(EDamageType_StaticEnum, TEXT("/Script/Tanks"), TEXT("EDamageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tanks_EDamageType_CRC() { return 2459479484U; }
	UEnum* Z_Construct_UEnum_Tanks_EDamageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tanks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamageType"), 0, Get_Z_Construct_UEnum_Tanks_EDamageType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDamageType::Unknown", (int64)EDamageType::Unknown },
				{ "EDamageType::HitWithMissile", (int64)EDamageType::HitWithMissile },
				{ "EDamageType::Crushed", (int64)EDamageType::Crushed },
				{ "EDamageType::ZombieSlap", (int64)EDamageType::ZombieSlap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DamageInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tanks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDamageType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDamageType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDamageInterface::StaticRegisterNativesUDamageInterface()
	{
	}
	UClass* Z_Construct_UClass_UDamageInterface_NoRegister()
	{
		return UDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageInterface_Statics::ClassParams = {
		&UDamageInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDamageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageInterface, 527026628);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageInterface(Z_Construct_UClass_UDamageInterface, &UDamageInterface::StaticClass, TEXT("/Script/Tanks"), TEXT("UDamageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
