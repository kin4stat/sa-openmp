#ifndef MENUPOOL_HPP_
#define MENUPOOL_HPP_

#include "common.hpp"
#include "Menu.hpp"

BEGIN_PACK

class MenuPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("MenuPool", "Delete", GetAddress(0x7C00), &MenuPool::Delete);
        ReversibleHooks::Install("MenuPool", "Show", GetAddress(0x7C50), &MenuPool::Show);
        ReversibleHooks::Install("MenuPool", "Hide", GetAddress(0x7CB0), &MenuPool::Hide);
        ReversibleHooks::Install("MenuPool", "GetTextPointer", GetAddress(0x7CF0), &MenuPool::GetTextPointer);
        ReversibleHooks::Install("MenuPool", "Process", GetAddress(0x7E90), &MenuPool::Process);
    }


    enum { MAX_MENUS = 128 };

    Menu* m_pObject[MAX_MENUS];
    BOOL   m_bNotEmpty[MAX_MENUS];
    NUMBER m_nCurrent;
    bool   m_bCanceled;

    
    MenuPool();
    ~MenuPool();

    BOOL Delete(NUMBER nId);
    void Show(NUMBER nId);
    void Hide(NUMBER nId);
    char* GetTextPointer(const char* szName);
    void Process();
};

END_PACK

#endif // MENUPOOL_HPP_