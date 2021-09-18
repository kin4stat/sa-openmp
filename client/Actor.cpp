#include "Actor.hpp"

Actor::Actor(int nModel, CVector position, float fRotation) {

}
MAKE_RET(void) Actor::Destroy() {

    return true;
}

MAKE_RET(void) Actor::PerformAnimation(const char* szAnim, const char* szIFP, float fFramedelta, int bLockA, int bLockX, int bLockY, int bLockF, int nTime) {

    return true;
}

MAKE_RET(void) Actor::SetRotation(float fAngle) {

    return true;
}

MAKE_RET(float) Actor::GetHealth() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Actor::SetHealth(float fAngle) {

    return true;
}

MAKE_RET(void) Actor::SetInvulnerable(bool bEnable) {

    return true;
}

