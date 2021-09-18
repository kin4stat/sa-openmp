#ifndef PLAYERPOOL_HPP_
#define PLAYERPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class PlayerPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&UpdateLargestId)> UpdateLargestId_hook{ GetAddress(0x13400) }; UpdateLargestId_hook.before.connect(UpdateLargestId);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x13470) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&Deactivate)> Deactivate_hook{ GetAddress(0x13790) }; Deactivate_hook.before.connect(Deactivate);
        static kthook::kthook_t<decltype(&ForceCollision)> ForceCollision_hook{ GetAddress(0x138C0) }; ForceCollision_hook.before.connect(ForceCollision);
        static kthook::kthook_t<decltype(&RestoreCollision)> RestoreCollision_hook{ GetAddress(0x13930) }; RestoreCollision_hook.before.connect(RestoreCollision);
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x13E80) }; Create_hook.before.connect(Create);
        static kthook::kthook_t<decltype(&GetPlayer)> GetPlayer_hook{ GetAddress(0x10F0) }; GetPlayer_hook.before.connect(GetPlayer);
        static kthook::kthook_t<decltype(&IsDisconnected)> IsDisconnected_hook{ GetAddress(0x10D0) }; IsDisconnected_hook.before.connect(IsDisconnected);
        static kthook::kthook_t<decltype(&IsConnected)> IsConnected_hook{ GetAddress(0x10B0) }; IsConnected_hook.before.connect(IsConnected);
        static kthook::kthook_t<decltype(&SetLocalPlayerName)> SetLocalPlayerName_hook{ GetAddress(0xB5C0) }; SetLocalPlayerName_hook.before.connect(SetLocalPlayerName);
        static kthook::kthook_t<decltype(&SetAt)> SetAt_hook{ GetAddress(0x133E0) }; SetAt_hook.before.connect(SetAt);
        static kthook::kthook_t<decltype(&GetScore)> GetScore_hook{ GetAddress(0x6E0E0) }; GetScore_hook.before.connect(GetScore);
        static kthook::kthook_t<decltype(&GetPing)> GetPing_hook{ GetAddress(0x6E110) }; GetPing_hook.before.connect(GetPing);
        static kthook::kthook_t<decltype(&GetLocalPlayerPing)> GetLocalPlayerPing_hook{ GetAddress(0x6E150) }; GetLocalPlayerPing_hook.before.connect(GetLocalPlayerPing);
        static kthook::kthook_t<decltype(&GetLocalPlayerScore)> GetLocalPlayerScore_hook{ GetAddress(0x6E140) }; GetLocalPlayerScore_hook.before.connect(GetLocalPlayerScore);
        static kthook::kthook_t<decltype(&GetLocalPlayer)> GetLocalPlayer_hook{ GetAddress(0x1A30) }; GetLocalPlayer_hook.before.connect(GetLocalPlayer);
    }



    ~PlayerPool();

    MAKE_RET(void) UpdateLargestId();
    MAKE_RET(void) Process();
    MAKE_RET(void) Deactivate();
    MAKE_RET(void) ForceCollision();
    MAKE_RET(void) RestoreCollision();
    MAKE_RET(BOOL) Create(ID nId, const char* szName, BOOL bIsNPC);
    MAKE_RET(CRemotePlayer*) GetPlayer(ID nId);
    MAKE_RET(BOOL) IsDisconnected(ID nId);
    MAKE_RET(BOOL) IsConnected(ID nId);
    MAKE_RET(void) SetLocalPlayerName(const char* szName);
    MAKE_RET(void) SetAt(ID nId, CPlayerInfo* pObject);
    MAKE_RET(int) GetScore(ID nId);
    MAKE_RET(int) GetPing(ID nId);
    MAKE_RET(int) GetLocalPlayerPing();
    MAKE_RET(int) GetLocalPlayerScore();
    MAKE_RET(CLocalPlayer*) GetLocalPlayer();
};

END_PACK

#endif // PLAYERPOOL_HPP_