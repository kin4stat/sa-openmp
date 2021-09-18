#ifndef OBJECTSELECTION_HPP_
#define OBJECTSELECTION_HPP_

#include "common.hpp"

BEGIN_PACK

class ObjectSelection {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("ObjectSelection", "DefineObject", GetAddress(0x6D2A0), &ObjectSelection::DefineObject);
        ReversibleHooks::Install("ObjectSelection", "DrawLabels", GetAddress(0x6D2F0), &ObjectSelection::DrawLabels);
        ReversibleHooks::Install("ObjectSelection", "Enable", GetAddress(0x6D410), &ObjectSelection::Enable);
        ReversibleHooks::Install("ObjectSelection", "Draw", GetAddress(0x6D490), &ObjectSelection::Draw);
        ReversibleHooks::Install("ObjectSelection", "SendNotification", GetAddress(0x6D560), &ObjectSelection::SendNotification);
        ReversibleHooks::Install("ObjectSelection", "MsgProc", GetAddress(0x6D6D0), &ObjectSelection::MsgProc);
    }


    BOOL m_bIsActive;
    ID   m_nHoveredObject;

    
    ObjectSelection();
    ~ObjectSelection();

    ID DefineObject();
    void DrawLabels();
    void Enable(BOOL bEnable);
    void Draw();
    void SendNotification();
    BOOL MsgProc(int uMsg, int wParam, int lParam);
};

END_PACK

#endif // OBJECTSELECTION_HPP_