#include "Vehicle.hpp"

Vehicle::Vehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren) {

}
void Vehicle::ChangeInterior(int nId) {

    return;
}

void Vehicle::ResetPointers() {

    return;
}

BOOL Vehicle::HasDriver() {

    return BOOL{};
}

BOOL Vehicle::IsOccupied() {

    return BOOL{};
}

void Vehicle::SetInvulnerable(BOOL bInv) {

    return;
}

void Vehicle::SetLocked(BOOL block) {

    return;
}

float Vehicle::GetHealth() {

    return float{};
}

void Vehicle::SetHealth(float fValue) {

    return;
}

void Vehicle::SetColor(NUMBER nPrimary, NUMBER nSecondary) {

    return;
}

void Vehicle::UpdateColor() {

    return;
}

int Vehicle::GetSubtype() {

    return int{};
}

BOOL Vehicle::IsSunk() {

    return BOOL{};
}

BOOL Vehicle::IsWrecked() {

    return BOOL{};
}

BOOL Vehicle::DriverIsPlayerPed() {

    return BOOL{};
}

BOOL Vehicle::HasPlayerPed() {

    return BOOL{};
}

BOOL Vehicle::IsTrainPart() {

    return BOOL{};
}

BOOL Vehicle::HasTurret() {

    return BOOL{};
}

void Vehicle::EnableSiren(bool bEnable) {

    return;
}

BOOL Vehicle::SirenEnabled() {

    return BOOL{};
}

void Vehicle::SetLandingGearState(BOOL bHide) {

    return;
}

BOOL Vehicle::GetLandingGearState() {

    return BOOL{};
}

void Vehicle::SetHydraThrusters(int nDirection) {

    return;
}

int Vehicle::GetHydraThrusters() {

    return int{};
}

void Vehicle::ProcessMarkers() {

    return;
}

void Vehicle::Lock(BOOL bLock) {

    return;
}

BOOL Vehicle::UpdateLastDrivenTime() {

    return BOOL{};
}

float Vehicle::GetTrainSpeed() {

    return float{};
}

void Vehicle::SetTrainSpeed(float fValue) {

    return;
}

void Vehicle::SetTires(char nState) {

    return;
}

char Vehicle::GetTires() {

    return char{};
}

void Vehicle::UpdateDamage(int nPanels, int nDoors, char nLights) {

    return;
}

int Vehicle::GetPanelsDamage() {

    return int{};
}

int Vehicle::GetDoorsDamage() {

    return int{};
}

char Vehicle::GetLightsDamage() {

    return char{};
}

void Vehicle::AttachTrailer() {

    return;
}

void Vehicle::DetachTrailer() {

    return;
}

void Vehicle::SetTrailer(Vehicle* pVehicle) {

    return;
}

Vehicle* Vehicle::GetTrailer() {

    return nullptr;
}

Vehicle* Vehicle::GetTractor() {

    return nullptr;
}

BOOL Vehicle::IsTrailer() {

    return BOOL{};
}

BOOL Vehicle::IsTowtruck() {

    return BOOL{};
}

BOOL Vehicle::IsRC() {

    return BOOL{};
}

void Vehicle::EnableLights(bool bEnable) {

    return;
}

void Vehicle::RemovePassengers() {

    return;
}

BOOL Vehicle::AddComponent(unsigned short nId) {

    return BOOL{};
}

BOOL Vehicle::RemoveComponent(unsigned short nId) {

    return BOOL{};
}

void Vehicle::SetPaintjob(NUMBER nId) {

    return;
}

BOOL Vehicle::DoesExist() {

    return BOOL{};
}

void Vehicle::SetLicensePlateText(const char* szText) {

    return;
}

void Vehicle::SetRotation(float fValue) {

    return;
}

void Vehicle::ConstructLicensePlate() {

    return;
}

void Vehicle::ShutdownLicensePlate() {

    return;
}

BOOL Vehicle::HasSiren() {

    return BOOL{};
}

char Vehicle::GetMaxPassengers() {

    return char{};
}

void Vehicle::SetWindowOpenFlag(NUMBER nDoorId) {

    return;
}

void Vehicle::ClearWindowOpenFlag(NUMBER nDoorId) {

    return;
}

void Vehicle::EnableEngine(BOOL bEnable) {

    return;
}

