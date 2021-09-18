#ifndef SCOREBOARD_HPP_
#define SCOREBOARD_HPP_

#include "common.hpp"

BEGIN_PACK

class Scoreboard {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Recalc)> Recalc_hook{ GetAddress(0x6E1C0) }; Recalc_hook.before.connect(Recalc);
        static kthook::kthook_t<decltype(&GetRect)> GetRect_hook{ GetAddress(0x6E220) }; GetRect_hook.before.connect(GetRect);
        static kthook::kthook_t<decltype(&Close)> Close_hook{ GetAddress(0x6E270) }; Close_hook.before.connect(Close);
        static kthook::kthook_t<decltype(&ResetDialogControls)> ResetDialogControls_hook{ GetAddress(0x6E340) }; ResetDialogControls_hook.before.connect(ResetDialogControls);
        static kthook::kthook_t<decltype(&SendNotification)> SendNotification_hook{ GetAddress(0x6E4A0) }; SendNotification_hook.before.connect(SendNotification);
        static kthook::kthook_t<decltype(&UpdateList)> UpdateList_hook{ GetAddress(0x6E5C0) }; UpdateList_hook.before.connect(UpdateList);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x6E960) }; Draw_hook.before.connect(Draw);
        static kthook::kthook_t<decltype(&Enable)> Enable_hook{ GetAddress(0x6EC80) }; Enable_hook.before.connect(Enable);
    }


    BOOL              m_bIsEnabled;
    int               m_nPlayerCount;
    float             m_position[2];
    float             m_fScalar;
    float             m_size[2];
    float             pad_[5];
    IDirect3DDevice9* m_pDevice;
    CDXUTDialog*      m_pDialog;
    CDXUTListBox*     m_pListbox;
    int               m_nCurrentOffset;
    BOOL              m_bIsSorted;

    
    Scoreboard(IDirect3DDevice9* pDevice);
    ~Scoreboard();

    MAKE_RET(void) Recalc();
    MAKE_RET(void) GetRect(CRect* pRect);
    MAKE_RET(void) Close(bool bHideCursor);
    MAKE_RET(void) ResetDialogControls(CDXUTDialog* pDialog);
    MAKE_RET(void) SendNotification();
    MAKE_RET(void) UpdateList();
    MAKE_RET(void) Draw();
    MAKE_RET(void) Enable();
};

END_PACK

#endif // SCOREBOARD_HPP_