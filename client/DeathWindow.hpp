#ifndef DEATHWINDOW_HPP_
#define DEATHWINDOW_HPP_

#include "common.hpp"

BEGIN_PACK

class DeathWindow {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&InitializeAuxFonts)> InitializeAuxFonts_hook{ GetAddress(0x69440) }; InitializeAuxFonts_hook.before.connect(InitializeAuxFonts);
        static kthook::kthook_t<decltype(&PushBack)> PushBack_hook{ GetAddress(0x694B0) }; PushBack_hook.before.connect(PushBack);
        static kthook::kthook_t<decltype(&GetWeaponSpriteRectSize)> GetWeaponSpriteRectSize_hook{ GetAddress(0x69660) }; GetWeaponSpriteRectSize_hook.before.connect(GetWeaponSpriteRectSize);
        static kthook::kthook_t<decltype(&ResetFonts)> ResetFonts_hook{ GetAddress(0x699E0) }; ResetFonts_hook.before.connect(ResetFonts);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x69B70) }; Draw_hook.before.connect(Draw);
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

    MAKE_RET(void) InitializeAuxFonts();
    MAKE_RET(void) PushBack();
    MAKE_RET(void) GetWeaponSpriteRectSize(void* pPoint);
    MAKE_RET(void) ResetFonts();
    MAKE_RET(void) Draw();
};

END_PACK

#endif // DEATHWINDOW_HPP_