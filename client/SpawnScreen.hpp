#ifndef SPAWNSCREEN_HPP_
#define SPAWNSCREEN_HPP_

#include "common.hpp"
#include "Fonts.hpp"

BEGIN_PACK

class SpawnScreen {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("SpawnScreen", "SetText", GetAddress(0x704A0), &SpawnScreen::SetText);
        ReversibleHooks::Install("SpawnScreen", "OnResetDevice", GetAddress(0x70500), &SpawnScreen::OnResetDevice);
        ReversibleHooks::Install("SpawnScreen", "OnLostDevice", GetAddress(0x707B0), &SpawnScreen::OnLostDevice);
        ReversibleHooks::Install("SpawnScreen", "Draw", GetAddress(0x708A0), &SpawnScreen::Draw);
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

    void SetText(const char* szString);
    void OnResetDevice();
    void OnLostDevice();
    void Draw();
};

END_PACK

#endif // SPAWNSCREEN_HPP_