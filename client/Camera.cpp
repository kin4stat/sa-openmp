#include "Camera.hpp"

Camera::Camera() {

}
void Camera::Fade(BOOL bin) {

    return;
}

void Camera::GetMatrix(CMatrix* pMatrix) {

    return;
}

void Camera::SetMatrix(CMatrix matrix) {

    return;
}

void Camera::SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition) {

    return;
}

void Camera::SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth) {

    return;
}

void Camera::Attach(CEntity* pOwner) {

    return;
}

void Camera::SetToOwner() {

    return;
}

float Camera::GetDistanceToPoint(CVector* pPoint) {

    return float{};
}

void Camera::Restore() {

    return;
}

void Camera::Set(CVector position, CVector rotation) {

    return;
}

void Camera::PointAt(CVector point, int nSwitchStyle) {

    return;
}

void Camera::Detach() {

    return;
}

