// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UV_Dilation_TPTarget : TargetRules
{
	public UV_Dilation_TPTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("UV_Dilation_TP");
	}
}
