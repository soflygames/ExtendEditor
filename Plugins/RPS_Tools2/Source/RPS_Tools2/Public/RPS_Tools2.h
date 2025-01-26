

#pragma once

#include "Modules/ModuleManager.h"

class FRPS_Tools2Module : public IModuleInterface
{
	public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};