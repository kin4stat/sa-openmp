#ifndef AUDIOSTREAM_HPP_
#define AUDIOSTREAM_HPP_

#include "common.hpp"

BEGIN_PACK

class AudioStream {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Reset)> Reset_hook{ GetAddress(0x65D10) }; Reset_hook.before.connect(Reset);
        static kthook::kthook_t<decltype(&Stop)> Stop_hook{ GetAddress(0x65DF0) }; Stop_hook.before.connect(Stop);
        static kthook::kthook_t<decltype(&ControlGameRadio)> ControlGameRadio_hook{ GetAddress(0x66310) }; ControlGameRadio_hook.before.connect(ControlGameRadio);
        static kthook::kthook_t<decltype(&DrawInfo)> DrawInfo_hook{ GetAddress(0x66340) }; DrawInfo_hook.before.connect(DrawInfo);
    }



    ~AudioStream();

    MAKE_RET(BOOL) Reset();
    MAKE_RET(BOOL) Stop(bool bWait);
    MAKE_RET(void) ControlGameRadio();
    MAKE_RET(void) DrawInfo();
};

END_PACK

#endif // AUDIOSTREAM_HPP_