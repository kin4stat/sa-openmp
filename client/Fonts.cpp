#include "Fonts.hpp"

Fonts::Fonts(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) Fonts::OnLostDevice() {

    return true;
}

MAKE_RET(void) Fonts::OnResetDevice() {

    return true;
}

MAKE_RET(void) Fonts::GetTextScreenSize(void* pSize, const char* szText, int nFormat) {

    return true;
}

MAKE_RET(void) Fonts::GetLittleTextScreenSize(void* pSize, const char* szText, int nFormat) {

    return true;
}

MAKE_RET(void) Fonts::Reset() {

    return true;
}

