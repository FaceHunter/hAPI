#pragma once

#include <WinSock2.h>

class HHSNetwork
{
public:
	bool Init();

	bool VerifyAppID(UINT32 ID);

private:
	SOCKET Com;


};