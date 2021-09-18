#include "Audio.hpp"

MAKE_RET(int) Audio::GetRadioStation() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Audio::StartRadio(int nStation) {

    return true;
}

MAKE_RET(void) Audio::StopRadio() {

    return true;
}

MAKE_RET(float) Audio::GetRadioVolume() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Audio::StopOutdoorAmbienceTrack() {

    return true;
}

MAKE_RET(void) Audio::SetOutdoorAmbienceTrack(int nSound) {

    return true;
}

MAKE_RET(bool) Audio::IsOutdoorAmbienceTrackDisabled() {

    return kthook::return_value<bool>::make_true();
}

