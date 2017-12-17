// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UV_Dilation_TPHUD.generated.h"

UCLASS()
class AUV_Dilation_TPHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUV_Dilation_TPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

