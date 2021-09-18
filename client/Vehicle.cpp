#include "Vehicle.hpp"

Vehicle::Vehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {

}
MAKE_RET(void) Vehicle::ChangeInterior(int nId) {

    return true;
}

MAKE_RET(void) Vehicle::ResetPointers() {

    return true;
}

MAKE_RET(BOOL) Vehicle::HasDriver() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsOccupied() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::SetInvulnerable(BOOL bInv) {

    return true;
}

MAKE_RET(void) Vehicle::SetLocked(BOOL block) {

    return true;
}

MAKE_RET(float) Vehicle::GetHealth() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Vehicle::SetHealth(float fValue) {

    return true;
}

MAKE_RET(void) Vehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {

    return true;
}

MAKE_RET(void) Vehicle::UpdateColor() {

    return true;
}

MAKE_RET(int) Vehicle::GetSubtype() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsSunk() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsWrecked() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::DriverIsPlayerPed() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::HasPlayerPed() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsTrainPart() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::HasTurret() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::EnableSiren(bool bEnable) {

    return true;
}

MAKE_RET(BOOL) Vehicle::SirenEnabled() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::SetLandingGearState(BOOL bHide) {

    return true;
}

MAKE_RET(BOOL) Vehicle::GetLandingGearState() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::SetHydraThrusters(int nDirection) {

    return true;
}

MAKE_RET(int) Vehicle::GetHydraThrusters() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Vehicle::ProcessMarkers() {

    return true;
}

MAKE_RET(void) Vehicle::Lock(BOOL bLock) {

    return true;
}

MAKE_RET(BOOL) Vehicle::UpdateLastDrivenTime() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(float) Vehicle::GetTrainSpeed() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Vehicle::SetTrainSpeed(float fValue) {

    return true;
}

MAKE_RET(void) Vehicle::SetTires(char nState) {

    return true;
}

MAKE_RET(char) Vehicle::GetTires() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Vehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {

    return true;
}

MAKE_RET(int) Vehicle::GetPanelsDamage() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) Vehicle::GetDoorsDamage() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(char) Vehicle::GetLightsDamage() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Vehicle::AttachTrailer() {

    return true;
}

MAKE_RET(void) Vehicle::DetachTrailer() {

    return true;
}

MAKE_RET(void) Vehicle::SetTrailer(CVehicle* pVehicle) {

    return true;
}

MAKE_RET(CVehicle*) Vehicle::GetTrailer() {

    return kthook::return_value<CVehicle*>::make_true();
}

MAKE_RET(CVehicle*) Vehicle::GetTractor() {

    return kthook::return_value<CVehicle*>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsTrailer() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsTowtruck() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::IsRC() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::EnableLights(bool bEnable) {

    return true;
}

MAKE_RET(void) Vehicle::RemovePassengers() {

    return true;
}

MAKE_RET(BOOL) Vehicle::AddComponent(unsigned short nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Vehicle::RemoveComponent(unsigned short nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::SetPaintjob(NUMBER nId) {

    return true;
}

MAKE_RET(BOOL) Vehicle::DoesExist() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Vehicle::SetLicensePlateText(const char* szText) {

    return true;
}

MAKE_RET(void) Vehicle::SetRotation(float fValue) {

    return true;
}

MAKE_RET(void) Vehicle::ConstructLicensePlate() {

    return true;
}

MAKE_RET(void) Vehicle::ShutdownLicensePlate() {

    return true;
}

MAKE_RET(BOOL) Vehicle::HasSiren() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(char) Vehicle::GetMaxPassengers() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Vehicle::SetWindowOpenFlag(NUMBER nDoorId) {

    return true;
}

MAKE_RET(void) Vehicle::ClearWindowOpenFlag(NUMBER nDoorId) {

    return true;
}

MAKE_RET(void) Vehicle::EnableEngine(BOOL bEnable) {

    return true;
}

