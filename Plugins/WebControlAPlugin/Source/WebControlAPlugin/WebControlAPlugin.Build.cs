using UnrealBuildTool;
using System.IO;

public class WebControlAPlugin : ModuleRules
{
    public WebControlAPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        // Public include paths
        PublicIncludePaths.AddRange(
            new string[] {
                // ... add public include paths required here ...
            }
        );
                
        // Private include paths
        PrivateIncludePaths.AddRange(
            new string[] {
                // ... add other private include paths required here ...
            }
        );
            
        // Public dependencies
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core"
                // ... add other public dependencies that you statically link with here ...
            }
        );

        // Libwebsockets の設定
        string LibWebSocketsPath = Path.Combine(ModuleDirectory, "ThirdParty/libwebsockets/MacOS");
        PublicIncludePaths.Add(Path.Combine(LibWebSocketsPath, "include"));
        PublicSystemLibraryPaths.Add(Path.Combine(LibWebSocketsPath, "lib"));
        PublicAdditionalLibraries.Add(Path.Combine(LibWebSocketsPath, "lib", "libwebsockets.a")); 

        // OpenSSL の設定
        string OpenSSLPath = Path.Combine(ModuleDirectory, "ThirdParty/OpenSSL");
        PublicIncludePaths.Add(Path.Combine(OpenSSLPath, "include"));
        PublicSystemLibraryPaths.Add(Path.Combine(OpenSSLPath, "lib"));

        // Mac の場合のライブラリ設定
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "lib", "libssl.a"));
            PublicAdditionalLibraries.Add(Path.Combine(OpenSSLPath, "lib", "libcrypto.a"));
        }
        // 他のプラットフォームの設定も必要に応じて追加
        
        // Private dependencies
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore"
                // Unreal EngineのOpenSSLモジュールを使わない場合、ここから "OpenSSL" を削除
            }
        );
        
        // Dynamically loaded modules
        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // ... add any modules that your module loads dynamically here ...
            }
        );
    }
}
