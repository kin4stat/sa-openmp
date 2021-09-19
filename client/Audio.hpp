#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include "common.hpp"

#include "CVector.h"

BEGIN_PACK

class Audio {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Audio", "GetRadioStation", GetAddress(0xA1AE0), &Audio::GetRadioStation);
        ReversibleHooks::Install("Audio", "StartRadio", GetAddress(0xA1B10), &Audio::StartRadio);
        ReversibleHooks::Install("Audio", "StopRadio", GetAddress(0xA1B30), &Audio::StopRadio);
        ReversibleHooks::Install("Audio", "GetRadioVolume", GetAddress(0xA1B50), &Audio::GetRadioVolume);
        ReversibleHooks::Install("Audio", "StopOutdoorAmbienceTrack", GetAddress(0xA1B60), &Audio::StopOutdoorAmbienceTrack);
        ReversibleHooks::Install("Audio", "SetOutdoorAmbienceTrack", GetAddress(0xA1B70), &Audio::SetOutdoorAmbienceTrack);
        ReversibleHooks::Install("Audio", "IsOutdoorAmbienceTrackDisabled", GetAddress(0xA1C70), &Audio::IsOutdoorAmbienceTrackDisabled);
    }



    ~Audio();

    int GetRadioStation();
    void StartRadio(int nStation);
    void StopRadio();
    float GetRadioVolume();
    void StopOutdoorAmbienceTrack();
    void SetOutdoorAmbienceTrack(int nSound);
    bool IsOutdoorAmbienceTrackDisabled();
};

END_PACK

#endif // AUDIO_HPP_