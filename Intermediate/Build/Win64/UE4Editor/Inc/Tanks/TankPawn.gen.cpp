// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANKS_API UScriptStruct* Z_Construct_UScriptStruct_FTankInput();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	TANKS_API UFunction* Z_Construct_UFunction_ATankPawn_TankDie();
	TANKS_API UEnum* Z_Construct_UEnum_Tanks_EDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UDamageInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTankInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TANKS_API uint32 Get_Z_Construct_UScriptStruct_FTankInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTankInput, Z_Construct_UPackage__Script_Tanks(), TEXT("TankInput"), sizeof(FTankInput), Get_Z_Construct_UScriptStruct_FTankInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTankInput(FTankInput::StaticStruct, TEXT("/Script/Tanks"), TEXT("TankInput"), false, nullptr, nullptr);
static struct FScriptStruct_Tanks_StaticRegisterNativesFTankInput
{
	FScriptStruct_Tanks_StaticRegisterNativesFTankInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TankInput")),new UScriptStruct::TCppStructOps<FTankInput>);
	}
} ScriptStruct_Tanks_StaticRegisterNativesFTankInput;
	struct Z_Construct_UScriptStruct_FTankInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFire2_MetaData[];
#endif
		static void NewProp_bFire2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFire2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFire1_MetaData[];
#endif
		static void NewProp_bFire1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFire1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTankInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Let this struct handle all of our inputs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTankInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTankInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2_MetaData[] = {
		{ "Category", "Tank Input" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2_SetBit(void* Obj)
	{
		((FTankInput*)Obj)->bFire2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bFire2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTankInput), &Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1_MetaData[] = {
		{ "Category", "Tank Input" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1_SetBit(void* Obj)
	{
		((FTankInput*)Obj)->bFire1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1 = { UE4CodeGen_Private::EPropertyClass::Bool, "bFire1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTankInput), &Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_MovementInput_MetaData[] = {
		{ "Category", "Tank Input" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Sanitized movement input, ready to use by game logic" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_MovementInput = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FTankInput, MovementInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_MovementInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_MovementInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTankInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_bFire1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTankInput_Statics::NewProp_MovementInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTankInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
		nullptr,
		&NewStructOps,
		"TankInput",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTankInput),
		alignof(FTankInput),
		Z_Construct_UScriptStruct_FTankInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTankInput_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTankInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTankInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTankInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTankInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Tanks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TankInput"), sizeof(FTankInput), Get_Z_Construct_UScriptStruct_FTankInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTankInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTankInput_CRC() { return 2631760251U; }
	static FName NAME_ATankPawn_TankDie = FName(TEXT("TankDie"));
	void ATankPawn::TankDie(EDamageType DamageType)
	{
		TankPawn_eventTankDie_Parms Parms;
		Parms.DamageType=DamageType;
		ProcessEvent(FindFunctionChecked(NAME_ATankPawn_TankDie),&Parms);
	}
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
		UClass* Class = ATankPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TankDie", &ATankPawn::execTankDie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPawn_TankDie_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATankPawn_TankDie_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Enum, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankPawn_eventTankDie_Parms, DamageType), Z_Construct_UEnum_Tanks_EDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATankPawn_TankDie_Statics::NewProp_DamageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_TankDie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_TankDie_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_TankDie_Statics::NewProp_DamageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_TankDie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_TankDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, "TankDie", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(TankPawn_eventTankDie_Parms), Z_Construct_UFunction_ATankPawn_TankDie_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TankDie_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_TankDie_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TankDie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_TankDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPawn_TankDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAccel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveAccel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrushCollisionProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CrushCollisionProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TankInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTurret_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTurret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPawn_TankDie, "TankDie" }, // 3297043654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveAccel_MetaData[] = {
		{ "Category", "Tank" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Acceleration for our tank, when player is trying to move or change directions." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveAccel = { UE4CodeGen_Private::EPropertyClass::Float, "MoveAccel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATankPawn, MoveAccel), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveAccel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveAccel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Tank" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Maximum Movement rate (unit/second) of the tank." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MoveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATankPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CrushCollisionProfile_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Collision profile for detecting (via overlaps) the thing we can crush" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CrushCollisionProfile = { UE4CodeGen_Private::EPropertyClass::Name, "CrushCollisionProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATankPawn, CrushCollisionProfile), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CrushCollisionProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CrushCollisionProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Health_MetaData[] = {
		{ "CampMin", "1.0" },
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Current Health" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Int, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATankPawn, Health), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "Tank" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Maximum turn rate (Degree/seconds) of the tank" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_YawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "YawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(ATankPawn, YawSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_YawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankInput_MetaData[] = {
		{ "Category", "Tank Input" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Our Input Struct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankInput = { UE4CodeGen_Private::EPropertyClass::Struct, "TankInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ATankPawn, TankInput), Z_Construct_UScriptStruct_FTankInput, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Our Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATankPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_ChildTurret_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_ChildTurret = { UE4CodeGen_Private::EPropertyClass::Object, "ChildTurret", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATankPawn, ChildTurret), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_ChildTurret_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_ChildTurret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankSprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Sprite for the tank body" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankSprite = { UE4CodeGen_Private::EPropertyClass::Object, "TankSprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATankPawn, TankSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankBody_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Collision body for the tank" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankBody = { UE4CodeGen_Private::EPropertyClass::Object, "TankBody", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATankPawn, TankBody), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankBody_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "Helpful debug tool - Which direction is the tank facing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankDirection = { UE4CodeGen_Private::EPropertyClass::Object, "TankDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATankPawn, TankDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CrushCollisionProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_YawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_ChildTurret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankDirection,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATankPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ATankPawn, IDamageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATankPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPawn, 188614466);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPawn(Z_Construct_UClass_ATankPawn, &ATankPawn::StaticClass, TEXT("/Script/Tanks"), TEXT("ATankPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
