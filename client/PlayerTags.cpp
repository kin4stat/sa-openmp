#include "PlayerTags.hpp"

PlayerTags::PlayerTags(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) PlayerTags::EndHealthBar() {

    return true;
}

MAKE_RET(void) PlayerTags::BeginLabel() {

    return true;
}

MAKE_RET(void) PlayerTags::EndLabel() {

    return true;
}

MAKE_RET(void) PlayerTags::DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera) {

    return true;
}

MAKE_RET(void) PlayerTags::OnLostDevice() {

    return true;
}

MAKE_RET(void) PlayerTags::OnResetDevice() {

    return true;
}

MAKE_RET(void) PlayerTags::BeginHealthBar() {

    return true;
}

