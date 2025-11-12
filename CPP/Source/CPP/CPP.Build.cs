// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP : ModuleRules
{
	public CPP(ReadOnlyTargetRules Target) : base(Target)
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
			"CPP",
			"CPP/Variant_Platforming",
			"CPP/Variant_Platforming/Animation",
			"CPP/Variant_Combat",
			"CPP/Variant_Combat/AI",
			"CPP/Variant_Combat/Animation",
			"CPP/Variant_Combat/Gameplay",
			"CPP/Variant_Combat/Interfaces",
			"CPP/Variant_Combat/UI",
			"CPP/Variant_SideScrolling",
			"CPP/Variant_SideScrolling/AI",
			"CPP/Variant_SideScrolling/Gameplay",
			"CPP/Variant_SideScrolling/Interfaces",
			"CPP/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
