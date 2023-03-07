// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGReversiTile.generated.h"

/**
 *
 */
UCLASS()
class UMGREVERSI_API UUMGReversiTile : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Btn;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnBtnClicked();

public:
	UFUNCTION(BlueprintCallable)
	void SetTileStatus(int32 TState, bool TPlaced = false, bool TCanBMove = false, bool TCanWMove = false);

	void UpdateTile();
	void PlaceDisc();

private:
	class AUMGReversiGameModeBase* GM;
	int32 State;
	bool Placed;
	bool CanBlackMove;
	bool CanWhiteMove;

public:
	int32 GetState() { return State; }
	bool GetCanBlackMove() { return CanBlackMove; }
	bool GetCanWhiteMove() { return CanWhiteMove; }
	bool GetPlaced() { return Placed; }
};
