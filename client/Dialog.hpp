#ifndef DIALOG_HPP_
#define DIALOG_HPP_

#include "common.hpp"
#include "Rect.hpp"

BEGIN_PACK

class Dialog {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Dialog", "GetScreenRect", GetAddress(0x6EF60), &Dialog::GetScreenRect);
        ReversibleHooks::Install("Dialog", "GetTextScreenLength", GetAddress(0x6EF90), &Dialog::GetTextScreenLength);
        ReversibleHooks::Install("Dialog", "Hide", GetAddress(0x6F110), &Dialog::Hide);
        ReversibleHooks::Install("Dialog", "ResetDialogControls", GetAddress(0x6F2D0), &Dialog::ResetDialogControls);
        ReversibleHooks::Install("Dialog", "Show", GetAddress(0x6F8C0), &Dialog::Show);
        ReversibleHooks::Install("Dialog", "Close", GetAddress(0x6FF40), &Dialog::Close);
        ReversibleHooks::Install("Dialog", "Draw", GetAddress(0x6F140), &Dialog::Draw);
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

    void GetScreenRect(CRect* pRect);
    int GetTextScreenLength(const char* szString);
    void Hide();
    void ResetDialogControls(CDXUTDialog* pDialog);
    void Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside);
    void Close(char nProcessButton);
    void Draw();
};

END_PACK

#endif // DIALOG_HPP_