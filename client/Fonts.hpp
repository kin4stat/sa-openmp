#ifndef FONTS_HPP_
#define FONTS_HPP_

#include "common.hpp"

BEGIN_PACK

class Fonts {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x6AA10) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x6AA50) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&GetTextScreenSize)> GetTextScreenSize_hook{ GetAddress(0x6AA90) }; GetTextScreenSize_hook.before.connect(GetTextScreenSize);
        static kthook::kthook_t<decltype(&GetLittleTextScreenSize)> GetLittleTextScreenSize_hook{ GetAddress(0x6AB40) }; GetLittleTextScreenSize_hook.before.connect(GetLittleTextScreenSize);
        static kthook::kthook_t<decltype(&Reset)> Reset_hook{ GetAddress(0x6B170) }; Reset_hook.before.connect(Reset);
    }


    CFont*            m_pFont;
    CFont*            m_pLittleFont;
    CFont*            m_pShadow;
    CFont*            m_pLittleShadow;
    CFont*            m_pLicensePlateFont;
    ID3DXSprite*      m_pDefaultSprite;
    IDirect3DDevice9* m_pDevice;
    char*             m_szTempBuffer;
    int               m_nCharHeight;
    int               m_nLittleCharHeight;

    
    Fonts(IDirect3DDevice9* pDevice);
    ~Fonts();

    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) OnResetDevice();
    MAKE_RET(void) GetTextScreenSize(void* pSize, const char* szText, int nFormat);
    MAKE_RET(void) GetLittleTextScreenSize(void* pSize, const char* szText, int nFormat);
    MAKE_RET(void) Reset();
};

END_PACK

#endif // FONTS_HPP_