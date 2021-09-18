#ifndef MENUPOOL_HPP_
#define MENUPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class MenuPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x7C00) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Show)> Show_hook{ GetAddress(0x7C50) }; Show_hook.before.connect(Show);
        static kthook::kthook_t<decltype(&Hide)> Hide_hook{ GetAddress(0x7CB0) }; Hide_hook.before.connect(Hide);
        static kthook::kthook_t<decltype(&GetTextPointer)> GetTextPointer_hook{ GetAddress(0x7CF0) }; GetTextPointer_hook.before.connect(GetTextPointer);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x7E90) }; Process_hook.before.connect(Process);
    }



    ~MenuPool();

    MAKE_RET(BOOL) Delete(NUMBER nId);
    MAKE_RET(void) Show(NUMBER nId);
    MAKE_RET(void) Hide(NUMBER nId);
    MAKE_RET(char*) GetTextPointer(const char* szName);
    MAKE_RET(void) Process();
};

END_PACK

#endif // MENUPOOL_HPP_