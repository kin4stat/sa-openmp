#ifndef PLAYERTAGS_HPP_
#define PLAYERTAGS_HPP_

#include "common.hpp"

BEGIN_PACK

class PlayerTags {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&EndHealthBar)> EndHealthBar_hook{ GetAddress(0x6C5E0) }; EndHealthBar_hook.before.connect(EndHealthBar);
        static kthook::kthook_t<decltype(&BeginLabel)> BeginLabel_hook{ GetAddress(0x6C610) }; BeginLabel_hook.before.connect(BeginLabel);
        static kthook::kthook_t<decltype(&EndLabel)> EndLabel_hook{ GetAddress(0x6C620) }; EndLabel_hook.before.connect(EndLabel);
        static kthook::kthook_t<decltype(&DrawHealthBar)> DrawHealthBar_hook{ GetAddress(0x6C930) }; DrawHealthBar_hook.before.connect(DrawHealthBar);
        static kthook::kthook_t<decltype(&OnLostDevice)> OnLostDevice_hook{ GetAddress(0x6CEE0) }; OnLostDevice_hook.before.connect(OnLostDevice);
        static kthook::kthook_t<decltype(&OnResetDevice)> OnResetDevice_hook{ GetAddress(0x6CF10) }; OnResetDevice_hook.before.connect(OnResetDevice);
        static kthook::kthook_t<decltype(&BeginHealthBar)> BeginHealthBar_hook{ GetAddress(0x6CF40) }; BeginHealthBar_hook.before.connect(BeginHealthBar);
    }


    IDirect3DDevice9*     m_pDevice;
    IDirect3DStateBlock9* m_pStates;
    ID3DXSprite*          m_pSprite;

    
    PlayerTags(IDirect3DDevice9* pDevice);
    ~PlayerTags();

    MAKE_RET(void) EndHealthBar();
    MAKE_RET(void) BeginLabel();
    MAKE_RET(void) EndLabel();
    MAKE_RET(void) DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera);
    MAKE_RET(void) OnLostDevice();
    MAKE_RET(void) OnResetDevice();
    MAKE_RET(void) BeginHealthBar();
};

END_PACK

#endif // PLAYERTAGS_HPP_