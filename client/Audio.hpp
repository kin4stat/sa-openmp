#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include "common.hpp"

BEGIN_PACK

class Audio {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetRadioStation)> GetRadioStation_hook{ GetAddress(0xA1AE0) }; GetRadioStation_hook.before.connect(GetRadioStation);
        static kthook::kthook_t<decltype(&StartRadio)> StartRadio_hook{ GetAddress(0xA1B10) }; StartRadio_hook.before.connect(StartRadio);
        static kthook::kthook_t<decltype(&StopRadio)> StopRadio_hook{ GetAddress(0xA1B30) }; StopRadio_hook.before.connect(StopRadio);
        static kthook::kthook_t<decltype(&GetRadioVolume)> GetRadioVolume_hook{ GetAddress(0xA1B50) }; GetRadioVolume_hook.before.connect(GetRadioVolume);
        static kthook::kthook_t<decltype(&StopOutdoorAmbienceTrack)> StopOutdoorAmbienceTrack_hook{ GetAddress(0xA1B60) }; StopOutdoorAmbienceTrack_hook.before.connect(StopOutdoorAmbienceTrack);
        static kthook::kthook_t<decltype(&SetOutdoorAmbienceTrack)> SetOutdoorAmbienceTrack_hook{ GetAddress(0xA1B70) }; SetOutdoorAmbienceTrack_hook.before.connect(SetOutdoorAmbienceTrack);
        static kthook::kthook_t<decltype(&IsOutdoorAmbienceTrackDisabled)> IsOutdoorAmbienceTrackDisabled_hook{ GetAddress(0xA1C70) }; IsOutdoorAmbienceTrackDisabled_hook.before.connect(IsOutdoorAmbienceTrackDisabled);
    }



    ~Audio();

    MAKE_RET(int) GetRadioStation();
    MAKE_RET(void) StartRadio(int nStation);
    MAKE_RET(void) StopRadio();
    MAKE_RET(float) GetRadioVolume();
    MAKE_RET(void) StopOutdoorAmbienceTrack();
    MAKE_RET(void) SetOutdoorAmbienceTrack(int nSound);
    MAKE_RET(bool) IsOutdoorAmbienceTrackDisabled();
};

END_PACK

#endif // AUDIO_HPP_