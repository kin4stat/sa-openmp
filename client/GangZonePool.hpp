#ifndef GANGZONEPOOL_HPP_
#define GANGZONEPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class GangZonePool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&StopFlashing)> StopFlashing_hook{ GetAddress(0x2200) }; StopFlashing_hook.before.connect(StopFlashing);
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x2220) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&Draw)> Draw_hook{ GetAddress(0x2250) }; Draw_hook.before.connect(Draw);
    }



    ~GangZonePool();

    MAKE_RET(void) StopFlashing(ID nId);
    MAKE_RET(void) Delete(ID nId);
    MAKE_RET(void) Draw();
};

END_PACK

#endif // GANGZONEPOOL_HPP_