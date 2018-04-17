// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PandemicGameMode.h"
#include "PandemicCharacter.h"
#include "UObject/ConstructorHelpers.h"

APandemicGameMode::APandemicGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
