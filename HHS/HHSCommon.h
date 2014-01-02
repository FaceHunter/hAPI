#pragma once
#include "HHS.h"

class HHSCommon
{
public:
	static void Init();

	static HHSNetwork *GetNetwork();
	static HHSUser *GetUser();

private:
	static HHSNetwork *Network;
	static HHSUser *User;

};