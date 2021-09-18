#ifndef FONTS_HPP_
#define FONTS_HPP_

#include "common.hpp"
#include "Rect.hpp"
#include "Font.hpp"

BEGIN_PACK

class Fonts {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Fonts", "OnLostDevice", GetAddress(0x6AA10), &Fonts::OnLostDevice);
        ReversibleHooks::Install("Fonts", "OnResetDevice", GetAddress(0x6AA50), &Fonts::OnResetDevice);
        ReversibleHooks::Install("Fonts", "GetTextScreenSize", GetAddress(0x6AA90), &Fonts::GetTextScreenSize);
        ReversibleHooks::Install("Fonts", "GetLittleTextScreenSize", GetAddress(0x6AB40), &Fonts::GetLittleTextScreenSize);
        ReversibleHooks::Install("Fonts", "Reset", GetAddress(0x6B170), &Fonts::Reset);
    }


    Font*            m_pFont;
    Font*            m_pLittleFont;
    Font*            m_pShadow;
    Font*            m_pLittleShadow;
    Font*            m_pLicensePlateFont;
    ID3DXSprite*      m_pDefaultSprite;
    IDirect3DDevice9* m_pDevice;
    char*             m_szTempBuffer;
    int               m_nCharHeight;
    int               m_nLittleCharHeight;

    
    Fonts(IDirect3DDevice9* pDevice);
    ~Fonts();

    void OnLostDevice();
    void OnResetDevice();
    void GetTextScreenSize(void* pSize, const char* szText, int nFormat);
    void GetLittleTextScreenSize(void* pSize, const char* szText, int nFormat);
    void Reset();
};

END_PACK

#endif // FONTS_HPP_