#ifndef ACTOR_HPP_
#define ACTOR_HPP_

#include "common.hpp"
#include "Entity.hpp"

#include "CPed.h"

BEGIN_PACK

class Actor {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Actor", "Destroy", GetAddress(0x9BCF0), &Actor::Destroy);
        ReversibleHooks::Install("Actor", "PerformAnimation", GetAddress(0x9BD50), &Actor::PerformAnimation);
        ReversibleHooks::Install("Actor", "SetRotation", GetAddress(0x9BE60), &Actor::SetRotation);
        ReversibleHooks::Install("Actor", "GetHealth", GetAddress(0x9BEA0), &Actor::GetHealth);
        ReversibleHooks::Install("Actor", "SetHealth", GetAddress(0x9BEC0), &Actor::SetHealth);
        ReversibleHooks::Install("Actor", "SetInvulnerable", GetAddress(0x9BFF0), &Actor::SetInvulnerable);
    }


    // void **m_lpVtbl = 0xEC298;
    ::CPed* m_pGamePed;
    GTAREF  m_marker;
    GTAREF  m_arrow;
    bool    m_bNeedsToCreateMarker;
    bool    m_bInvulnerable;

    
    Actor(int nModel, CVector position, float fRotation);
    ~Actor();

    void Destroy();
    void PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime);
    void SetRotation(float fAngle);
    float GetHealth();
    void SetHealth(float fAngle);
    void SetInvulnerable(bool bEnable);
};

END_PACK

#endif // ACTOR_HPP_