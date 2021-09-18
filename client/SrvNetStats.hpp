#ifndef SRVNETSTATS_HPP_
#define SRVNETSTATS_HPP_

#include "common.hpp"

BEGIN_PACK

class SrvNetStats {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x70B70) }; Draw_hook.before.connect(Draw);
    }


    unsigned long     m_dwLastTotalBytesSent;
    unsigned long     m_dwLastTotalBytesRecv;
    unsigned long     m_dwLastUpdateTick;
    unsigned long     m_dwBPSUpload;
    unsigned long     m_dwBPSDownload;
    IDirect3DDevice9* m_pDevice;

    
    SrvNetStats(IDirect3DDevice9* pDevice);
    ~SrvNetStats();

    MAKE_RET(void) Draw();
};

END_PACK

#endif // SRVNETSTATS_HPP_