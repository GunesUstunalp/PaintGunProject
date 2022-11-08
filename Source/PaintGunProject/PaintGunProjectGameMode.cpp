// Copyright Epic Games, Inc. All Rights Reserved.

#include "PaintGunProjectGameMode.h"
#include "PaintGunProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintGunProjectGameMode::APaintGunProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
