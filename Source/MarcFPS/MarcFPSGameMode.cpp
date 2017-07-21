// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MarcFPSGameMode.h"
#include "MarcFPSHUD.h"
#include "MarcFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMarcFPSGameMode::AMarcFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMarcFPSHUD::StaticClass();
}
