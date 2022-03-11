
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SimpleActorSpawn : ModuleRules
	{
		public SimpleActorSpawn(ReadOnlyTargetRules Target) : base(Target)
		{
			// compile settings
			bLegalToDistributeObjectCode = true;
			CppStandard = CppStandardVersion.Cpp17;
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"Slate",
					"SlateCore",
					"Imath",
					"AssetTools",
					"UnrealEd",
					"InputCore",
				});

			PublicDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
				});

			PrivateIncludePaths.AddRange(
				new string[] {
					"SimpleActorSpawn/Private",
				});
		}
	}
}

			
