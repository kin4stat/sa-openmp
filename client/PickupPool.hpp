#ifndef PICKUPPOOL_HPP_
#define PICKUPPOOL_HPP_

#include "common.hpp"
#include "Vector.hpp"

BEGIN_PACK

struct Pickup {
    int     m_nModel;
    int     m_nType;
    Vector m_position;
};

struct  WeaponPickup {
    bool m_bExists;
    ID   m_nExOwner;
};

class PickupPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("PickupPool", "Create", GetAddress(0x12F20), &PickupPool::Create);
        ReversibleHooks::Install("PickupPool", "CreateWeapon", GetAddress(0x12E30), &PickupPool::CreateWeapon);
        ReversibleHooks::Install("PickupPool", "Delete", GetAddress(0x12FD0), &PickupPool::Delete);
        ReversibleHooks::Install("PickupPool", "DeleteWeapon", GetAddress(0x13030), &PickupPool::DeleteWeapon);
        ReversibleHooks::Install("PickupPool", "GetIndex", GetAddress(0x13090), &PickupPool::GetIndex);
        ReversibleHooks::Install("PickupPool", "SendNotification", GetAddress(0x130F0), &PickupPool::SendNotification);
        ReversibleHooks::Install("PickupPool", "Process", GetAddress(0x131D0), &PickupPool::Process);
    }


    enum { MAX_PICKUPS = 4096 };

    int           m_nCount;
    GTAREF        m_handle[MAX_PICKUPS];
    int           m_nId[MAX_PICKUPS];
    unsigned long m_nTimer[MAX_PICKUPS];
    WeaponPickup  m_weapon[MAX_PICKUPS];
    Pickup        m_object[MAX_PICKUPS];

    
    PickupPool();
    ~PickupPool();

    void Create(Pickup* pData, ID nId);
    void CreateWeapon(int nModel, Vector position, int nAmmo, ID nExOwner);
    void Delete(int nId);
    void DeleteWeapon(ID nExOwner);
    int GetIndex(int nId);
    void SendNotification(int nId);
    void Process();
};

END_PACK

#endif // PICKUPPOOL_HPP_