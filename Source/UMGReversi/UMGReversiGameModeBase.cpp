// Copyright Epic Games, Inc. All Rights Reserved.


#include "UMGReversiGameModeBase.h"
#include "UMGReversiTile.h"
#include "UMGReversiController.h"
#include "Animation/WidgetAnimation.h"
#include "Blueprint/UserWidget.h"

AUMGReversiGameModeBase::AUMGReversiGameModeBase()
{
	// Set default player controller
	PlayerControllerClass = AUMGReversiController::StaticClass();

	ConstructorHelpers::FObjectFinder<UTexture>ETileTexture(TEXT("Texture2D'/Game/UMGReversi/Image/ED.ED'"));
	ConstructorHelpers::FObjectFinder<UTexture>WTileTexture(TEXT("Texture2D'/Game/UMGReversi/Image/WD.WD'"));
	ConstructorHelpers::FObjectFinder<UTexture>BTileTexture(TEXT("Texture2D'/Game/UMGReversi/Image/BD.BD'"));
	ConstructorHelpers::FObjectFinder<UTexture>VTileTexture(TEXT("Texture2D'/Game/UMGReversi/Image/VD.VD'"));
	if (ETileTexture.Succeeded() && WTileTexture.Succeeded() && BTileTexture.Succeeded() && VTileTexture.Succeeded())
	{
		EmptyTileText = ETileTexture.Object;
		WhiteTileText = WTileTexture.Object;
		BlackTileText = BTileTexture.Object;
		ValidTileText = VTileTexture.Object;
	}
}

void AUMGReversiGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (StartingWidgetClass)
	{
		ChangeMenuWidget(StartingWidgetClass);
	}
}

/*******************************************************************************
*
* Change Widget
*
********************************************************************************/
void AUMGReversiGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}
	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void AUMGReversiGameModeBase::SetTilesArray(TArray<class UUMGReversiTile*> TTiles)
{
	for (auto Tile : TTiles)
	{
		AllTiles.Add(Tile);
	}
}

void AUMGReversiGameModeBase::InitBoard()
{
	int32 LowerRight = Size * (Size / 2) + (Size / 2); // get 4 centered tiles
	AllTiles[LowerRight]->PlaceDisc();

	int32 LowerLeft = LowerRight - 1;
	AllTiles[LowerLeft]->PlaceDisc();

	int32 UpperLeft = LowerLeft - Size;
	AllTiles[UpperLeft]->PlaceDisc();

	int32 UpperRight = LowerRight - Size;
	AllTiles[UpperRight]->PlaceDisc();
}

UTexture* AUMGReversiGameModeBase::GetTileTexture(int32 State)
{
	if (State == 1)
	{
		return WhiteTileText;
	}
	else if (State == 2)
	{
		return BlackTileText;
	}
	else if (State == 3)
	{
		return ValidTileText;
	}
	else
	{
		return EmptyTileText;
	}
}

void AUMGReversiGameModeBase::SwitchTurn()
{
	if (Turn == 1)
	{
		Turn = 2;
	}
	else
	{
		Turn = 1;
	}
	CheckValidMove();
}

void AUMGReversiGameModeBase::Next(UUMGReversiTile* TTile)
{
	if (!EndGame)
	{
		GetAllSurroundTiles(TTile);
		RemoveSurroundTiles(TTile);
		RemoveValidTile(TTile);
		CheckCapturableDiscs(TTile);
		CaptureDiscs();
		DiscCounter();
		SwitchTurn();

		if (NumOfBlackDiscs + NumOfWhiteDiscs > 4)
		{
			if (Turn == 2)
			{
				AIMove();
			}

			TimeCounter = TimeLimit;
			GetWorldTimerManager().ClearTimer(TimeLimitHandler);
			GetWorldTimerManager().SetTimer(TimeLimitHandler, this, &AUMGReversiGameModeBase::TurnTimer, 0.1f, true, 0);
		}
	}
}

int32 AUMGReversiGameModeBase::GetTurn()
{
	return Turn;
}

void AUMGReversiGameModeBase::CheckValidMove()
{
	for (auto Tile : ValidTiles)
	{
		Tile->SetTileStatus(0, Tile->GetPlaced(), false);
		Tile->UpdateTile();
	}
	ValidTiles.Empty();

	for (auto Tile : SurroundTiles)
	{
		CheckCapturableDiscs(Tile);

		if (EarnTiles.Num() > 0)
		{
			if (!ValidTiles.Contains(Tile))
			{
				ValidTiles.Add(Tile);
			}
			Tile->SetTileStatus(3, false, true);
		}
	}
	if (Turn == 1)
	{
		ShowValidTiles();
	}
}

void AUMGReversiGameModeBase::ShowValidTiles()
{
	if (ValidTiles.Num() > 0)
	{
		NoValidMove = 0;
		for (auto Tile : ValidTiles)
		{
			Tile->UpdateTile();
		}
	}
	else
	{
		NoValidMove++;
		SwitchTurn();
		if (NoValidMove >= 2 && !EndGame)
		{
			EndGame = true;
			GetWorldTimerManager().ClearTimer(TimeLimitHandler);

			if (EndingWidgetClass)
			{
				ChangeMenuWidget(EndingWidgetClass);
			}
		}
	}
}

void AUMGReversiGameModeBase::GetAllSurroundTiles(UUMGReversiTile* TTile)
{
	for (int32 I = 0; I < 8; I++)
	{
		int32 Index = GetDirCheck(I, AllTiles.IndexOfByKey(TTile));
		if (Index >= 0 && Index < AllTiles.Num())
		{
			if (AllTiles[Index]->GetState() == 0)
			{
				if (!SurroundTiles.Contains(AllTiles[Index]))
				{
					SurroundTiles.Add(AllTiles[Index]);
				}
			}
		}
	}
}

void AUMGReversiGameModeBase::RemoveSurroundTiles(UUMGReversiTile* TTile)
{
	if (SurroundTiles.Contains(TTile))
	{
		SurroundTiles.Remove(TTile);
	}
}

void AUMGReversiGameModeBase::RemoveValidTile(UUMGReversiTile* TTile)
{
	if (ValidTiles.Contains(TTile))
	{
		ValidTiles.Remove(TTile);
	}
}

int32 AUMGReversiGameModeBase::GetDirCheck(int32 DirCheck, int32 SelectedIndex)
{
	switch (DirCheck)
	{
	case 0:
		return SelectedIndex + 1;
		break;
	case 1:
		return SelectedIndex + Size + 1;
		break;
	case 2:
		return SelectedIndex + Size;
		break;
	case 3:
		return SelectedIndex + Size - 1;
		break;
	case 4:
		return SelectedIndex - 1;
		break;
	case 5:
		return SelectedIndex - Size - 1;
		break;
	case 6:
		return SelectedIndex - Size;
		break;
	case 7:
		return SelectedIndex - Size + 1;
		break;
	default:
		return 0;
		break;
	}
}

void AUMGReversiGameModeBase::CheckCapturableDiscs(UUMGReversiTile* TTile)
{
	EarnTiles.Empty();
	int32 Selected = AllTiles.IndexOfByKey(TTile);

	for (int32 I = -1; I <= 1; I++)
	{
		for (int32 J = -1; J <= 1; J++)
		{
			int32 Capture = 0;
			int32 R = Selected / Size + I;
			int32 C = Selected % Size + J;
			int32 Dir = R * Size + C;
			TArray<class UUMGReversiTile*> TempTiles;

			if (I == 0 && J == 0)
			{
				continue;
			}

			while (R >= 0 && R < Size && C >= 0 && C < Size && Dir >= 0 && Dir < AllTiles.Num())
			{
				if ((AllTiles[Dir]->GetState() == Turn && Capture == 0) || AllTiles[Dir]->GetState() == 3 || AllTiles[Dir]->GetState() == 0)
				{
					break;
				}
				if (AllTiles[Dir]->GetState() != Turn)
				{
					Capture++;
					TempTiles.Add(AllTiles[Dir]);
				}
				else if (AllTiles[Dir]->GetState() == Turn && Capture > 0)
				{
					for (auto Tile : TempTiles)
					{
						EarnTiles.Add(Tile);
					}
					break;
				}
				R += I;
				C += J;
				Dir = R * Size + C;
			}
			TempTiles.Empty();
			AllTiles[Selected]->SetCapturable(EarnTiles.Num());
		}
	}
}

void AUMGReversiGameModeBase::CaptureDiscs()
{
	for (auto Tile : EarnTiles)
	{
		Tile->SetTileStatus(Turn, Tile->GetPlaced(), Tile->GetCanMove());
		if (Tile->FlipAnimation)
		{
			Tile->PlayAnimation(Tile->FlipAnimation, 0.f, 1, EUMGSequencePlayMode::Forward, 7.f, true);
		}
		Tile->UpdateTile();
	}
}

void AUMGReversiGameModeBase::DiscCounter()
{
	NumOfBlackDiscs = 0;
	NumOfWhiteDiscs = 0;

	for (auto Tile : AllTiles)
	{
		if (Tile->GetState() == 1)
		{
			NumOfWhiteDiscs++;
		}
		else if (Tile->GetState() == 2)
		{
			NumOfBlackDiscs++;
		}
	}
	if (NumOfBlackDiscs + NumOfWhiteDiscs == AllTiles.Num() && !EndGame)
	{
		EndGame = true;
		GetWorldTimerManager().ClearTimer(TimeLimitHandler);

		if (EndingWidgetClass)
		{
			ChangeMenuWidget(EndingWidgetClass);
		}
	}
}

void AUMGReversiGameModeBase::TurnTimer()
{
	if (TimeCounter > 0)
	{
		TimeCounter -= 0.1;
	}
	else
	{
		TimeCounter = TimeLimit;
		SwitchTurn();
		AICheck();
	}
}

void AUMGReversiGameModeBase::AICheck()
{
	if (ValidTiles.Num() > 0)
	{
		int32 Capturable = ValidTiles[0]->GetCapturable();
		UUMGReversiTile* TTile = ValidTiles[0];
		for (auto Tile : ValidTiles)
		{
			if (NumOfBlackDiscs + NumOfWhiteDiscs > 20)
			{
				if (Tile->GetCapturable() > Capturable)
				{
					Capturable = Tile->GetCapturable();
					TTile = Tile;
				}
			}
			else
			{
				int32 Choice = FMath::RandRange(0, 2);
				if (Choice == 1)
				{
					Capturable = Tile->GetCapturable();
					TTile = Tile;
					break;
				}
			}
		}
		TTile->PlaceDisc();
	}
}

void AUMGReversiGameModeBase::AIMove()
{
	GetWorldTimerManager().SetTimer(DelayAIHandler, this, &AUMGReversiGameModeBase::AICheck, DelayMove, false, DelayMove);
}
