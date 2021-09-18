#ifndef TEXTDRAWSELECTION_HPP_
#define TEXTDRAWSELECTION_HPP_

#include "common.hpp"

BEGIN_PACK

class TextDrawSelection {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("TextDrawSelection", "ResetTextDraws", GetAddress(0x70BC0), &TextDrawSelection::ResetTextDraws);
        ReversibleHooks::Install("TextDrawSelection", "RawProcess", GetAddress(0x70C20), &TextDrawSelection::RawProcess);
        ReversibleHooks::Install("TextDrawSelection", "Process", GetAddress(0x70D20), &TextDrawSelection::Process);
        ReversibleHooks::Install("TextDrawSelection", "SendNotification", GetAddress(0x70D90), &TextDrawSelection::SendNotification);
        ReversibleHooks::Install("TextDrawSelection", "Disable", GetAddress(0x70E30), &TextDrawSelection::Disable);
        ReversibleHooks::Install("TextDrawSelection", "MsgProc", GetAddress(0x70E80), &TextDrawSelection::MsgProc);
    }



    ~TextDrawSelection();

    void ResetTextDraws();
    void RawProcess();
    void Process();
    void SendNotification();
    void Disable();
    BOOL MsgProc(int uMsg, int wParam, int lParam);
};

END_PACK

#endif // TEXTDRAWSELECTION_HPP_