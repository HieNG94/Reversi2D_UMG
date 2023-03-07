// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMGReversiTile;
class UUserWidget;
#ifdef UMGREVERSI_UMGReversiGameModeBase_generated_h
#error "UMGReversiGameModeBase.generated.h already included, missing '#pragma once' in UMGReversiGameModeBase.h"
#endif
#define UMGREVERSI_UMGReversiGameModeBase_generated_h

#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_SPARSE_DATA
#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitBoard); \
	DECLARE_FUNCTION(execSetTilesArray); \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitBoard); \
	DECLARE_FUNCTION(execSetTilesArray); \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUMGReversiGameModeBase(); \
	friend struct Z_Construct_UClass_AUMGReversiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AUMGReversiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGReversi"), NO_API) \
	DECLARE_SERIALIZER(AUMGReversiGameModeBase)


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAUMGReversiGameModeBase(); \
	friend struct Z_Construct_UClass_AUMGReversiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AUMGReversiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGReversi"), NO_API) \
	DECLARE_SERIALIZER(AUMGReversiGameModeBase)


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUMGReversiGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUMGReversiGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGReversiGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGReversiGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGReversiGameModeBase(AUMGReversiGameModeBase&&); \
	NO_API AUMGReversiGameModeBase(const AUMGReversiGameModeBase&); \
public:


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGReversiGameModeBase(AUMGReversiGameModeBase&&); \
	NO_API AUMGReversiGameModeBase(const AUMGReversiGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGReversiGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGReversiGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUMGReversiGameModeBase)


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AUMGReversiGameModeBase, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__EndingWidgetClass() { return STRUCT_OFFSET(AUMGReversiGameModeBase, EndingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AUMGReversiGameModeBase, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(AUMGReversiGameModeBase, Size); } \
	FORCEINLINE static uint32 __PPO__Turn() { return STRUCT_OFFSET(AUMGReversiGameModeBase, Turn); } \
	FORCEINLINE static uint32 __PPO__NumOfBlackDiscs() { return STRUCT_OFFSET(AUMGReversiGameModeBase, NumOfBlackDiscs); } \
	FORCEINLINE static uint32 __PPO__NumOfWhiteDiscs() { return STRUCT_OFFSET(AUMGReversiGameModeBase, NumOfWhiteDiscs); }


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_14_PROLOG
#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_SPARSE_DATA \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_RPC_WRAPPERS \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_INCLASS \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_PRIVATE_PROPERTY_OFFSET \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_SPARSE_DATA \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGREVERSI_API UClass* StaticClass<class AUMGReversiGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UMGReversi_Source_UMGReversi_UMGReversiGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
