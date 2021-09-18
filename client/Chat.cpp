#include "Chat.hpp"

Chat::Chat(IDirect3DDevice9* pDevice, CFonts* pFontRenderer, const char* szLogPath) {

}
MAKE_RET(int) Chat::GetMode() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Chat::SwitchMode() {

    return true;
}

MAKE_RET(void) Chat::RecalcFontSize() {

    return true;
}

MAKE_RET(void) Chat::OnLostDevice() {

    return true;
}

MAKE_RET(void) Chat::UpdateScrollbar() {

    return true;
}

MAKE_RET(void) Chat::SetPageSize(int nValue) {

    return true;
}

MAKE_RET(void) Chat::PageUp() {

    return true;
}

MAKE_RET(void) Chat::PageDown() {

    return true;
}

MAKE_RET(void) Chat::ScrollToBottom() {

    return true;
}

MAKE_RET(void) Chat::Scroll(int nDelta) {

    return true;
}

MAKE_RET(void) Chat::FilterOutInvalidChars(char* szString) {

    return true;
}

MAKE_RET(void) Chat::PushBack() {

    return true;
}

MAKE_RET(void) Chat::Log(int nType, const char* szText, const char* szPrefix) {

    return true;
}

MAKE_RET(void) Chat::ResetDialogControls(CDXUTDialog* pGameUi) {

    return true;
}

MAKE_RET(void) Chat::Render() {

    return true;
}

MAKE_RET(void) Chat::Draw() {

    return true;
}

MAKE_RET(void) Chat::RenderToSurface() {

    return true;
}

MAKE_RET(void) Chat::OnResetDevice() {

    return true;
}

