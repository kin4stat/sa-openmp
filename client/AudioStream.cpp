#include "AudioStream.hpp"

MAKE_RET(BOOL) AudioStream::Reset() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) AudioStream::Stop(bool bWait) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) AudioStream::ControlGameRadio() {

    return true;
}

MAKE_RET(void) AudioStream::DrawInfo() {

    return true;
}

