#include "Camera.hpp"

MAKE_RET(void) Camera::Fade(BOOL bin) {

    return true;
}

MAKE_RET(void) Camera::GetMatrix(CMatrix* pMatrix) {

    return true;
}

MAKE_RET(void) Camera::SetMatrix(CMatrix matrix) {

    return true;
}

MAKE_RET(void) Camera::SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition) {

    return true;
}

MAKE_RET(void) Camera::SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth) {

    return true;
}

MAKE_RET(void) Camera::Attach(CEntity* pOwner) {

    return true;
}

MAKE_RET(void) Camera::SetToOwner() {

    return true;
}

MAKE_RET(float) Camera::GetDistanceToPoint(CVector* pPoint) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Camera::Restore() {

    return true;
}

MAKE_RET(void) Camera::Set(CVector position, CVector rotation) {

    return true;
}

MAKE_RET(void) Camera::PointAt(CVector point, int nSwitchStyle) {

    return true;
}

MAKE_RET(void) Camera::Detach() {

    return true;
}

