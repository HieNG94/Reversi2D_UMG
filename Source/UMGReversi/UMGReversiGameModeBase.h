// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UMGReversiGameModeBase.generated.h"

/**
 * 
 */
class UUserWidget;

UCLASS()
class UMGREVERSI_API AUMGReversiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	/** The widget class we will use as our menu when the game starts. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget>StartingWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget>EndingWidgetClass;

	/** The widget instance that we are using as our menu. */
	UPROPERTY()
	UUserWidget* CurrentWidget;

	UPROPERTY(BlueprintReadWrite)
	int32 Size;

	UPROPERTY(BlueprintReadWrite)
	float TimeLimit;
	
	UPROPERTY(BlueprintReadWrite)
	float TimeCounter = TimeLimit;

	UPROPERTY(BlueprintReadWrite)
	int32 Turn = 1;

	UPROPERTY(BlueprintReadWrite)
	int32 NumOfBlackDiscs;

	UPROPERTY(BlueprintReadWrite)
	int32 NumOfWhiteDiscs;

public:
	AUMGReversiGameModeBase();

	/** Remove the current menu widget and create a new one from the specified class, if provided. */
	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

	UFUNCTION(BlueprintCallable)
	void SetTilesArray(TArray<class UUMGReversiTile*>TTiles);

	UFUNCTION(BlueprintCallable)
	void InitBoard();

	void SwitchTurn();
	void Next(UUMGReversiTile* TTile);
	int32 GetTurn();

	UTexture* GetTileTexture(int32 State);

	void CheckValidMove();

	void GetAllSurroundTiles(UUMGReversiTile* TTile);
	void RemoveSurroundTiles(UUMGReversiTile* TTile);

	void ShowValidTiles();
	void RemoveValidTile(UUMGReversiTile* TTile);

	int32 GetDirCheck(int32 DirCheck, int32 SelectedIndex);
	void CheckCapturableDiscs(UUMGReversiTile* TTile);
	void CaptureDiscs();
	void DiscCounter();
	void TurnTimer();

	void AICheck();
	void AIMove();

private:
	bool EndGame = false;
	float DelayMove = 1.5f;
	int32 NoValidMove;
	FTimerHandle DelayAIHandler;
	FTimerHandle TimeLimitHandler;
	UTexture* BlackTileText;
	UTexture* WhiteTileText;
	UTexture* ValidTileText;
	UTexture* EmptyTileText;
	TArray<class UUMGReversiTile*> AllTiles;
	TArray<class UUMGReversiTile*> SurroundTiles;
	TArray<class UUMGReversiTile*> ValidTiles;
	TArray<class UUMGReversiTile*> EarnTiles;
};
