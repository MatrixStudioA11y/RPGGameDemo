// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGGameDemoGameMode.h"
#include "RPGGameDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPGGameDemoGameMode::ARPGGameDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
