#ifndef LABEL_HPP_
#define LABEL_HPP_

#include "common.hpp"

#include "CVector.h"

BEGIN_PACK

class Label {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Label", "OnLostDevice", GetAddress(0x6B480), &Label::OnLostDevice);
        ReversibleHooks::Install("Label", "OnResetDevice", GetAddress(0x6B490), &Label::OnResetDevice);
        ReversibleHooks::Install("Label", "HasNoObstacles", GetAddress(0x6B4A0), &Label::HasNoObstacles);
        ReversibleHooks::Install("Label", "Begin", GetAddress(0x6B500), &Label::Begin);
        ReversibleHooks::Install("Label", "End", GetAddress(0x6B510), &Label::End);
    }


    IDirect3DDevice9* m_pDevice;
    ID3DXSprite*      m_pSprite;

    
    Label(IDirect3DDevice9* pDevice);
    ~Label();

    void OnLostDevice();
    void OnResetDevice();
    BOOL HasNoObstacles(CVector position);
    void Begin();
    void End();
};

END_PACK

#endif // LABEL_HPP_