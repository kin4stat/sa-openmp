#include "Label.hpp"

Label::Label(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) Label::OnLostDevice() {

    return true;
}

MAKE_RET(void) Label::OnResetDevice() {

    return true;
}

MAKE_RET(BOOL) Label::HasNoObstacles(CVector position) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Label::Begin() {

    return true;
}

MAKE_RET(void) Label::End() {

    return true;
}

