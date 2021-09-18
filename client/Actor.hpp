#ifndef ACTOR_HPP_
#define ACTOR_HPP_

#include "common.hpp"

BEGIN_PACK

class Actor {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Destroy)> Destroy_hook{ GetAddress(0x9BCF0) }; Destroy_hook.before.connect(Destroy);
        static kthook::kthook_t<decltype(&PerformAnimation)> PerformAnimation_hook{ GetAddress(0x9BD50) }; PerformAnimation_hook.before.connect(PerformAnimation);
        static kthook::kthook_t<decltype(&SetRotation)> SetRotation_hook{ GetAddress(0x9BE60) }; SetRotation_hook.before.connect(SetRotation);
        static kthook::kthook_t<decltype(&GetHealth)> GetHealth_hook{ GetAddress(0x9BEA0) }; GetHealth_hook.before.connect(GetHealth);
        static kthook::kthook_t<decltype(&SetHealth)> SetHealth_hook{ GetAddress(0x9BEC0) }; SetHealth_hook.before.connect(SetHealth);
        static kthook::kthook_t<decltype(&SetInvulnerable)> SetInvulnerable_hook{ GetAddress(0x9BFF0) }; SetInvulnerable_hook.before.connect(SetInvulnerable);
    }


    // void **m_lpVtbl = 0xEC298;
    ::CPed* m_pGamePed;
    GTAREF  m_marker;
    GTAREF  m_arrow;
    bool    m_bNeedsToCreateMarker;
    bool    m_bInvulnerable;

    
    Actor(int nModel, CVector position, float fRotation);
    ~Actor();

    MAKE_RET(void) Destroy();
    MAKE_RET(void) PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime);
    MAKE_RET(void) SetRotation(float fAngle);
    MAKE_RET(float) GetHealth();
    MAKE_RET(void) SetHealth(float fAngle);
    MAKE_RET(void) SetInvulnerable(bool bEnable);
};

END_PACK

#endif // ACTOR_HPP_