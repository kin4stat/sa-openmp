#ifndef OBJECTMATERIALTEXT_HPP_
#define OBJECTMATERIALTEXT_HPP_

#include "common.hpp"

BEGIN_PACK

class ObjectMaterialText {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("ObjectMaterialText", "OnResetDevice", GetAddress(0x70170), &ObjectMaterialText::OnResetDevice);
        ReversibleHooks::Install("ObjectMaterialText", "OnLostDevice", GetAddress(0x70140), &ObjectMaterialText::OnLostDevice);
    }


    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;
    ID3DXSprite*      m_pSprite_0; // maybe unused

    
    ObjectMaterialText(IDirect3DDevice9* pDevice);
    ~ObjectMaterialText();

    void OnResetDevice();
    void OnLostDevice();
};

END_PACK

#endif // OBJECTMATERIALTEXT_HPP_