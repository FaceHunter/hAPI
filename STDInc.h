// General includes.

#pragma once

#define DEVBUILD

#ifndef WIN32_LEAN_AND_MEAN
#define	WIN32_LEAN_AND_MEAN
#endif

#ifndef _CRT_SECURE_NO_WARNINGS
#define	_CRT_SECURE_NO_WARNINGS
#endif

#ifdef DEVBUILD
#define HHSDBG() Log::Debug(__FILE__, "%s()", __FUNCTION__)
#else
#define HHSDBG()
#endif

#include <Windows.h>
#include <stdio.h>
#include <stdint.h>

#include "Utils\Log.h"
#include "Steam\Steam.h"