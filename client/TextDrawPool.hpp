#ifndef TEXTDRAWPOOL_HPP_
#define TEXTDRAWPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class TextDrawPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x1E0A0) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x1E0E0) }; Draw_hook.before.connect(Draw);
    }



    ~TextDrawPool();

    MAKE_RET(void) Delete(ID nId);
    MAKE_RET(void) Draw();
};

END_PACK

#endif // TEXTDRAWPOOL_HPP_