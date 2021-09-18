#ifndef SCOREBOARD_HPP_
#define SCOREBOARD_HPP_

#include "common.hpp"
#include "Rect.hpp"

BEGIN_PACK

class Scoreboard {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Scoreboard", "Recalc", GetAddress(0x6E1C0), &Scoreboard::Recalc);
        ReversibleHooks::Install("Scoreboard", "GetRect", GetAddress(0x6E220), &Scoreboard::GetRect);
        ReversibleHooks::Install("Scoreboard", "Close", GetAddress(0x6E270), &Scoreboard::Close);
        ReversibleHooks::Install("Scoreboard", "ResetDialogControls", GetAddress(0x6E340), &Scoreboard::ResetDialogControls);
        ReversibleHooks::Install("Scoreboard", "SendNotification", GetAddress(0x6E4A0), &Scoreboard::SendNotification);
        ReversibleHooks::Install("Scoreboard", "UpdateList", GetAddress(0x6E5C0), &Scoreboard::UpdateList);
        ReversibleHooks::Install("Scoreboard", "Draw", GetAddress(0x6E960), &Scoreboard::Draw);
        ReversibleHooks::Install("Scoreboard", "Enable", GetAddress(0x6EC80), &Scoreboard::Enable);
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

    void Recalc();
    void GetRect(CRect* pRect);
    void Close(bool bHideCursor);
    void ResetDialogControls(CDXUTDialog* pDialog);
    void SendNotification();
    void UpdateList();
    void Draw();
    void Enable();
};

END_PACK

#endif // SCOREBOARD_HPP_