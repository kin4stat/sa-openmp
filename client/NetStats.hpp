#ifndef NETSTATS_HPP_
#define NETSTATS_HPP_

#include "common.hpp"

BEGIN_PACK

class NetStats {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x605F0) }; Draw_hook.before.connect(Draw);
    }


    unsigned long     m_dwLastTotalBytesSent;
    unsigned long     m_dwLastTotalBytesRecv;
    unsigned long     m_dwLastUpdateTick;
    unsigned long     m_dwBPSUpload;
    unsigned long     m_dwBPSDownload;
    IDirect3DDevice9* m_pDevice;

    
    NetStats(IDirect3DDevice9* pDevice);
    ~NetStats();

    MAKE_RET(void) Draw();
};

END_PACK

#endif // NETSTATS_HPP_