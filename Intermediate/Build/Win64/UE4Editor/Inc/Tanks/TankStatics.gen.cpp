// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankStatics() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_UTankStatics_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UTankStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UFunction* Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees();
	TANKS_API UFunction* Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TANKS_API UFunction* Z_Construct_UFunction_UTankStatics_GetTanksGameMode();
	TANKS_API UClass* Z_Construct_UClass_ATankGameMode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TANKS_API UFunction* Z_Construct_UFunction_UTankStatics_PutInZPlane();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UTankStatics::StaticRegisterNativesUTankStatics()
	{
		UClass* Class = UTankStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDeltaAngleDegrees", &UTankStatics::execFindDeltaAngleDegrees },
			{ "FindLookAtAngle2D", &UTankStatics::execFindLookAtAngle2D },
			{ "GetTanksGameMode", &UTankStatics::execGetTanksGameMode },
			{ "PutInZPlane", &UTankStatics::execPutInZPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics
	{
		struct TankStatics_eventFindDeltaAngleDegrees_Parms
		{
			float A1;
			float A2;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindDeltaAngleDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_A2 = { UE4CodeGen_Private::EPropertyClass::Float, "A2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindDeltaAngleDegrees_Parms, A2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_A1 = { UE4CodeGen_Private::EPropertyClass::Float, "A1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindDeltaAngleDegrees_Parms, A1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_A2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::NewProp_A1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "TankStatics.h" },
		{ "ToolTip", "Calculate the angle difference between [-180, 180]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankStatics, "FindDeltaAngleDegrees", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TankStatics_eventFindDeltaAngleDegrees_Parms), Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics
	{
		struct TankStatics_eventFindLookAtAngle2D_Parms
		{
			FVector2D Start;
			FVector2D Target;
			float Angle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TankStatics_eventFindLookAtAngle2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TankStatics_eventFindLookAtAngle2D_Parms), &Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Angle = { UE4CodeGen_Private::EPropertyClass::Float, "Angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindLookAtAngle2D_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Struct, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindLookAtAngle2D_Parms, Target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TankStatics_eventFindLookAtAngle2D_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Start_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Rotator" },
		{ "Keyword", "rotation rotate" },
		{ "ModuleRelativePath", "TankStatics.h" },
		{ "ToolTip", "Find the angle between two 2D Points" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankStatics, "FindLookAtAngle2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(TankStatics_eventFindLookAtAngle2D_Parms), Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics
	{
		struct TankStatics_eventGetTanksGameMode_Parms
		{
			UObject* WorldContextObject;
			ATankGameMode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankStatics_eventGetTanksGameMode_Parms, ReturnValue), Z_Construct_UClass_ATankGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankStatics_eventGetTanksGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tanks" },
		{ "ModuleRelativePath", "TankStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankStatics, "GetTanksGameMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TankStatics_eventGetTanksGameMode_Parms), Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankStatics_GetTanksGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankStatics_GetTanksGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics
	{
		struct TankStatics_eventPutInZPlane_Parms
		{
			AActor* ActorToMove;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::NewProp_ActorToMove = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToMove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankStatics_eventPutInZPlane_Parms, ActorToMove), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::NewProp_ActorToMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tanks" },
		{ "ModuleRelativePath", "TankStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankStatics, "PutInZPlane", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(TankStatics_eventPutInZPlane_Parms), Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankStatics_PutInZPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankStatics_PutInZPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankStatics_NoRegister()
	{
		return UTankStatics::StaticClass();
	}
	struct Z_Construct_UClass_UTankStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankStatics_FindDeltaAngleDegrees, "FindDeltaAngleDegrees" }, // 1724009916
		{ &Z_Construct_UFunction_UTankStatics_FindLookAtAngle2D, "FindLookAtAngle2D" }, // 3776881580
		{ &Z_Construct_UFunction_UTankStatics_GetTanksGameMode, "GetTanksGameMode" }, // 205830111
		{ &Z_Construct_UFunction_UTankStatics_PutInZPlane, "PutInZPlane" }, // 1404906333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TankStatics.h" },
		{ "ModuleRelativePath", "TankStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankStatics_Statics::ClassParams = {
		&UTankStatics::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTankStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankStatics, 167788358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankStatics(Z_Construct_UClass_UTankStatics, &UTankStatics::StaticClass, TEXT("/Script/Tanks"), TEXT("UTankStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
