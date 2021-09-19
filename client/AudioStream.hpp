#ifndef AUDIOSTREAM_HPP_
#define AUDIOSTREAM_HPP_

#include "common.hpp"

#include "CVector.h"

BEGIN_PACK

class AudioStream {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("AudioStream", "Reset", GetAddress(0x65D10), &AudioStream::Reset);
        ReversibleHooks::Install("AudioStream", "Stop", GetAddress(0x65DF0), &AudioStream::Stop);
        ReversibleHooks::Install("AudioStream", "ControlGameRadio", GetAddress(0x66310), &AudioStream::ControlGameRadio);
        ReversibleHooks::Install("AudioStream", "DrawInfo", GetAddress(0x66340), &AudioStream::DrawInfo);
    }



    ~AudioStream();

    BOOL Reset();
    BOOL Stop(bool bWait);
    void ControlGameRadio();
    void DrawInfo();
};

END_PACK

#endif // AUDIOSTREAM_HPP_