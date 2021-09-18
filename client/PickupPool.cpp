#include "PickupPool.hpp"

MAKE_RET(void) PickupPool::Create(Pickup* pData, ID nId) {

    return true;
}

MAKE_RET(void) PickupPool::CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner) {

    return true;
}

MAKE_RET(void) PickupPool::Delete(int nId) {

    return true;
}

MAKE_RET(void) PickupPool::DeleteWeapon(ID nExOwner) {

    return true;
}

MAKE_RET(int) PickupPool::GetIndex(int nId) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) PickupPool::SendNotification(int nId) {

    return true;
}

MAKE_RET(void) PickupPool::Process() {

    return true;
}

