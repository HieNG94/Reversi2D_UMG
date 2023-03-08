// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGReversi/UMGReversiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGReversiGameModeBase() {}
// Cross Module References
	UMGREVERSI_API UClass* Z_Construct_UClass_AUMGReversiGameModeBase_NoRegister();
	UMGREVERSI_API UClass* Z_Construct_UClass_AUMGReversiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UMGReversi();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMGREVERSI_API UClass* Z_Construct_UClass_UUMGReversiTile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUMGReversiGameModeBase::execInitBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUMGReversiGameModeBase::execSetTilesArray)
	{
		P_GET_TARRAY(UUMGReversiTile*,Z_Param_TTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTilesArray(Z_Param_TTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUMGReversiGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AUMGReversiGameModeBase::StaticRegisterNativesAUMGReversiGameModeBase()
	{
		UClass* Class = AUMGReversiGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AUMGReversiGameModeBase::execChangeMenuWidget },
			{ "InitBoard", &AUMGReversiGameModeBase::execInitBoard },
			{ "SetTilesArray", &AUMGReversiGameModeBase::execSetTilesArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics
	{
		struct UMGReversiGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGReversiGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** Remove the current menu widget and create a new one from the specified class, if provided. */" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
		{ "ToolTip", "Remove the current menu widget and create a new one from the specified class, if provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUMGReversiGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(UMGReversiGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUMGReversiGameModeBase, nullptr, "InitBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics
	{
		struct UMGReversiGameModeBase_eventSetTilesArray_Parms
		{
			TArray<UUMGReversiTile*> TTiles;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TTiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles_Inner = { "TTiles", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGReversiTile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles = { "TTiles", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGReversiGameModeBase_eventSetTilesArray_Parms, TTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::NewProp_TTiles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUMGReversiGameModeBase, nullptr, "SetTilesArray", nullptr, nullptr, sizeof(UMGReversiGameModeBase_eventSetTilesArray_Parms), Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUMGReversiGameModeBase_NoRegister()
	{
		return AUMGReversiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUMGReversiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Turn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfBlackDiscs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfBlackDiscs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfWhiteDiscs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfWhiteDiscs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGReversiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGReversi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUMGReversiGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUMGReversiGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 4177376625
		{ &Z_Construct_UFunction_AUMGReversiGameModeBase_InitBoard, "InitBoard" }, // 957519042
		{ &Z_Construct_UFunction_AUMGReversiGameModeBase_SetTilesArray, "SetTilesArray" }, // 4115056690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UMGReversiGameModeBase.h" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** The widget class we will use as our menu when the game starts. */" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_EndingWidgetClass = { "EndingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, EndingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "/** The widget instance that we are using as our menu. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
		{ "ToolTip", "The widget instance that we are using as our menu." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, Size), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeCounter_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeCounter = { "TimeCounter", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, TimeCounter), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Turn_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Turn = { "Turn", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, Turn), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Turn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Turn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfBlackDiscs_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfBlackDiscs = { "NumOfBlackDiscs", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, NumOfBlackDiscs), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfBlackDiscs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfBlackDiscs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfWhiteDiscs_MetaData[] = {
		{ "Category", "UMGReversiGameModeBase" },
		{ "ModuleRelativePath", "UMGReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfWhiteDiscs = { "NumOfWhiteDiscs", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUMGReversiGameModeBase, NumOfWhiteDiscs), METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfWhiteDiscs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfWhiteDiscs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUMGReversiGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_StartingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_EndingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_TimeCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_Turn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfBlackDiscs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUMGReversiGameModeBase_Statics::NewProp_NumOfWhiteDiscs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGReversiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGReversiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUMGReversiGameModeBase_Statics::ClassParams = {
		&AUMGReversiGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUMGReversiGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGReversiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUMGReversiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUMGReversiGameModeBase, 2996483819);
	template<> UMGREVERSI_API UClass* StaticClass<AUMGReversiGameModeBase>()
	{
		return AUMGReversiGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUMGReversiGameModeBase(Z_Construct_UClass_AUMGReversiGameModeBase, &AUMGReversiGameModeBase::StaticClass, TEXT("/Script/UMGReversi"), TEXT("AUMGReversiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGReversiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
