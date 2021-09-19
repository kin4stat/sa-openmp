#include "Chat.hpp"
#include "Game.hpp"
#include "Input.hpp"

Chat::Chat(IDirect3DDevice9* pDevice, Fonts* pFontRenderer, const char* szLogPath) {

}
int Chat::GetMode() {

    return mode;
}

void Chat::SwitchMode() {
    if (mode-- == DISPLAY_MODE_OFF) mode = DISPLAY_MODE_NORMAL;
}

void Chat::RecalcFontSize() {

    return;
}

void Chat::OnLostDevice() {

    return;
}

void Chat::UpdateScrollbar() {

    return;
}

void Chat::SetPageSize(int new_page_size) {
    if (10 <= new_page_size && new_page_size <= 100) {
        page_size = new_page_size;
        UpdateScrollbar();
        timestamp_width = 1;
    }
    return;
}

void Chat::PageUp() {

}

void Chat::PageDown() {

    return;
}

void Chat::ScrollToBottom() {

    return;
}

void Chat::Scroll(int nDelta) {

    return;
}

void Chat::FilterOutInvalidChars(char* szString) {

    return;
}

void Chat::PushBack() {

    return;
}

void Chat::Log(int nType, const char* szText, const char* szPrefix) {

    return;
}

void Chat::ResetDialogControls(CDXUTDialog* pGameUi) {

    return;
}

void Chat::Render() {

    return;
}

void Chat::Draw() {

    return;
}

void Chat::RenderToSurface() {

    return;
}

void Chat::OnResetDevice() {

    return;
}

