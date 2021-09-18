#include "VehiclePool.hpp"

VehiclePool::VehiclePool() {

}
void VehiclePool::UpdateCount() {

    return;
}

BOOL VehiclePool::Delete(ID nId) {

    return BOOL{};
}

void VehiclePool::ChangeInterior(ID nId, int nInteriorId) {

    return;
}

void VehiclePool::SetParams(ID nId, bool bIsObjective, bool bIsLocked) {

    return;
}

GTAREF VehiclePool::GetRef(int nId) {

    return GTAREF{};
}

ID VehiclePool::GetNearest() {

    return ID{};
}

ID VehiclePool::GetNearest(CVector point) {

    return ID{};
}

void VehiclePool::AddToWaitingList(const VehicleInfo* pInfo) {

    return;
}

void VehiclePool::ConstructLicensePlates() {

    return;
}

void VehiclePool::ShutdownLicensePlates() {

    return;
}

BOOL VehiclePool::Create(VehicleInfo* pInfo) {

    return BOOL{};
}

void VehiclePool::SendDestroyNotification(ID nId) {

    return;
}

void VehiclePool::ProcessWaitingList() {

    return;
}

void VehiclePool::Process() {

    return;
}

CVehicle* VehiclePool::Get(ID nId) {

    return CVehicle*{};
}

BOOL VehiclePool::DoesExist(ID nId) {

    return BOOL{};
}

