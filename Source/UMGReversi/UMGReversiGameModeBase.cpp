// Copyright Epic Games, Inc. All Rights Reserved.


#include "UMGReversiGameModeBase.h"
#include "UMGReversiTile.h"
#include "UMGReversiController.h"
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
}

int32 AUMGReversiGameModeBase::GetTurn()
{
	return Turn;
}

void AUMGReversiGameModeBase::CheckValidMove(UUMGReversiTile* TTile)
{
	CheckSurroundTile(TTile);
	ShowValidTiles();
}

void AUMGReversiGameModeBase::CheckSurroundTile(UUMGReversiTile* TTile)
{
	int32 Selected = AllTiles.IndexOfByKey(TTile);

	for (int32 i = 0; i < 8; i++)
	{
		int32 Index = GetDirCheck(i, Selected);

		if (Index < 0 || Index >= Size * Size)
		{
			continue;
		}
		else if (Selected % Size == 0 && (i == 3 || i == 4 || i == 5))
		{
			continue;
		}
		else if (Selected % Size == Size - 1 && (i == 0 || i == 1 || i == 7))
		{
			continue;
		}
		else
		{
			if (!AllTiles[Index]->GetPlaced() && CheckPossibilityEarn(Index))
			{
				UE_LOG(LogTemp, Warning, TEXT("test check earn"));
				if (!ValidTiles.Contains(AllTiles[Index]))
				{
					ValidTiles.Add(AllTiles[Index]);
				}
				if (Turn == 1)
				{
					AllTiles[Index]->SetTileStatus(3, false, true, AllTiles[Index]->GetCanWhiteMove());
				}
				else
				{
					AllTiles[Index]->SetTileStatus(3, false, AllTiles[Index]->GetCanBlackMove(), true);
				}
			}
		}
	}
}

bool AUMGReversiGameModeBase::CheckPossibilityEarn(int32 TIndex)
{
	bool PiecesToChange = false;
	int Capture = 0;
	int32 Row = TIndex / Size;
	int32 Col = TIndex % Size;
	int32 Index;

	for (int32 i = -1; i <= 1; i++)
	{
		for (int32 j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
			{
				continue;
			}

			Row += i;
			Col += j;
			Index = Row * Size + Col;
			Capture = 0;

			while (Row >= 0 && Row < Size && Col >= 0 && Col < Size)
			{
				UE_LOG(LogTemp, Warning, TEXT("Index %d || TIndex %d"), Index, TIndex);
				UE_LOG(LogTemp, Warning, TEXT("Index State %d || Turn %d"), AllTiles[Index]->GetState(), Turn);

				if (AllTiles[Index]->GetState() == 0)
				{
					Capture = 0;
					break;
				}

				if (AllTiles[Index]->GetState() != Turn)
				{
					UE_LOG(LogTemp, Warning, TEXT("capture %d"),Capture);
					Capture++;
				}
				else if (AllTiles[Index]->GetState() == Turn && Capture > 0)
				{

					UE_LOG(LogTemp, Warning, TEXT("TRUE"));
					PiecesToChange = true;
					break;
				}

				Row += i;
				Col += j;
				Index = Row * Size + Col;
			}
		}
	}
	return PiecesToChange;


	//for (int32 i = -1; i <= 1; ++i)
	//{
	//	for (int32 j = -1; j <= 1; ++j)
	//	{
	//		// Skip the case where both i and j are zero.
	//		if (i == 0 && j == 0)
	//		{
	//			continue;
	//		}

	//		// Check the opponent pieces in this direction.
	//		int32 r = Row + i;
	//		int32 c = Column + j;
	//		bool PiecesToChange = false;

	//		while (r >= 0 && r < Size && c >= 0 && c < Size)
	//		{
	//			if (CBP->Board[r][c] == TileState::EMPTY)
	//			{
	//				break;
	//			}

	//			if (CBP->Board[r][c] == TilesState)
	//			{
	//				PiecesToChange = true;
	//				break;
	//			}

	//			r += i;
	//			c += j;
	//		}

	//		// Flip the opponent pieces if necessary.
	//		if (PiecesToChange)
	//		{
	//			r = Row + i;
	//			c = Column + j;

	//			while (CBP->Board[r][c] == OpponentState)
	//			{
	//				CBP->Board[r][c] = TilesState;
	//				r += i;
	//				c += j;
	//			}
	//		}
	//	}
	//}



}

void AUMGReversiGameModeBase::ShowValidTiles()
{
	if (ValidTiles.Num() > 0)
	{
		for (auto Tile : ValidTiles)
		{
			Tile->UpdateTile();
		}
	}
}

void AUMGReversiGameModeBase::RemoveValidTile(UUMGReversiTile* TTile)
{
	ValidTiles.Remove(TTile);
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
}

