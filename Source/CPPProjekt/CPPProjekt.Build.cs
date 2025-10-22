// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPProjekt : ModuleRules
{
	public CPPProjekt(ReadOnlyTargetRules Target) : base(Target)
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
			"CPPProjekt",
			"CPPProjekt/Variant_Platforming",
			"CPPProjekt/Variant_Platforming/Animation",
			"CPPProjekt/Variant_Combat",
			"CPPProjekt/Variant_Combat/AI",
			"CPPProjekt/Variant_Combat/Animation",
			"CPPProjekt/Variant_Combat/Gameplay",
			"CPPProjekt/Variant_Combat/Interfaces",
			"CPPProjekt/Variant_Combat/UI",
			"CPPProjekt/Variant_SideScrolling",
			"CPPProjekt/Variant_SideScrolling/AI",
			"CPPProjekt/Variant_SideScrolling/Gameplay",
			"CPPProjekt/Variant_SideScrolling/Interfaces",
			"CPPProjekt/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
