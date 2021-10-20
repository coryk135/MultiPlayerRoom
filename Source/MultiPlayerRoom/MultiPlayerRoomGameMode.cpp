// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlayerRoomGameMode.h"
#include "MultiPlayerRoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlayerRoomGameMode::AMultiPlayerRoomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
