// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TopSlider.h"
#include "TopSliderGameMode.h"
#include "TopSliderPlayerController.h"
#include "TopSliderCharacter.h"

ATopSliderGameMode::ATopSliderGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopSliderPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}