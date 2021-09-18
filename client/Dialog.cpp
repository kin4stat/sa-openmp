#include "Dialog.hpp"

Dialog::Dialog(IDirect3DDevice9* pDevice) {

}
MAKE_RET(void) Dialog::GetScreenRect(CRect* pRect) {

    return true;
}

MAKE_RET(int) Dialog::GetTextScreenLength(const char* szString) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Dialog::Hide() {

    return true;
}

MAKE_RET(void) Dialog::ResetDialogControls(CDXUTDialog* pDialog) {

    return true;
}

MAKE_RET(void) Dialog::Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside) {

    return true;
}

MAKE_RET(void) Dialog::Close(char nProcessButton) {

    return true;
}

MAKE_RET(void) Dialog::Draw() {

    return true;
}

