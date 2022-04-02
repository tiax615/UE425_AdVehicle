// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE425_AdVehicleHud.generated.h"

UCLASS(config = Game)
class AUE425_AdVehicleHud : public AHUD
{
	GENERATED_BODY()

public:
	AUE425_AdVehicleHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
