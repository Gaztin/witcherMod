#pragma once

#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <Psapi.h>
#include "./Windows/minhook/include/MinHook.h"

#include "../mingw.mutex.h"

#pragma comment( lib, "psapi.lib" )
#endif

#include <clocale>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>

#include <array>

#include "../mingw.future.h"
#include <limits>
#include <map>
#include <mutex>
#include <set>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>

using std::uintptr_t;
using std::size_t;
