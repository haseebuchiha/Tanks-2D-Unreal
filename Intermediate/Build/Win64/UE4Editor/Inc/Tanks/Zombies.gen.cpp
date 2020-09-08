// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Enemies/Zombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombies() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_AZombies_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AZombies();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_AddAttackInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_AddRotationInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ConsumeAttackInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ConsumeRotationInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_GetAttackInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_GetRotationInput();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_GetTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_GetTargetAsTank();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_SetTarget();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ZombieAI();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ZombieAIShouldAttack();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ZombieAttack();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ZombieDie();
	TANKS_API UEnum* Z_Construct_UEnum_Tanks_EDamageType();
	TANKS_API UFunction* Z_Construct_UFunction_AZombies_ZombieWalk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
// End Cross Module References
	static FName NAME_AZombies_ZombieAI = FName(TEXT("ZombieAI"));
	void AZombies::ZombieAI(float DeltaSeconds)
	{
		Zombies_eventZombieAI_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AZombies_ZombieAI),&Parms);
	}
	static FName NAME_AZombies_ZombieAIShouldAttack = FName(TEXT("ZombieAIShouldAttack"));
	bool AZombies::ZombieAIShouldAttack()
	{
		Zombies_eventZombieAIShouldAttack_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AZombies_ZombieAIShouldAttack),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AZombies_ZombieAttack = FName(TEXT("ZombieAttack"));
	void AZombies::ZombieAttack(float DeltaSeconds)
	{
		Zombies_eventZombieAttack_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_AZombies_ZombieAttack),&Parms);
	}
	static FName NAME_AZombies_ZombieDie = FName(TEXT("ZombieDie"));
	void AZombies::ZombieDie(EDamageType DamageType)
	{
		Zombies_eventZombieDie_Parms Parms;
		Parms.DamageType=DamageType;
		ProcessEvent(FindFunctionChecked(NAME_AZombies_ZombieDie),&Parms);
	}
	static FName NAME_AZombies_ZombieWalk = FName(TEXT("ZombieWalk"));
	void AZombies::ZombieWalk(float DeltaSeconds, FVector DistanceWalkedThisFrame)
	{
		Zombies_eventZombieWalk_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		Parms.DistanceWalkedThisFrame=DistanceWalkedThisFrame;
		ProcessEvent(FindFunctionChecked(NAME_AZombies_ZombieWalk),&Parms);
	}
	void AZombies::StaticRegisterNativesAZombies()
	{
		UClass* Class = AZombies::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttackInput", &AZombies::execAddAttackInput },
			{ "AddRotationInput", &AZombies::execAddRotationInput },
			{ "ConsumeAttackInput", &AZombies::execConsumeAttackInput },
			{ "ConsumeRotationInput", &AZombies::execConsumeRotationInput },
			{ "GetAttackInput", &AZombies::execGetAttackInput },
			{ "GetRotationInput", &AZombies::execGetRotationInput },
			{ "GetTarget", &AZombies::execGetTarget },
			{ "GetTargetAsTank", &AZombies::execGetTargetAsTank },
			{ "SetTarget", &AZombies::execSetTarget },
			{ "ZombieAI", &AZombies::execZombieAI },
			{ "ZombieAIShouldAttack", &AZombies::execZombieAIShouldAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombies_AddAttackInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_AddAttackInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_AddAttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "AddAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_AddAttackInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_AddAttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_AddAttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_AddAttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_AddRotationInput_Statics
	{
		struct Zombies_eventAddRotationInput_Parms
		{
			float DeltaYawDegrees;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaYawDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_AddRotationInput_Statics::NewProp_DeltaYawDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaYawDegrees", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventAddRotationInput_Parms, DeltaYawDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_AddRotationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_AddRotationInput_Statics::NewProp_DeltaYawDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_AddRotationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Add rotation equal to the yaw (in degrees) provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_AddRotationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "AddRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombies_eventAddRotationInput_Parms), Z_Construct_UFunction_AZombies_AddRotationInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_AddRotationInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_AddRotationInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_AddRotationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_AddRotationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_AddRotationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics
	{
		struct Zombies_eventConsumeAttackInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Zombies_eventConsumeAttackInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombies_eventConsumeAttackInput_Parms), &Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ConsumeAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombies_eventConsumeAttackInput_Parms), Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ConsumeAttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ConsumeAttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics
	{
		struct Zombies_eventConsumeRotationInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombies_eventConsumeRotationInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ConsumeRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombies_eventConsumeRotationInput_Parms), Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ConsumeRotationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ConsumeRotationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_GetAttackInput_Statics
	{
		struct Zombies_eventGetAttackInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZombies_GetAttackInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Zombies_eventGetAttackInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombies_GetAttackInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombies_eventGetAttackInput_Parms), &Z_Construct_UFunction_AZombies_GetAttackInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_GetAttackInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_GetAttackInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_GetAttackInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_GetAttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "GetAttackInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombies_eventGetAttackInput_Parms), Z_Construct_UFunction_AZombies_GetAttackInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetAttackInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_GetAttackInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetAttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_GetAttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_GetAttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_GetRotationInput_Statics
	{
		struct Zombies_eventGetRotationInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_GetRotationInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombies_eventGetRotationInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_GetRotationInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_GetRotationInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_GetRotationInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Get Rotation input. Returns pre-clear value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_GetRotationInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "GetRotationInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Zombies_eventGetRotationInput_Parms), Z_Construct_UFunction_AZombies_GetRotationInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetRotationInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_GetRotationInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetRotationInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_GetRotationInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_GetRotationInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_GetTarget_Statics
	{
		struct Zombies_eventGetTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_GetTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombies_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_GetTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_GetTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_GetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "GetTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombies_eventGetTarget_Parms), Z_Construct_UFunction_AZombies_GetTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_GetTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_GetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_GetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics
	{
		struct Zombies_eventGetTargetAsTank_Parms
		{
			ATankPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Zombies_eventGetTargetAsTank_Parms, ReturnValue), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Return the target Actor as a Tank, if possible. Returning Null indicated no target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "GetTargetAsTank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombies_eventGetTargetAsTank_Parms), Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_GetTargetAsTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_GetTargetAsTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_SetTarget_Statics
	{
		struct Zombies_eventSetTarget_Parms
		{
			AActor* NewTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_SetTarget_Statics::NewProp_NewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "NewTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_SetTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_SetTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Set this zombie's target. The base version of this function will handle updating targetActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "SetTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Zombies_eventSetTarget_Parms), Z_Construct_UFunction_AZombies_SetTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_SetTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_SetTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ZombieAI_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_ZombieAI_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventZombieAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ZombieAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieAI_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ZombieAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Zombie AI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ZombieAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ZombieAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(Zombies_eventZombieAI_Parms), Z_Construct_UFunction_AZombies_ZombieAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ZombieAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ZombieAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ZombieAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Zombies_eventZombieAIShouldAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Zombies_eventZombieAIShouldAttack_Parms), &Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ZombieAIShouldAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(Zombies_eventZombieAIShouldAttack_Parms), Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ZombieAIShouldAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ZombieAIShouldAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ZombieAttack_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_ZombieAttack_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventZombieAttack_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ZombieAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieAttack_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ZombieAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "This can be used to start attack animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ZombieAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ZombieAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Zombies_eventZombieAttack_Parms), Z_Construct_UFunction_AZombies_ZombieAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAttack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ZombieAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ZombieAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ZombieAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ZombieDie_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AZombies_ZombieDie_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Enum, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventZombieDie_Parms, DamageType), Z_Construct_UEnum_Tanks_EDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AZombies_ZombieDie_Statics::NewProp_DamageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ZombieDie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieDie_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieDie_Statics::NewProp_DamageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ZombieDie_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "This can be used to handle death from the source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ZombieDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ZombieDie", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Zombies_eventZombieDie_Parms), Z_Construct_UFunction_AZombies_ZombieDie_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieDie_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ZombieDie_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieDie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ZombieDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ZombieDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombies_ZombieWalk_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceWalkedThisFrame;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombies_ZombieWalk_Statics::NewProp_DistanceWalkedThisFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "DistanceWalkedThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventZombieWalk_Parms, DistanceWalkedThisFrame), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_ZombieWalk_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombies_eventZombieWalk_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_ZombieWalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieWalk_Statics::NewProp_DistanceWalkedThisFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_ZombieWalk_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombies_ZombieWalk_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "This can be used to animate walking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_ZombieWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, "ZombieWalk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(Zombies_eventZombieWalk_Parms), Z_Construct_UFunction_AZombies_ZombieWalk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieWalk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombies_ZombieWalk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombies_ZombieWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombies_ZombieWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombies_ZombieWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombies_NoRegister()
	{
		return AZombies::StaticClass();
	}
	struct Z_Construct_UClass_AZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTank_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAvailableTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAvailableTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HitShake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombies_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombies_AddAttackInput, "AddAttackInput" }, // 761554779
		{ &Z_Construct_UFunction_AZombies_AddRotationInput, "AddRotationInput" }, // 2195492838
		{ &Z_Construct_UFunction_AZombies_ConsumeAttackInput, "ConsumeAttackInput" }, // 1633161382
		{ &Z_Construct_UFunction_AZombies_ConsumeRotationInput, "ConsumeRotationInput" }, // 2800563029
		{ &Z_Construct_UFunction_AZombies_GetAttackInput, "GetAttackInput" }, // 3461874699
		{ &Z_Construct_UFunction_AZombies_GetRotationInput, "GetRotationInput" }, // 4089460196
		{ &Z_Construct_UFunction_AZombies_GetTarget, "GetTarget" }, // 395207562
		{ &Z_Construct_UFunction_AZombies_GetTargetAsTank, "GetTargetAsTank" }, // 2124081356
		{ &Z_Construct_UFunction_AZombies_SetTarget, "SetTarget" }, // 1146391605
		{ &Z_Construct_UFunction_AZombies_ZombieAI, "ZombieAI" }, // 3483278019
		{ &Z_Construct_UFunction_AZombies_ZombieAIShouldAttack, "ZombieAIShouldAttack" }, // 2366258561
		{ &Z_Construct_UFunction_AZombies_ZombieAttack, "ZombieAttack" }, // 4158052471
		{ &Z_Construct_UFunction_AZombies_ZombieDie, "ZombieDie" }, // 3669957264
		{ &Z_Construct_UFunction_AZombies_ZombieWalk, "ZombieWalk" }, // 205867669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/Zombies.h" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_TargetTank_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "The Actor we're targeting, cast to a tank and chached. will be NULL if no Target or if the target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_TargetTank = { UE4CodeGen_Private::EPropertyClass::Object, "TargetTank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020801, 1, nullptr, STRUCT_OFFSET(AZombies, TargetTank), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_TargetTank_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_TargetTank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "The actor we're targeting. Will be NULL if there is no target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020801, 1, nullptr, STRUCT_OFFSET(AZombies, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_TargetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_AttackAngle_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Half-angle (in degrees) for our attack." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_AttackAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AttackAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, AttackAngle), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_AttackAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_AttackAvailableTime_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Game time, in seconds, when the Zombie will be allowed to attack again." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_AttackAvailableTime = { UE4CodeGen_Private::EPropertyClass::Float, "AttackAvailableTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000022805, 1, nullptr, STRUCT_OFFSET(AZombies, AttackAvailableTime), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_AttackAvailableTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_AttackAvailableTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Minimum time between attacks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_AttackCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "AttackCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, AttackCooldown), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_AttackCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Attack Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_AttackDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AttackDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, AttackDistance), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_AttackDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Speed when rushing towards the target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_RunSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "RunSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_RunSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Speed when wandering around or when facing away from the target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_WalkSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "WalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_WalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Max yaw speed per second in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_YawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "YawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, YawSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_YawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_SightAngle_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Sight half-angle in degrees (when no target is present)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_SightAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SightAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, SightAngle), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_SightAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_SightAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_SightDistance_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Sight Distace (When no target is present)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_SightDistance = { UE4CodeGen_Private::EPropertyClass::Float, "SightDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, SightDistance), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_SightDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_SightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Zombie" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Current Health value. Might be fun to have different values for different attack types" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(AZombies, Health), METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::NewProp_HitShake_MetaData[] = {
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Enemies/Zombies.h" },
		{ "ToolTip", "Camera Effects" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_HitShake = { UE4CodeGen_Private::EPropertyClass::Class, "HitShake", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AZombies, HitShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::NewProp_HitShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::NewProp_HitShake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_TargetTank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_AttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_AttackAvailableTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_AttackCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_YawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_SightAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_SightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_HitShake,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombies_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageInterface_NoRegister, (int32)VTABLE_OFFSET(AZombies, IDamageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombies_Statics::ClassParams = {
		&AZombies::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AZombies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombies, 1833566553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombies(Z_Construct_UClass_AZombies, &AZombies::StaticClass, TEXT("/Script/Tanks"), TEXT("AZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
