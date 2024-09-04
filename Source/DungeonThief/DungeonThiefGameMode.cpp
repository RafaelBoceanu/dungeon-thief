// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonThiefGameMode.h"
#include "DungeonThiefCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonThiefGameMode::ADungeonThiefGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
