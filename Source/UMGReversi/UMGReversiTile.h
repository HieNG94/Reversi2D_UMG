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

	UFUNCTION()
	void OnBtnClicked();

	virtual void NativeConstruct() override;

public:
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	class UWidgetAnimation* FlipAnimation;

	UFUNCTION(BlueprintCallable)
	void SetTileStatus(int32 TState, bool TPlaced = false, bool TCanMove = false);

	void UpdateTile();
	void PlaceDisc();

private:
	class AUMGReversiGameModeBase* GM;
	int32 State;
	int32 Capturable;
	bool Placed;
	bool CanMove;

public:
	int32 GetState() { return State; }
	void SetCapturable(int32 Num) { Capturable = Num; }
	int32 GetCapturable() { return Capturable; }
	bool GetCanMove() { return CanMove; }
	bool GetPlaced() { return Placed; }
};
