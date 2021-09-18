#ifndef LABELPOOL_HPP_
#define LABELPOOL_HPP_

#include "common.hpp"
#include "Vector.hpp"

BEGIN_PACK

struct TextLabel {
    char*    m_pText;
    D3DCOLOR m_color;
    Vector  m_position;
    float    m_fDrawDistance;
    bool     m_bBehindWalls;
    ID       m_nAttachedToPlayer;
    ID       m_nAttachedToVehicle;
};

class LabelPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("LabelPool", "Delete", GetAddress(0x12D0), &LabelPool::Delete);
        ReversibleHooks::Install("LabelPool", "Draw", GetAddress(0x1340), &LabelPool::Draw);
    }


    enum { MAX_TEXT_LABELS = 2048 };

    TextLabel m_object[MAX_TEXT_LABELS];
    BOOL      m_bNotEmpty[MAX_TEXT_LABELS];

    
    LabelPool();
    ~LabelPool();

    BOOL Delete(ID nId);
    void Draw();
};

END_PACK

#endif // LABELPOOL_HPP_