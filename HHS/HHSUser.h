#pragma once

#include "HHS.h"

enum HHSPerm
{
	Guest, Member, Moderator, Admin, Developer, Banned,
};

class HHSUser
{
public:
	bool Init();

	char *GetName();
	INT64 GetID();
	HHSPerm GetPermissions();

private:
	char Name[20];
	INT64 ID;
	HHSPerm Permissions;

};