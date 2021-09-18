#ifndef LICENSEPLATE_HPP_
#define LICENSEPLATE_HPP_

#include "common.hpp"

BEGIN_PACK

class LicensePlate {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("LicensePlate", "OnLostDevice", GetAddress(0x6D040), &LicensePlate::OnLostDevice);
        ReversibleHooks::Install("LicensePlate", "OnResetDevice", GetAddress(0x6D090), &LicensePlate::OnResetDevice);
        ReversibleHooks::Install("LicensePlate", "Create", GetAddress(0x6D110), &LicensePlate::Create);
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

    void OnLostDevice();
    void OnResetDevice();
    IDirect3DTexture9* Create(const char* szText);
};

END_PACK

#endif // LICENSEPLATE_HPP_