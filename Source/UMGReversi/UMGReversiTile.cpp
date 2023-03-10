// Fill out your copyright notice in the Description page of Project Settings.


#include "UMGReversiTile.h"
#include "UMGReversiGameModeBase.h"
#include <Components/Button.h>

void UUMGReversiTile::NativeConstruct()
{
	if (Btn)
	{
		Btn->OnClicked.AddDynamic(this, &UUMGReversiTile::OnBtnClicked);
	}

	GM = (AUMGReversiGameModeBase*)GetWorld()->GetAuthGameMode();
	if (!GM) { return; }

	UpdateTile();
}

void UUMGReversiTile::UpdateTile()
{
	Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(State));
}

void UUMGReversiTile::PlaceDisc()
{
	if (GM->GetTurn() == 1)
	{
		SetTileStatus(1, true, false);
	}
	else
	{
		SetTileStatus(2, true, false);
	}
	UpdateTile();
	Btn->SetVisibility(ESlateVisibility::HitTestInvisible);
	GM->Next(this);
}

void UUMGReversiTile::SetTileStatus(int32 TState, bool TPlaced, bool TCanMove)
{
	State = TState;
	Placed = TPlaced;
	CanMove = TCanMove;
}

void UUMGReversiTile::OnBtnClicked()
{
	if (CanMove && GM->GetTurn() == 1)
	{
		PlaceDisc();
	}
}