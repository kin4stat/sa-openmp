#ifndef PICKUPPOOL_HPP_
#define PICKUPPOOL_HPP_

#include "common.hpp"

BEGIN_PACK

class PickupPool {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Create)> Create_hook{ GetAddress(0x12F20) }; Create_hook.before.connect(Create);
        static kthook::kthook_t<decltype(&CreateWeapon)> CreateWeapon_hook{ GetAddress(0x12E30) }; CreateWeapon_hook.before.connect(CreateWeapon);
        static kthook::kthook_t<decltype(&Delete)> Delete_hook{ GetAddress(0x12FD0) }; Delete_hook.before.connect(Delete);
        static kthook::kthook_t<decltype(&DeleteWeapon)> DeleteWeapon_hook{ GetAddress(0x13030) }; DeleteWeapon_hook.before.connect(DeleteWeapon);
        static kthook::kthook_t<decltype(&GetIndex)> GetIndex_hook{ GetAddress(0x13090) }; GetIndex_hook.before.connect(GetIndex);
        static kthook::kthook_t<decltype(&SendNotification)> SendNotification_hook{ GetAddress(0x130F0) }; SendNotification_hook.before.connect(SendNotification);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x131D0) }; Process_hook.before.connect(Process);
    }



    ~PickupPool();

    MAKE_RET(void) Create(Pickup* pData, ID nId);
    MAKE_RET(void) CreateWeapon(int nModel, CVector position, int nAmmo, ID nExOwner);
    MAKE_RET(void) Delete(int nId);
    MAKE_RET(void) DeleteWeapon(ID nExOwner);
    MAKE_RET(int) GetIndex(int nId);
    MAKE_RET(void) SendNotification(int nId);
    MAKE_RET(void) Process();
};

END_PACK

#endif // PICKUPPOOL_HPP_