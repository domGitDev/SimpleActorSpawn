#pragma once

#include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"

#include "SimpleActorSpawnFactoryNew.generated.h"


/**
 * Implements a factory for SimpleActorSpawn objects.
 */
UCLASS(hidecategories=Object)
class USimpleActorSpawnFactoryNew : public UFactory
{
	GENERATED_UCLASS_BODY()

public:

	//~ UFactory Interface

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool ShouldShowInNewMenu() const override;
};
