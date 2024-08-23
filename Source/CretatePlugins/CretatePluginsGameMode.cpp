// Copyright Epic Games, Inc. All Rights Reserved.

#include "CretatePluginsGameMode.h"
#include "CretatePluginsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACretatePluginsGameMode::ACretatePluginsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
