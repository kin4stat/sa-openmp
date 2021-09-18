#include "Entity.hpp"

MAKE_RET(void) Entity::GetMatrix(CMatrix* pMatrix) {

    return true;
}

MAKE_RET(void) Entity::SetMatrix(CMatrix matrix) {

    return true;
}

MAKE_RET(void) Entity::GetSpeed(CVector* pVec) {

    return true;
}

MAKE_RET(void) Entity::SetSpeed(CVector vec) {

    return true;
}

MAKE_RET(void) Entity::GetTurnSpeed(CVector* pVec) {

    return true;
}

MAKE_RET(void) Entity::SetTurnSpeed(CVector vec) {

    return true;
}

MAKE_RET(void) Entity::ApplyTurnSpeed() {

    return true;
}

MAKE_RET(float) Entity::GetDistanceFromCentreOfMassToBaseOfModel() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Entity::GetBoundCentre(CVector* pVec) {

    return true;
}

MAKE_RET(void) Entity::SetModelIndex(int nModel) {

    return true;
}

MAKE_RET(int) Entity::GetModelIndex() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Entity::Teleport(CVector position) {

    return true;
}

MAKE_RET(float) Entity::GetDistanceToLocalPlayer() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(float) Entity::GetDistanceToCamera() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(float) Entity::GetDistanceToPoint(CVector position) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(BOOL) Entity::DoesExist() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Entity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Entity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Entity::GetEulerInverted(float* x, float* y, float* z) {

    return true;
}

MAKE_RET(BOOL) Entity::IsIgnored() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Entity::IsStationary() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Entity::GetCollisionFlag() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Entity::SetCollisionFlag(BOOL bEnable) {

    return true;
}

MAKE_RET(RwObject*) Entity::GetRwObject() {

    return kthook::return_value<RwObject*>::make_true();
}

MAKE_RET(void) Entity::DeleteRwObject() {

    return true;
}

MAKE_RET(void) Entity::UpdateRwFrame() {

    return true;
}

MAKE_RET(float) Entity::GetDistanceToLocalPlayerNoHeight() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Entity::SetCollisionProcessed(BOOL bProcessed) {

    return true;
}

