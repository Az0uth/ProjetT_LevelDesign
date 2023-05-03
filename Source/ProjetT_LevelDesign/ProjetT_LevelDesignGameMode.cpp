// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetT_LevelDesignGameMode.h"
#include "ProjetT_LevelDesignCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetT_LevelDesignGameMode::AProjetT_LevelDesignGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
