#include "LicensePlate.hpp"

LicensePlate::LicensePlate(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) LicensePlate::OnLostDevice() {

    return true;
}

MAKE_RET(void) LicensePlate::OnResetDevice() {

    return true;
}

MAKE_RET(IDirect3DTexture9*) LicensePlate::Create(const char* szText) {

    return kthook::return_value<IDirect3DTexture9*>::make_true();
}

