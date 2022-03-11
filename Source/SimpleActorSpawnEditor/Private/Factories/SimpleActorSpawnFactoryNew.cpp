#include "SimpleActorSpawnFactoryNew.h"

#include "SimpleActorSpawn.h"

USimpleActorSpawnFactoryNew::USimpleActorSpawnFactoryNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = USimpleActorSpawn::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* USimpleActorSpawnFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<USimpleActorSpawn>(InParent, InClass, InName, Flags);
}


bool USimpleActorSpawnFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}

