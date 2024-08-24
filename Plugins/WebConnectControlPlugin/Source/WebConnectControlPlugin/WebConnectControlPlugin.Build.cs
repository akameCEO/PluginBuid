using UnrealBuildTool;
using System.IO;

public class WebConnectControlPlugin : ModuleRules
{
    public WebConnectControlPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

        string LibWebSocketsPath = Path.Combine(ModuleDirectory, "ThirdParty/libwebsockets/MacOS");

// インクルードパスを追加
PublicIncludePaths.Add(Path.Combine(LibWebSocketsPath, "include"));

// ライブラリパスを追加
PublicSystemLibraryPaths.Add(Path.Combine(LibWebSocketsPath, "lib"));
PublicAdditionalLibraries.Add(Path.Combine(LibWebSocketsPath, "lib", "libwebsockets.a"));


        // その他の設定
        PublicDefinitions.Add("LWS_USE_LIBUV=0");  // 必要に応じて定義を追加
    }
}
