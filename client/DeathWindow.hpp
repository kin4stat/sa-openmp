#ifndef DEATHWINDOW_HPP_
#define DEATHWINDOW_HPP_

#include "common.hpp"
#include "Rect.hpp"

BEGIN_PACK

class DeathWindow {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("DeathWindow", "InitializeAuxFonts", GetAddress(0x69440), &DeathWindow::InitializeAuxFonts);
        ReversibleHooks::Install("DeathWindow", "PushBack", GetAddress(0x694B0), &DeathWindow::PushBack);
        ReversibleHooks::Install("DeathWindow", "GetWeaponSpriteRectSize", GetAddress(0x69660), &DeathWindow::GetWeaponSpriteRectSize);
        ReversibleHooks::Install("DeathWindow", "ResetFonts", GetAddress(0x699E0), &DeathWindow::ResetFonts);
        ReversibleHooks::Install("DeathWindow", "Draw", GetAddress(0x69B70), &DeathWindow::Draw);
    }


    enum { MAX_DEATHMESSAGES = 5 };

    BOOL m_bEnabled;

    struct {
        char     m_szKiller[25];
        char     m_szVictim[25];
        D3DCOLOR m_killerColor;
        D3DCOLOR m_victimColor;
        char     m_nWeapon;
    } m_entry[MAX_DEATHMESSAGES];

    int               m_nLongestNickWidth;
    int               m_position[2];
    ID3DXFont*        m_pFont;
    ID3DXFont*        m_pWeaponFont1;
    ID3DXFont*        m_pWeaponFont2;
    ID3DXSprite*      m_pSprite;
    IDirect3DDevice9* m_pDevice;
    BOOL              m_bAuxFontInitialized;
    ID3DXFont*        m_pAuxFont1;
    ID3DXFont*        m_pAuxFont2;

    
    DeathWindow(IDirect3DDevice9* pDevice);
    ~DeathWindow();

    void InitializeAuxFonts();
    void PushBack();
    void GetWeaponSpriteRectSize(void* pPoint);
    void ResetFonts();
    void Draw();
};

END_PACK

#endif // DEATHWINDOW_HPP_