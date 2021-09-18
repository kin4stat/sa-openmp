#ifndef OBJECTMATERIALTEXT_HPP_
#define OBJECTMATERIALTEXT_HPP_

#include "common.hpp"

BEGIN_PACK

class ObjectMaterialText {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x70170) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x70140) }; OnLostDevice_hook.before.connect(OnLostDevice);
    }


    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;
    ID3DXSprite*      m_pSprite_0; // maybe unused

    
    ObjectMaterialText(IDirect3DDevice9* pDevice);
    ~ObjectMaterialText();

    MAKE_RET(void) OnResetDevice();
    MAKE_RET(void) OnLostDevice();
};

END_PACK

#endif // OBJECTMATERIALTEXT_HPP_