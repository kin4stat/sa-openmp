#ifndef PLAYERTAGS_HPP_
#define PLAYERTAGS_HPP_

#include "common.hpp"
#include "Vector.hpp"

BEGIN_PACK

class PlayerTags {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("PlayerTags", "EndHealthBar", GetAddress(0x6C5E0), &PlayerTags::EndHealthBar);
        ReversibleHooks::Install("PlayerTags", "BeginLabel", GetAddress(0x6C610), &PlayerTags::BeginLabel);
        ReversibleHooks::Install("PlayerTags", "EndLabel", GetAddress(0x6C620), &PlayerTags::EndLabel);
        ReversibleHooks::Install("PlayerTags", "DrawHealthBar", GetAddress(0x6C930), &PlayerTags::DrawHealthBar);
        ReversibleHooks::Install("PlayerTags", "OnLostDevice", GetAddress(0x6CEE0), &PlayerTags::OnLostDevice);
        ReversibleHooks::Install("PlayerTags", "OnResetDevice", GetAddress(0x6CF10), &PlayerTags::OnResetDevice);
        ReversibleHooks::Install("PlayerTags", "BeginHealthBar", GetAddress(0x6CF40), &PlayerTags::BeginHealthBar);
    }


    IDirect3DDevice9*     m_pDevice;
    IDirect3DStateBlock9* m_pStates;
    ID3DXSprite*          m_pSprite;

    
    PlayerTags(IDirect3DDevice9* pDevice);
    ~PlayerTags();

    void EndHealthBar();
    void BeginLabel();
    void EndLabel();
    void DrawHealthBar(CVector* pPosition, float fHealth, float fArmour, float fDistanceToCamera);
    void OnLostDevice();
    void OnResetDevice();
    void BeginHealthBar();
};

END_PACK

#endif // PLAYERTAGS_HPP_