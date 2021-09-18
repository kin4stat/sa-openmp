#ifndef COMMON_HPP_
#define COMMON_HPP_

#include <type_traits>
#include "kthook/include/kthook.hpp"

#define MAKE_RET(type) make_ret_t<type>

template<class T, class Enable = void>
struct make_ret {
    using type = bool;
};

template<class T>
struct make_ret<T, typename std::enable_if<!std::is_void_v<T>>::type> {
    using type = kthook::return_value<T>;
};

template <typename T>
using make_ret_t = typename make_ret<T>::type;

#define BEGIN_PACK __pragma(pack(push, 1))
#define END_PACK __pragma(pack(pop))

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
using TICK = unsigned long ;
using BOOL = int;

using GTAREF = int; // gta pool reference (scm handle)
using ID = unsigned short;     // player, vehicle, object, etc
using NUMBER = unsigned char;
using CMDPROC = void(__cdecl* )(const char*);

unsigned long GetBase();

inline unsigned long GetAddress(signed long offset) {
    return GetBase() + offset;
}

#endif // COMMON_HPP_