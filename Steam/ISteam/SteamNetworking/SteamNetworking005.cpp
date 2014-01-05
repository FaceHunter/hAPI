#include <STDInc.h>

bool SteamNetworking005::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iVirtualPort)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::IsP2PPacketAvailable(uint32 *pcubMsgSize, int iVirtualPort)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::ReadP2PPacket(void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iVirtualPort)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::CloseP2PChannelWithUser(CSteamID steamIDRemote, int iVirtualPort)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t *pConnectionState)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::AllowP2PPacketRelay(bool bAllow)
{
	HHSDBG();
	return true;
}

SNetListenSocket_t SteamNetworking005::CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	HHSDBG();
	return NULL;
}

SNetSocket_t SteamNetworking005::CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	HHSDBG();
	return NULL;
}
SNetSocket_t SteamNetworking005::CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)
{
	HHSDBG();
	return NULL;
}

bool SteamNetworking005::DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	HHSDBG();
	return true;
}
bool SteamNetworking005::DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::SendDataOnSocket(SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 *pcubMsgSize)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::RetrieveDataFromSocket(SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::RetrieveData(SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::GetSocketInfo(SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote)
{
	HHSDBG();
	return true;
}

bool SteamNetworking005::GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort)
{
	HHSDBG();
	return true;
}

ESNetSocketConnectionType SteamNetworking005::GetSocketConnectionType(SNetSocket_t hSocket)
{
	HHSDBG();
	return ESNetSocketConnectionType::k_ESNetSocketConnectionTypeUDP;
}

int SteamNetworking005::GetMaxPacketSize(SNetSocket_t hSocket)
{
	HHSDBG();
	return 255;
}