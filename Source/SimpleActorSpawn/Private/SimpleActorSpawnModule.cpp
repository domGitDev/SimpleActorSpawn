
#include "HAL/FileManager.h"
#include "HAL/PlatformProcess.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"

#include "SimpleActorSpawn.h"

DEFINE_LOG_CATEGORY(LogSimpleActorSpawn)

class FSimpleActorSpawnModule : public IModuleInterface
{

public:
	FSimpleActorSpawnModule() {}

    /** IModuleInterface implementation */
	virtual void StartupModule() override
	{

    }

    virtual void ShutdownModule() override
	{
		
	}

	virtual bool SupportsDynamicReloading() override
	{
		return true;
	}
};

IMPLEMENT_MODULE(FSimpleActorSpawnModule, SimpleActorSpawn)

