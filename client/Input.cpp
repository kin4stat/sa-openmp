#include "Input.hpp"
#include "Game.hpp"

Input& Input::Instance() {
    return **reinterpret_cast<Input**>(GetAddress(0x26E8CC));
}

Input::Input(IDirect3DDevice9* pDevice) {

}
void Input::GetRect(Rect* pRect) {

    return;
}

void Input::Open() {

    return;
}

void Input::Close() {

    return;
}

void Input::AddRecall(const char* szString) {

    return;
}

void Input::RecallUp() {

    return;
}

void Input::RecallDown() {

    return;
}

void Input::EnableCursor() {
    if (is_enabled) Game::Instance().SetCursorMode(Game::CursorMode::DisableKeyboardAndMouse, false);
    return;
}

CMDPROC Input::GetCommandHandler(const char* szName) {
    if (!registered_cmd_count) return nullptr;
    for (int i = 0; i < registered_cmd_count; i++) {
        if (stricmp(cmd_names[i], szName) == 0) return cmd_callbacks[i];
    }
    return nullptr;
}

void Input::SetDefaultCommand(CMDPROC handler) {
    default_cb = handler;
    return;
}

void Input::AddCommand(const char* szName, CMDPROC handler) {
    if (registered_cmd_count < MAX_CLIENT_CMDS && strlen(szName) < MAX_CMD_LENGTH) {
        strcpy_s(cmd_names[registered_cmd_count], szName);
        cmd_callbacks[registered_cmd_count++] = handler;
    }
    return;
}

BOOL Input::MsgProc(int uMsg, int wParam, int lParam) {

    return BOOL{};
}

void Input::ResetDialogControls(CDXUTDialog* pGameUi) {

    return;
}

void Input::Send(const char* szString) {

    return;
}

void Input::ProcessInput() {

    return;
}

