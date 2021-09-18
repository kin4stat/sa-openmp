#ifndef LABEL_HPP_
#define LABEL_HPP_

#include "common.hpp"

BEGIN_PACK

class Label {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x6B480) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x6B490) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&HasNoObstacles)> HasNoObstacles_hook{ GetAddress(0x6B4A0) }; HasNoObstacles_hook.before.connect(HasNoObstacles);
        static kthook::kthook_t<decltype(&Begin)> Begin_hook{ GetAddress(0x6B500) }; Begin_hook.before.connect(Begin);
        static kthook::kthook_t<decltype(&End)> End_hook{ GetAddress(0x6B510) }; End_hook.before.connect(End);
    }


    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;

    
    Label(IDirect3DDevice9* pDevice);
    ~Label();

    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) OnResetDevice();
    MAKE_RET(BOOL) HasNoObstacles(CVector position);
    MAKE_RET(void) Begin();
    MAKE_RET(void) End();
};

END_PACK

#endif // LABEL_HPP_