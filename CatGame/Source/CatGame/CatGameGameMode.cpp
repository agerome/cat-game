// Copyright Epic Games, Inc. All Rights Reserved.

#include "CatGameGameMode.h"
#include "CatGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACatGameGameMode::ACatGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
