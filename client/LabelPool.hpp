#ifndef LABELPOOL_HPP_
#define LABELPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class LabelPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x12D0) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x1340) }; Draw_hook.before.connect(Draw);
    }



    ~LabelPool();

    MAKE_RET(BOOL) Delete(ID nId);
    MAKE_RET(void) Draw();
};

END_PACK

#endif // LABELPOOL_HPP_