// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutoMaterialGameMode.h"
#include "AutoMaterialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutoMaterialGameMode::AAutoMaterialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
