#include <STDInc.h>

uint32 SteamUtils006::GetSecondsSinceAppActive()
{
	HHSDBG();
	return 999;
}
uint32 SteamUtils006::GetSecondsSinceComputerActive()
{
	HHSDBG();
	return 9999;
}

EUniverse SteamUtils006::GetConnectedUniverse()
{
	HHSDBG();
	return EUniverse::k_EUniversePublic;
}

uint32 SteamUtils006::GetServerRealTime()
{
	time_t Clock;
	HHSDBG();
	time(&Clock);
	return Clock;
}

const char *SteamUtils006::GetIPCountry()
{
	HHSDBG();
	return "se";
}

bool SteamUtils006::GetImageSize(int iImage, uint32 *pnWidth, uint32 *pnHeight)
{
	HHSDBG();
	return true;
}

bool SteamUtils006::GetImageRGBA(int iImage, uint8 *pubDest, int nDestBufferSize)
{
	HHSDBG();
	return true;
}

bool SteamUtils006::GetCSERIPPort(uint32 *unIP, uint16 *usPort)
{
	HHSDBG();
	return true;
}

uint8 SteamUtils006::GetCurrentBatteryPower()
{
	HHSDBG();
	return 100;
}

uint32 SteamUtils006::GetAppID()
{
	HHSDBG();
	return SteamCommon::GetSteamAppID();
}

void SteamUtils006::SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)
{
	HHSDBG();
}

bool SteamUtils006::IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed)
{
	HHSDBG();
	return true; // What could go wrong?
}
ESteamAPICallFailure SteamUtils006::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)
{
	HHSDBG();
	return ESteamAPICallFailure::k_ESteamAPICallFailureNone;
}
bool SteamUtils006::GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
	HHSDBG();
	return true;
}

void SteamUtils006::RunFrame()
{
	HHSDBG();
	Callbacks::Run();
}

uint32 SteamUtils006::GetIPCCallCount()
{
	HHSDBG();
	return 1338;
}

void SteamUtils006::SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)
{
	HHSDBG();
}

bool SteamUtils006::IsOverlayEnabled()
{
	HHSDBG();
	return false; // No me gusta..
}

bool SteamUtils006::BOverlayNeedsPresent()
{
	HHSDBG();
	return false;
}

SteamAPICall_t SteamUtils006::CheckFileSignature(const char *szFileName)
{
	HHSDBG();
	return NULL;
}

bool SteamUtils006::ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eInputLineMode, const char *szText, uint32 uMaxLength)
{
	HHSDBG();
	return true;
}
uint32 SteamUtils006::GetEnteredGamepadTextLength()
{
	HHSDBG();
	return NULL;
}
bool SteamUtils006::GetEnteredGamepadTextInput(char *pchValue, uint32 cchValueMax)
{
	HHSDBG();
	return 0;
}

const char *SteamUtils006::GetSteamUILanguage()
{
	HHSDBG();
	return "se";
}