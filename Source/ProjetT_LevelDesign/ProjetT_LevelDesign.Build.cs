// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetT_LevelDesign : ModuleRules
{
	public ProjetT_LevelDesign(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
