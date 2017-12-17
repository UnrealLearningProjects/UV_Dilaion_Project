// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UV_Dilation_TPGameMode.h"
#include "UV_Dilation_TPHUD.h"
#include "UV_Dilation_TPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUV_Dilation_TPGameMode::AUV_Dilation_TPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUV_Dilation_TPHUD::StaticClass();
}
