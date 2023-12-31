// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloSlime3GameMode.h"
#include "HelloSlime3Character.h"
#include "UObject/ConstructorHelpers.h"

AHelloSlime3GameMode::AHelloSlime3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
