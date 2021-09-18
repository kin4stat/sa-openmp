#ifndef GANGZONEPOOL_HPP_
#define GANGZONEPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

struct GangZone {
    struct {
        float left;
        float bottom;
        float right;
        float top;
    } m_rect;
    D3DCOLOR m_color;
    D3DCOLOR m_altColor;
};

class GangZonePool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("GangZonePool", "StopFlashing", GetAddress(0x2200), &GangZonePool::StopFlashing);
        ReversibleHooks::Install("GangZonePool", "Delete", GetAddress(0x2220), &GangZonePool::Delete);
        ReversibleHooks::Install("GangZonePool", "Draw", GetAddress(0x2250), &GangZonePool::Draw);
    }


    enum { MAX_GANGZONES = 1024 };

    GangZone* m_pObject[MAX_GANGZONES];
    BOOL      m_bNotEmpty[MAX_GANGZONES];

    
    GangZonePool();
    ~GangZonePool();

    void StopFlashing(ID nId);
    void Delete(ID nId);
    void Draw();
};

END_PACK

#endif // GANGZONEPOOL_HPP_