#pragma once

class HHSCommon
{
public:
	static void Init();

	static HHSNetwork *GetNetwork();

private:
	static HHSNetwork *Network;


};