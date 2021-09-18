#include "VehiclePool.hpp"

MAKE_RET(void) VehiclePool::UpdateCount() {

    return true;
}

MAKE_RET(BOOL) VehiclePool::Delete(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) VehiclePool::ChangeInterior(ID nId, int nInteriorId) {

    return true;
}

MAKE_RET(void) VehiclePool::SetParams(ID nId, bool bIsObjective, bool bIsLocked) {

    return true;
}

MAKE_RET(GTAREF) VehiclePool::GetRef(int nId) {

    return kthook::return_value<GTAREF>::make_true();
}

MAKE_RET(ID) VehiclePool::GetNearest() {

    return kthook::return_value<ID>::make_true();
}

MAKE_RET(ID) VehiclePool::GetNearest(CVector point) {

    return kthook::return_value<ID>::make_true();
}

MAKE_RET(void) VehiclePool::AddToWaitingList(const VehicleInfo* pInfo) {

    return true;
}

MAKE_RET(void) VehiclePool::ConstructLicensePlates() {

    return true;
}

MAKE_RET(void) VehiclePool::ShutdownLicensePlates() {

    return true;
}

MAKE_RET(BOOL) VehiclePool::Create(VehicleInfo* pInfo) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) VehiclePool::SendDestroyNotification(ID nId) {

    return true;
}

MAKE_RET(void) VehiclePool::ProcessWaitingList() {

    return true;
}

MAKE_RET(void) VehiclePool::Process() {

    return true;
}

MAKE_RET(CVehicle*) VehiclePool::Get(ID nId) {

    return kthook::return_value<CVehicle*>::make_true();
}

MAKE_RET(BOOL) VehiclePool::DoesExist(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

