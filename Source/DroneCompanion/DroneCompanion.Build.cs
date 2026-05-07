// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DroneCompanion : ModuleRules
{
	public DroneCompanion(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DroneCompanion",
			"DroneCompanion/Variant_Combat",
			"DroneCompanion/Variant_Combat/AI",
			"DroneCompanion/Variant_Combat/Animation",
			"DroneCompanion/Variant_Combat/Gameplay",
			"DroneCompanion/Variant_Combat/Interfaces",
			"DroneCompanion/Variant_Combat/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
