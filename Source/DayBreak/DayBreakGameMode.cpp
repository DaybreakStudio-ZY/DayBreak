// Copyright Epic Games, Inc. All Rights Reserved.

#include "DayBreakGameMode.h"
#include "DayBreakPlayerController.h"
#include "DayBreakCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADayBreakGameMode::ADayBreakGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADayBreakPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}