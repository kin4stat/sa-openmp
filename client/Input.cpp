#include "Input.hpp"

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

    return;
}

CMDPROC Input::GetCommandHandler(const char* szName) {

    return CMDPROC{};
}

void Input::SetDefaultCommand(CMDPROC handler) {

    return;
}

void Input::AddCommand(const char* szName, CMDPROC handler) {

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

