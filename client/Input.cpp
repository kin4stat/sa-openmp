#include "Input.hpp"

Input::Input(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) Input::GetRect(CRect* pRect) {

    return true;
}

MAKE_RET(void) Input::Open() {

    return true;
}

MAKE_RET(void) Input::Close() {

    return true;
}

MAKE_RET(void) Input::AddRecall(const char* szString) {

    return true;
}

MAKE_RET(void) Input::RecallUp() {

    return true;
}

MAKE_RET(void) Input::RecallDown() {

    return true;
}

MAKE_RET(void) Input::EnableCursor() {

    return true;
}

MAKE_RET(CMDPROC) Input::GetCommandHandler(const char* szName) {

    return kthook::return_value<CMDPROC>::make_true();
}

MAKE_RET(void) Input::SetDefaultCommand(CMDPROC handler) {

    return true;
}

MAKE_RET(void) Input::AddCommand(const char* szName, CMDPROC handler) {

    return true;
}

MAKE_RET(BOOL) Input::MsgProc(int uMsg, int wParam, int lParam) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Input::ResetDialogControls(CDXUTDialog* pGameUi) {

    return true;
}

MAKE_RET(void) Input::Send(const char* szString) {

    return true;
}

MAKE_RET(void) Input::ProcessInput() {

    return true;
}

