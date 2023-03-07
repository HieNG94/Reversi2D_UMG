// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGReversi/UMGReversiBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGReversiBoard() {}
// Cross Module References
	UMGREVERSI_API UClass* Z_Construct_UClass_UUMGReversiBoard_NoRegister();
	UMGREVERSI_API UClass* Z_Construct_UClass_UUMGReversiBoard();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UMGReversi();
// End Cross Module References
	void UUMGReversiBoard::StaticRegisterNativesUUMGReversiBoard()
	{
	}
	UClass* Z_Construct_UClass_UUMGReversiBoard_NoRegister()
	{
		return UUMGReversiBoard::StaticClass();
	}
	struct Z_Construct_UClass_UUMGReversiBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGReversiBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGReversi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGReversiBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMGReversiBoard.h" },
		{ "ModuleRelativePath", "UMGReversiBoard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGReversiBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGReversiBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGReversiBoard_Statics::ClassParams = {
		&UUMGReversiBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGReversiBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGReversiBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGReversiBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGReversiBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGReversiBoard, 3900137123);
	template<> UMGREVERSI_API UClass* StaticClass<UUMGReversiBoard>()
	{
		return UUMGReversiBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGReversiBoard(Z_Construct_UClass_UUMGReversiBoard, &UUMGReversiBoard::StaticClass, TEXT("/Script/UMGReversi"), TEXT("UUMGReversiBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGReversiBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
