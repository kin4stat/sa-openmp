#ifndef SRVNETSTATS_HPP_
#define SRVNETSTATS_HPP_

#include "common.hpp"

BEGIN_PACK

class SrvNetStats {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("SrvNetStats", "Draw", GetAddress(0x70B70), &SrvNetStats::Draw);
    }


    unsigned long     m_dwLastTotalBytesSent;
    unsigned long     m_dwLastTotalBytesRecv;
    unsigned long     m_dwLastUpdateTick;
    unsigned long     m_dwBPSUpload;
    unsigned long     m_dwBPSDownload;
    IDirect3DDevice9* m_pDevice;

    
    SrvNetStats(IDirect3DDevice9* pDevice);
    ~SrvNetStats();

    void Draw();
};

END_PACK

#endif // SRVNETSTATS_HPP_