// Copyright Epic Games, Inc. All Rights Reserved.

#include "SquareBytesTestGameMode.h"
#include "SquareBytesTestHUD.h"
#include "SquareBytesTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASquareBytesTestGameMode::ASquareBytesTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASquareBytesTestHUD::StaticClass();
}
