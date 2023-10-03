#ifndef COMMON_HPP_
#define COMMON_HPP_

#include <cstdint>

#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define BEGIN_PACK __pragma(pack(push, 1))
#define END_PACK __pragma(pack(pop))

VALIDATE_SIZE(bool, 1);
VALIDATE_SIZE(char, 1);
VALIDATE_SIZE(short, 2);
VALIDATE_SIZE(int, 4);
VALIDATE_SIZE(float, 4);
VALIDATE_SIZE(long long, 8);

// Basic types for structures describing
typedef int8_t   int8;
typedef int16_t  int16;
typedef int32_t  int32;
typedef int64_t  int64;
typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef uint8  bool8;
typedef uint16 bool16;

//TODO: 
// typedef uint32 bool32;

#include <Windows.h>
#include "reversiblehooks/HookSystem.h"
#include "reversiblehooks/ReversibleHooks.h"

struct ID3DXFont;
struct ID3DXSprite;
struct ID3DXRenderToSurface;

struct IDirect3DSurface9;
struct IDirect3DTexture9;
struct IDirect3DDevice9;
struct IDirect3DStateBlock9;

class CDXUTDialog;
class CDXUTListBox;
class CDXUTEditBox;
class CDXUTScrollBar;
class CDXUTIMEEditBox;

using D3DCOLOR = unsigned long;
using TICK = unsigned long;
using BOOL = int;

using GTAREF = int;         // gta pool reference (scm handle)
using ID = unsigned short;  // player, vehicle, object, etc
using NUMBER = unsigned char;
using CMDPROC = void(__cdecl*)(const char*);

unsigned long GetBase();

inline unsigned long GetAddress(signed long offset) {
    return GetBase() + offset;
}

#endif  // COMMON_HPP_