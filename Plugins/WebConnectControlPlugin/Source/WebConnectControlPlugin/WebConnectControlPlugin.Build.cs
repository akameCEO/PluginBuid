// Copyright (c) 2024 Akame. All Rights Reserved.
using System.IO ;//  It's used to system common Module
using UnrealBuildTool;

public class WebConnectControlPlugin : ModuleRules
{
	public WebConnectControlPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"OpenSSL"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
		// Inputed libwebsockets liblary Path
		string libwebsocketsPath = Path.Combine(ModuleDirectory, "../../ThirdParty/libwebsockets");
		// Selected Client Platform (Mac)
		if (Target.Platform == UnrealTargetPlatform.Mac){
			PublicIncludePaths.Add(Path.Combine(libwebsocketsPath,"MacOS","include"));
			PublicAdditionalLibraries.Add(Path.Combine(libwebsocketsPath,"MacOS","lib","libwebsockets.dylib"));
		} // Add configurations for other platforms here (Windows, Linux, iOS, Android, etc.)
	}
}
