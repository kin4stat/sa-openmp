#include "TextDrawSelection.hpp"

MAKE_RET(void) TextDrawSelection::ResetTextDraws() {

    return true;
}

MAKE_RET(void) TextDrawSelection::RawProcess() {

    return true;
}

MAKE_RET(void) TextDrawSelection::Process() {

    return true;
}

MAKE_RET(void) TextDrawSelection::SendNotification() {

    return true;
}

MAKE_RET(void) TextDrawSelection::Disable() {

    return true;
}

MAKE_RET(BOOL) TextDrawSelection::MsgProc(int uMsg, int wParam, int lParam) {

    return kthook::return_value<BOOL>::make_true();
}

