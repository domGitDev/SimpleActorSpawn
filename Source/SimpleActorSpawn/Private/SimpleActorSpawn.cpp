#include "SimpleActorSpawn.h"

#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/World.h"
#include "PackageTools.h"
#include "ObjectTools.h"
#include "AssetRegistryModule.h"


bool USimpleActorSpawn::SpawnActor(const FName& AssetPath)
{
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
    FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(AssetPath, false);

    bool Success = false;
    if(UStaticMesh* StaticMesh = Cast<UStaticMesh>(AssetData.GetAsset()))
    {
        // Spawn actor from asset to world outliner
        UWorld* World = GEditor->GetEditorWorldContext().World();
        FActorSpawnParameters SpawnParams;
        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
        SpawnParams.bDeferConstruction = true;
        SpawnParams.bAllowDuringConstructionScript = true;
        SpawnParams.Name = MakeUniqueObjectName(World, AActor::StaticClass(), AssetData.AssetName);

        // place actor a origin
        FVector Position = FVector::ZeroVector; 
        FVector Rotation = FVector::ZeroVector;
        AStaticMeshActor* MeshActor = World->SpawnActor<AStaticMeshActor>(
                                                    AStaticMeshActor::StaticClass(), Position, 
                                                    FRotator::MakeFromEuler(Rotation), SpawnParams);
        if (MeshActor)
        {
            Success = MeshActor->GetStaticMeshComponent()->SetStaticMesh(StaticMesh);
            ObjectPath = Success ? AssetPath : "";
        }
    }

    return Success;
}

