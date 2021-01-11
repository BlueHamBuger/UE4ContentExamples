// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class ContentExamples : ModuleRules
{
	public ContentExamples(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		PrivateDependencyModuleNames.AddRange(new string[] { "DlgSystem" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");
		//"../Plugins/DlgSystem/Source/DlgSystem/Public"
		// PrivateIncludePaths.Add("../Plugins/DlgSystem/Source/DlgSystem/Public");
		// AddThirdPartyPrivateStaticDependencies(new string[] {  });
		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
