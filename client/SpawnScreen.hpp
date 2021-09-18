#ifndef SPAWNSCREEN_HPP_
#define SPAWNSCREEN_HPP_

#include "common.hpp"

BEGIN_PACK

class SpawnScreen {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&SetText)> SetText_hook{ GetAddress(0x704A0) }; SetText_hook.before.connect(SetText);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x70500) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x707B0) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x708A0) }; Draw_hook.before.connect(Draw);
    }


    BOOL                  m_bEnabled;
    char*                 m_szSpawnText;
    CFonts*               m_pFont;
    IDirect3DDevice9*     m_pDevice;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DStateBlock9* m_pStateBlockSaved;
    IDirect3DStateBlock9* m_pStateBlockDraw;
    ID3DXSprite*          m_pSprite;

    
    SpawnScreen(IDirect3DDevice9* pDevice);
    ~SpawnScreen();

    MAKE_RET(void) SetText(const char* szString);
    MAKE_RET(void) OnResetDevice();
    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) Draw();
};

END_PACK

#endif // SPAWNSCREEN_HPP_