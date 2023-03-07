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
	if (State == 3)
	{
		if (GM->GetTurn() == 1)
		{
			if (CanBlackMove)
			{
				Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(State));
			}
			else
			{
				Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(0));
			}
		}
		else
		{
			if (CanWhiteMove)
			{
				Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(State));
			}
			else
			{
				Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(0));
			}
		}
	}
	else
	{
		Btn->WidgetStyle.Normal.SetResourceObject(GM->GetTileTexture(State));
	}
}

void UUMGReversiTile::PlaceDisc()
{
	if (GM->GetTurn() == 1)
	{
		SetTileStatus(1, true, false, false);
	}
	else
	{
		SetTileStatus(2, true, false, false);
	}
	UpdateTile();
	GM->RemoveValidTile(this);
	GM->CheckValidMove(this);
	GM->DiscCounter();
	GM->SwitchTurn();
}

void UUMGReversiTile::SetTileStatus(int32 TState, bool TPlaced, bool TCanBMove, bool TCanWMove)
{
	State = TState;
	Placed = TPlaced;
	CanBlackMove = TCanBMove;
	CanWhiteMove = TCanWMove;
}

void UUMGReversiTile::OnBtnClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Clicked %d"), State);

	if (GM->GetTurn() == 1)
	{
		if (CanWhiteMove)
		{
			PlaceDisc();
		}
	}
	else
	{
		if (CanBlackMove)
		{
			PlaceDisc();
		}
	}
}