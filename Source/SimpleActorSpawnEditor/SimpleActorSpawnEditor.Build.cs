
namespace UnrealBuildTool.Rules
{
    public class SimpleActorSpawnEditor : ModuleRules
    {
        public SimpleActorSpawnEditor(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            DynamicallyLoadedModuleNames.AddRange(
                new string[] {
                    "AssetTools",
                    "MainFrame",
                });

            PrivateIncludePaths.AddRange(
                new string[] {
                    "SimpleActorSpawn/Private",
                    //"SimpleActorSpawnEditor/Private/AssetTools",
                    "SimpleActorSpawnEditor/Private/Factories",
                    //"SimpleActorSpawnEditor/Private/Shared",
                    //"SimpleActorSpawnEditor/Private/Styles",
                    //"SimpleActorSpawnEditor/Private/Toolkits",
                    //"SimpleActorSpawnEditor/Private/Widgets",
                });

            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "ContentBrowser",
                    "Core",
                    "CoreUObject",
                    "EditorStyle",
                    "Engine",
                    "InputCore",
                    "Projects",
                    "Slate",
                    "SlateCore",
                    "SimpleActorSpawn",
                    "UnrealEd",
                });

            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "AssetTools",
                    "UnrealEd",
                    "SimpleActorSpawn",
                });
        }
    }
}
