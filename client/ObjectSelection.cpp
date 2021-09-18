#include "ObjectSelection.hpp"

MAKE_RET(ID) ObjectSelection::DefineObject() {

    return kthook::return_value<ID>::make_true();
}

MAKE_RET(void) ObjectSelection::DrawLabels() {

    return true;
}

MAKE_RET(void) ObjectSelection::Enable(BOOL bEnable) {

    return true;
}

MAKE_RET(void) ObjectSelection::Draw() {

    return true;
}

MAKE_RET(void) ObjectSelection::SendNotification() {

    return true;
}

MAKE_RET(BOOL) ObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {

    return kthook::return_value<BOOL>::make_true();
}

