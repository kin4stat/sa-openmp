#include "Entity.hpp"

Entity::Entity() {

}
void Entity::GetMatrix(CMatrix* pMatrix) {

    return;
}

void Entity::SetMatrix(CMatrix matrix) {

    return;
}

void Entity::GetSpeed(CVector* pVec) {

    return;
}

void Entity::SetSpeed(CVector vec) {

    return;
}

void Entity::GetTurnSpeed(CVector* pVec) {

    return;
}

void Entity::SetTurnSpeed(CVector vec) {

    return;
}

void Entity::ApplyTurnSpeed() {

    return;
}

float Entity::GetDistanceFromCentreOfMassToBaseOfModel() {

    return float{};
}

void Entity::GetBoundCentre(CVector* pVec) {

    return;
}

void Entity::SetModelIndex(int nModel) {

    return;
}

int Entity::GetModelIndex() {

    return int{};
}

void Entity::Teleport(CVector position) {

    return;
}

float Entity::GetDistanceToLocalPlayer() {

    return float{};
}

float Entity::GetDistanceToCamera() {

    return float{};
}

float Entity::GetDistanceToPoint(CVector position) {

    return float{};
}

BOOL Entity::DoesExist() {

    return BOOL{};
}

BOOL Entity::EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY) {

    return BOOL{};
}

BOOL Entity::HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY) {

    return BOOL{};
}

void Entity::GetEulerInverted(float* x, float* y, float* z) {

    return;
}

BOOL Entity::IsIgnored() {

    return BOOL{};
}

BOOL Entity::IsStationary() {

    return BOOL{};
}

BOOL Entity::GetCollisionFlag() {

    return BOOL{};
}

void Entity::SetCollisionFlag(BOOL bEnable) {

    return;
}

RwObject* Entity::GetRwObject() {

    return RwObject*{};
}

void Entity::DeleteRwObject() {

    return;
}

void Entity::UpdateRwFrame() {

    return;
}

float Entity::GetDistanceToLocalPlayerNoHeight() {

    return float{};
}

void Entity::SetCollisionProcessed(BOOL bProcessed) {

    return;
}

