#pragma once

#include <OSW\ISteamController001.h>

class SteamController001 : ISteamController001
{
public:
	bool Init();
	bool Shutdown();
	bool RunFrame();
	bool GetControllerState(uint32 uUnk, SteamControllerState_t * pState);
};