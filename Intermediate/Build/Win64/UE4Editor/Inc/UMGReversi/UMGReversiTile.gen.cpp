// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGReversi/UMGReversiTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGReversiTile() {}
// Cross Module References
	UMGREVERSI_API UClass* Z_Construct_UClass_UUMGReversiTile_NoRegister();
	UMGREVERSI_API UClass* Z_Construct_UClass_UUMGReversiTile();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UMGReversi();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGReversiTile::execSetTileStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TState);
		P_GET_UBOOL(Z_Param_TPlaced);
		P_GET_UBOOL(Z_Param_TCanBMove);
		P_GET_UBOOL(Z_Param_TCanWMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTileStatus(Z_Param_TState,Z_Param_TPlaced,Z_Param_TCanBMove,Z_Param_TCanWMove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGReversiTile::execOnBtnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBtnClicked();
		P_NATIVE_END;
	}
	void UUMGReversiTile::StaticRegisterNativesUUMGReversiTile()
	{
		UClass* Class = UUMGReversiTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBtnClicked", &UUMGReversiTile::execOnBtnClicked },
			{ "SetTileStatus", &UUMGReversiTile::execSetTileStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMGReversiTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGReversiTile, nullptr, "OnBtnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics
	{
		struct UMGReversiTile_eventSetTileStatus_Parms
		{
			int32 TState;
			bool TPlaced;
			bool TCanBMove;
			bool TCanWMove;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TState;
		static void NewProp_TPlaced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TPlaced;
		static void NewProp_TCanBMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TCanBMove;
		static void NewProp_TCanWMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TCanWMove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TState = { "TState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGReversiTile_eventSetTileStatus_Parms, TState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TPlaced_SetBit(void* Obj)
	{
		((UMGReversiTile_eventSetTileStatus_Parms*)Obj)->TPlaced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TPlaced = { "TPlaced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGReversiTile_eventSetTileStatus_Parms), &Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TPlaced_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanBMove_SetBit(void* Obj)
	{
		((UMGReversiTile_eventSetTileStatus_Parms*)Obj)->TCanBMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanBMove = { "TCanBMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGReversiTile_eventSetTileStatus_Parms), &Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanBMove_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanWMove_SetBit(void* Obj)
	{
		((UMGReversiTile_eventSetTileStatus_Parms*)Obj)->TCanWMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanWMove = { "TCanWMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGReversiTile_eventSetTileStatus_Parms), &Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanWMove_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TPlaced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanBMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::NewProp_TCanWMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_TCanBMove", "false" },
		{ "CPP_Default_TCanWMove", "false" },
		{ "CPP_Default_TPlaced", "false" },
		{ "ModuleRelativePath", "UMGReversiTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGReversiTile, nullptr, "SetTileStatus", nullptr, nullptr, sizeof(UMGReversiTile_eventSetTileStatus_Parms), Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGReversiTile_SetTileStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGReversiTile_SetTileStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGReversiTile_NoRegister()
	{
		return UUMGReversiTile::StaticClass();
	}
	struct Z_Construct_UClass_UUMGReversiTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Btn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Btn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGReversiTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGReversi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGReversiTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGReversiTile_OnBtnClicked, "OnBtnClicked" }, // 2593195152
		{ &Z_Construct_UFunction_UUMGReversiTile_SetTileStatus, "SetTileStatus" }, // 2957800110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGReversiTile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UMGReversiTile.h" },
		{ "ModuleRelativePath", "UMGReversiTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGReversiTile_Statics::NewProp_Btn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMGReversiTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMGReversiTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGReversiTile_Statics::NewProp_Btn = { "Btn", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGReversiTile, Btn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGReversiTile_Statics::NewProp_Btn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReversiTile_Statics::NewProp_Btn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGReversiTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGReversiTile_Statics::NewProp_Btn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGReversiTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGReversiTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGReversiTile_Statics::ClassParams = {
		&UUMGReversiTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGReversiTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReversiTile_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGReversiTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReversiTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGReversiTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGReversiTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGReversiTile, 2965743983);
	template<> UMGREVERSI_API UClass* StaticClass<UUMGReversiTile>()
	{
		return UUMGReversiTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGReversiTile(Z_Construct_UClass_UUMGReversiTile, &UUMGReversiTile::StaticClass, TEXT("/Script/UMGReversi"), TEXT("UUMGReversiTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGReversiTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
