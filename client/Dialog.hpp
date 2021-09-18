#ifndef DIALOG_HPP_
#define DIALOG_HPP_

#include "common.hpp"

BEGIN_PACK

class Dialog {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetScreenRect)> GetScreenRect_hook{ GetAddress(0x6EF60) }; GetScreenRect_hook.before.connect(GetScreenRect);
        static kthook::kthook_t<decltype(&GetTextScreenLength)> GetTextScreenLength_hook{ GetAddress(0x6EF90) }; GetTextScreenLength_hook.before.connect(GetTextScreenLength);
        static kthook::kthook_t<decltype(&Hide)> Hide_hook{ GetAddress(0x6F110) }; Hide_hook.before.connect(Hide);
        static kthook::kthook_t<decltype(&ResetDialogControls)> ResetDialogControls_hook{ GetAddress(0x6F2D0) }; ResetDialogControls_hook.before.connect(ResetDialogControls);
        static kthook::kthook_t<decltype(&Show)> Show_hook{ GetAddress(0x6F8C0) }; Show_hook.before.connect(Show);
        static kthook::kthook_t<decltype(&Close)> Close_hook{ GetAddress(0x6FF40) }; Close_hook.before.connect(Close);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x6F140) }; Draw_hook.before.connect(Draw);
    }


    enum DialogType {
        DIALOG_MESSAGEBOX,
        DIALOG_INPUT,
        DIALOG_LIST,
        DIALOG_PASSWORD,
        DIALOG_TABLIST,
        DIALOG_HEADERSLIST
    };

    IDirect3DDevice9* m_pDevice;
    unsigned long     m_position[2];
    unsigned long     m_size[2];
    unsigned long     m_buttonOffset[2];
    CDXUTDialog*      m_pDialog;
    CDXUTListBox*     m_pListbox;
    CDXUTIMEEditBox*  m_pEditbox;
    BOOL              m_bIsActive;
    int               m_nType;
    unsigned int      m_nId;
    char*             m_szText;
    unsigned long     m_textSize[2];
    char              m_szCaption[65];
    BOOL              m_bServerside;
    char              pad[536];

    
    Dialog(IDirect3DDevice9* pDevice);
    ~Dialog();

    MAKE_RET(void) GetScreenRect(CRect* pRect);
    MAKE_RET(int) GetTextScreenLength(const char* szString);
    MAKE_RET(void) Hide();
    MAKE_RET(void) ResetDialogControls(CDXUTDialog* pDialog);
    MAKE_RET(void) Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside);
    MAKE_RET(void) Close(char nProcessButton);
    MAKE_RET(void) Draw();
};

END_PACK

#endif // DIALOG_HPP_