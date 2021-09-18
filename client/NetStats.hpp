#ifndef NETSTATS_HPP_
#define NETSTATS_HPP_

#include "common.hpp"

BEGIN_PACK

class NetStats {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("NetStats", "Draw", GetAddress(0x605F0), &NetStats::Draw);
    }


    unsigned long     m_dwLastTotalBytesSent;
    unsigned long     m_dwLastTotalBytesRecv;
    unsigned long     m_dwLastUpdateTick;
    unsigned long     m_dwBPSUpload;
    unsigned long     m_dwBPSDownload;
    IDirect3DDevice9* m_pDevice;

    
    NetStats(IDirect3DDevice9* pDevice);
    ~NetStats();

    void Draw();
};

END_PACK

#endif // NETSTATS_HPP_