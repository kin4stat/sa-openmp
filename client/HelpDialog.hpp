#ifndef HELPDIALOG_HPP_
#define HELPDIALOG_HPP_

#include "common.hpp"

BEGIN_PACK

class HelpDialog {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Show)> Show_hook{ GetAddress(0x6B3C0) }; Show_hook.before.connect(Show);
    }


    IDirect3DDevice9* m_pDevice;

    
    HelpDialog(IDirect3DDevice9* pDevice = SAMPAPI_UNUSED);
    ~HelpDialog();

    MAKE_RET(void) Show();
};

END_PACK

#endif // HELPDIALOG_HPP_