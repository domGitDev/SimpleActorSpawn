# SimpleSpawnActor Plugin - UE5

Simple plugin that spawn actor at origin from given static mesh asset

#### HOW TO BUILD ON WINDOWS

- Build SimpleActorSpawn
```
"C:/Program Files/Epic Games/UE_5.0/Engine/Build/BatchFiles/RunUAT.bat" BuildPlugin -Plugin="[PLUGIN_SOURCE_PATH]/SimpleActorSpawn/SimpleActorSpawn.uplugin" -Package="[OUTPUT_BUILD_DIR]/SimpleActorSpawn" -Rocket
```

#### HOW TO BUILD ON OSX

- Build SimpleActorSpawn
```
"/Users/Shared/Epic Games/UE_5.0/Engine/Build/BatchFiles/RunUAT.sh" BuildPlugin -Plugin="[PLUGIN_SOURCE_PATH]/SimpleActorSpawn/SimpleActorSpawn.uplugin" -Package="[OUTPUT_BUILD_DIR]/SimpleActorSpawn" -Rocket
```

# Simple test via python

```python
import unreal
sp = unreal.AssetToolsHelpers.get_asset_tools().create_asset("Spawner", "/Game/Spwaning", unreal.SimpleActorSpawn, unreal.SimpleActorSpawnFactoryNew())
sp.spawn_actor('/Game/StarterContent/Architecture/Wall_400x200.Wall_400x200')
```