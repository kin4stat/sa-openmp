#ifndef LICENSEPLATE_HPP_
#define LICENSEPLATE_HPP_

#include "common.hpp"

BEGIN_PACK

class LicensePlate {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x6D040) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x6D090) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x6D110) }; Create_hook.before.connect(Create);
    }


    static constexpr auto DEFAULT_PLATE_FONT = "Arial";
    static constexpr auto DEFAULT_PLATE_TEXT = "XYZSR998";
    enum {
        DEFAULT_PLATE_TEXT_COLOR = 0xEE444470,
        DEFAULT_PLATE_BG_COLOR = 0xFFBEB6A8,
    };

    IDirect3DDevice9*     m_pDevice;
    ID3DXRenderToSurface* m_pRenderer;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DSurface9*    m_pSurface;
#ifdef _d3d9TYPES_H_
    D3DDISPLAYMODE m_displayMode;
#else
    unsigned int m_displayMode[4];
#endif
    IDirect3DTexture9* m_pDefaultPlate;

    
    LicensePlate(IDirect3DDevice9* pDevice);
    ~LicensePlate();

    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) OnResetDevice();
    MAKE_RET(IDirect3DTexture9*) Create(const char* szText);
};

END_PACK

#endif // LICENSEPLATE_HPP_