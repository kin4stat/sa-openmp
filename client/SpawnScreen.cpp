#include "SpawnScreen.hpp"

SpawnScreen::SpawnScreen(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) SpawnScreen::SetText(const char* szString) {

    return true;
}

MAKE_RET(void) SpawnScreen::OnResetDevice() {

    return true;
}

MAKE_RET(void) SpawnScreen::OnLostDevice() {

    return true;
}

MAKE_RET(void) SpawnScreen::Draw() {

    return true;
}

