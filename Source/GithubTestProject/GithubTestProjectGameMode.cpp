// Copyright Epic Games, Inc. All Rights Reserved.

#include "GithubTestProjectGameMode.h"
#include "GithubTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGithubTestProjectGameMode::AGithubTestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
