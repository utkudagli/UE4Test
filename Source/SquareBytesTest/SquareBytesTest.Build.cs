// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SquareBytesTest : ModuleRules
{
	public SquareBytesTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Json", "JsonUtilities", "UMG", "Slate", "SlateCore" });
	}
}
