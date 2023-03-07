// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGReversi/UMGReversiController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGReversiController() {}
// Cross Module References
	UMGREVERSI_API UClass* Z_Construct_UClass_AUMGReversiController_NoRegister();
	UMGREVERSI_API UClass* Z_Construct_UClass_AUMGReversiController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UMGReversi();
// End Cross Module References
	void AUMGReversiController::StaticRegisterNativesAUMGReversiController()
	{
	}
	UClass* Z_Construct_UClass_AUMGReversiController_NoRegister()
	{
		return AUMGReversiController::StaticClass();
	}
	struct Z_Construct_UClass_AUMGReversiController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUMGReversiController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGReversi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUMGReversiController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UMGReversiController.h" },
		{ "ModuleRelativePath", "UMGReversiController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUMGReversiController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUMGReversiController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUMGReversiController_Statics::ClassParams = {
		&AUMGReversiController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUMGReversiController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUMGReversiController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUMGReversiController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUMGReversiController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUMGReversiController, 4064562234);
	template<> UMGREVERSI_API UClass* StaticClass<AUMGReversiController>()
	{
		return AUMGReversiController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUMGReversiController(Z_Construct_UClass_AUMGReversiController, &AUMGReversiController::StaticClass, TEXT("/Script/UMGReversi"), TEXT("AUMGReversiController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGReversiController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
