#ifndef VEHICLEPOOL_HPP_
#define VEHICLEPOOL_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Vehicle.hpp"

BEGIN_PACK

class VehiclePool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("VehiclePool", "UpdateCount", GetAddress(0x1E260), &VehiclePool::UpdateCount);
        ReversibleHooks::Install("VehiclePool", "Delete", GetAddress(0x1E330), &VehiclePool::Delete);
        ReversibleHooks::Install("VehiclePool", "ChangeInterior", GetAddress(0x1E3B0), &VehiclePool::ChangeInterior);
        ReversibleHooks::Install("VehiclePool", "SetParams", GetAddress(0x1E3E0), &VehiclePool::SetParams);
        ReversibleHooks::Install("VehiclePool", "GetRef", GetAddress(0x1E490), &VehiclePool::GetRef);
        ReversibleHooks::Install("VehiclePool", "GetNearest", GetAddress(0x1E520), static_cast<ID(VehiclePool::*)()>(&VehiclePool::GetNearest));
        ReversibleHooks::Install("VehiclePool", "GetNearest", GetAddress(0x1E520), static_cast<ID(VehiclePool::*)(Vector)>(&VehiclePool::GetNearest));
        ReversibleHooks::Install("VehiclePool", "AddToWaitingList", GetAddress(0x1E5C0), &VehiclePool::AddToWaitingList);
        ReversibleHooks::Install("VehiclePool", "ConstructLicensePlates", GetAddress(0x1E620), &VehiclePool::ConstructLicensePlates);
        ReversibleHooks::Install("VehiclePool", "ShutdownLicensePlates", GetAddress(0x1E690), &VehiclePool::ShutdownLicensePlates);
        ReversibleHooks::Install("VehiclePool", "Create", GetAddress(0x1E930), &VehiclePool::Create);
        ReversibleHooks::Install("VehiclePool", "SendDestroyNotification", GetAddress(0x1EAE0), &VehiclePool::SendDestroyNotification);
        ReversibleHooks::Install("VehiclePool", "ProcessWaitingList", GetAddress(0x1EBC0), &VehiclePool::ProcessWaitingList);
        ReversibleHooks::Install("VehiclePool", "Process", GetAddress(0x1EC80), &VehiclePool::Process);
        ReversibleHooks::Install("VehiclePool", "Get", GetAddress(0x1110), &VehiclePool::Get);
        ReversibleHooks::Install("VehiclePool", "DoesExist", GetAddress(0x1140), &VehiclePool::DoesExist);
    }


    enum {
        MAX_VEHICLES = 2000,
        WAITING_LIST_SIZE = 100,
    };
    struct VehicleInfo {
        ID      m_nId;
        int     m_nType;
        Vector m_position;
        float   m_fRotation;
        NUMBER  m_nPrimaryColor;
        NUMBER  m_nSecondaryColor;
        float   m_fHealth;
        char    m_nInterior;
        int     m_nDoorDamageStatus;
        int     m_nPanelDamageStatus;
        char    m_nLightDamageStatus;
        bool    m_bDoorsLocked;
        bool    m_bHasSiren;
    };

    int m_nCount;

    // vehicles that will be created after loading the model
    struct {
        VehicleInfo m_entry[WAITING_LIST_SIZE];
        BOOL        m_bNotEmpty[WAITING_LIST_SIZE];
    } m_waitingList;

    Vehicle*    m_pObject[MAX_VEHICLES];
    BOOL         m_bNotEmpty[MAX_VEHICLES];
    ::CVehicle*  m_pGameObject[MAX_VEHICLES];
    unsigned int pad_6ef4[MAX_VEHICLES];
    ID           m_nLastUndrivenId[MAX_VEHICLES]; // a player who send unoccupied sync data
    TICK         m_lastUndrivenProcessTick[MAX_VEHICLES];
    BOOL         m_bIsActive[MAX_VEHICLES];
    BOOL         m_bIsDestroyed[MAX_VEHICLES];
    TICK         m_tickWhenDestroyed[MAX_VEHICLES];
    Vector      m_spawnedAt[MAX_VEHICLES];
    BOOL         m_bNeedsToInitializeLicensePlates;

    
    VehiclePool();
    ~VehiclePool();

    void UpdateCount();
    BOOL Delete(ID nId);
    void ChangeInterior(ID nId, int nInteriorId);
    void SetParams(ID nId, bool bIsObjective, bool bIsLocked);
    GTAREF GetRef(int nId);
    ID GetNearest();
    ID GetNearest(Vector point);
    void AddToWaitingList(const VehicleInfo* pInfo);
    void ConstructLicensePlates();
    void ShutdownLicensePlates();
    BOOL Create(VehicleInfo* pInfo);
    void SendDestroyNotification(ID nId);
    void ProcessWaitingList();
    void Process();
    Vehicle* Get(ID nId);
    BOOL DoesExist(ID nId);
};

END_PACK

#endif // VEHICLEPOOL_HPP_