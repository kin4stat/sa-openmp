#ifndef HELPDIALOG_HPP_
#define HELPDIALOG_HPP_

#include "common.hpp"

BEGIN_PACK

class HelpDialog {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("HelpDialog", "Show", GetAddress(0x6B3C0), &HelpDialog::Show);
    }


    IDirect3DDevice9* m_pDevice;

    
    HelpDialog(IDirect3DDevice9* pDevice = nullptr);
    ~HelpDialog();

    void Show();
};

END_PACK

#endif // HELPDIALOG_HPP_