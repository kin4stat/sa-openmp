#ifndef OBJECTSELECTION_HPP_
#define OBJECTSELECTION_HPP_

#include "common.hpp"

BEGIN_PACK

class ObjectSelection {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&DefineObject)> DefineObject_hook{ GetAddress(0x6D2A0) }; DefineObject_hook.before.connect(DefineObject);
        static kthook::kthook_t<decltype(&DrawLabels)> DrawLabels_hook{ GetAddress(0x6D2F0) }; DrawLabels_hook.before.connect(DrawLabels);
        static kthook::kthook_t<decltype(&Enable)> Enable_hook{ GetAddress(0x6D410) }; Enable_hook.before.connect(Enable);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x6D490) }; Draw_hook.before.connect(Draw);
        static kthook::kthook_t<decltype(&SendNotification)> SendNotification_hook{ GetAddress(0x6D560) }; SendNotification_hook.before.connect(SendNotification);
        static kthook::kthook_t<decltype(&MsgProc)> MsgProc_hook{ GetAddress(0x6D6D0) }; MsgProc_hook.before.connect(MsgProc);
    }



    ~ObjectSelection();

    MAKE_RET(ID) DefineObject();
    MAKE_RET(void) DrawLabels();
    MAKE_RET(void) Enable(BOOL bEnable);
    MAKE_RET(void) Draw();
    MAKE_RET(void) SendNotification();
    MAKE_RET(BOOL) MsgProc(int uMsg, int wParam, int lParam);
};

END_PACK

#endif // OBJECTSELECTION_HPP_