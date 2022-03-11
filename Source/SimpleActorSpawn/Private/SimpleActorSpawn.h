#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"
#include "MeshDescription.h"
#include "Stats/Stats.h"

#include "SimpleActorSpawn.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSimpleActorSpawn, Log, All)

UCLASS(BlueprintType, hidecategories=(Object))
class SIMPLEACTORSPAWN_API USimpleActorSpawn
	: public UObject
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Asset Setter")
	bool SpawnActor(const FName& AssetPath);

private:
	UPROPERTY()
	FName ObjectPath;
};

