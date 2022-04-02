// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE425_AdVehicleGameMode.h"
#include "UE425_AdVehiclePawn.h"
#include "UE425_AdVehicleHud.h"

AUE425_AdVehicleGameMode::AUE425_AdVehicleGameMode()
{
	DefaultPawnClass = AUE425_AdVehiclePawn::StaticClass();
	HUDClass = AUE425_AdVehicleHud::StaticClass();
}
