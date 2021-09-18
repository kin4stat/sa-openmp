#ifndef TEXTDRAWSELECTION_HPP_
#define TEXTDRAWSELECTION_HPP_

#include "common.hpp"

BEGIN_PACK

class TextDrawSelection {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&ResetTextDraws)> ResetTextDraws_hook{ GetAddress(0x70BC0) }; ResetTextDraws_hook.before.connect(ResetTextDraws);
        static kthook::kthook_t<decltype(&RawProcess)> RawProcess_hook{ GetAddress(0x70C20) }; RawProcess_hook.before.connect(RawProcess);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x70D20) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&SendNotification)> SendNotification_hook{ GetAddress(0x70D90) }; SendNotification_hook.before.connect(SendNotification);
        static kthook::kthook_t<decltype(&Disable)> Disable_hook{ GetAddress(0x70E30) }; Disable_hook.before.connect(Disable);
        static kthook::kthook_t<decltype(&MsgProc)> MsgProc_hook{ GetAddress(0x70E80) }; MsgProc_hook.before.connect(MsgProc);
    }



    ~TextDrawSelection();

    MAKE_RET(void) ResetTextDraws();
    MAKE_RET(void) RawProcess();
    MAKE_RET(void) Process();
    MAKE_RET(void) SendNotification();
    MAKE_RET(void) Disable();
    MAKE_RET(BOOL) MsgProc(int uMsg, int wParam, int lParam);
};

END_PACK

#endif // TEXTDRAWSELECTION_HPP_