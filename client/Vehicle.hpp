#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Entity.hpp"

BEGIN_PACK

class Vehicle {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Vehicle", "ChangeInterior", GetAddress(0xB6800), &Vehicle::ChangeInterior);
        ReversibleHooks::Install("Vehicle", "ResetPointers", GetAddress(0xB6830), &Vehicle::ResetPointers);
        ReversibleHooks::Install("Vehicle", "HasDriver", GetAddress(0xB6850), &Vehicle::HasDriver);
        ReversibleHooks::Install("Vehicle", "IsOccupied", GetAddress(0xB68A0), &Vehicle::IsOccupied);
        ReversibleHooks::Install("Vehicle", "SetInvulnerable", GetAddress(0xB6900), &Vehicle::SetInvulnerable);
        ReversibleHooks::Install("Vehicle", "SetLocked", GetAddress(0xB69A0), &Vehicle::SetLocked);
        ReversibleHooks::Install("Vehicle", "GetHealth", GetAddress(0xB6A10), &Vehicle::GetHealth);
        ReversibleHooks::Install("Vehicle", "SetHealth", GetAddress(0xB6A30), &Vehicle::SetHealth);
        ReversibleHooks::Install("Vehicle", "SetColor", GetAddress(0xB6A50), &Vehicle::SetColor);
        ReversibleHooks::Install("Vehicle", "UpdateColor", GetAddress(0xB6AA0), &Vehicle::UpdateColor);
        ReversibleHooks::Install("Vehicle", "GetSubtype", GetAddress(0xB6B00), &Vehicle::GetSubtype);
        ReversibleHooks::Install("Vehicle", "IsSunk", GetAddress(0xB6B20), &Vehicle::IsSunk);
        ReversibleHooks::Install("Vehicle", "IsWrecked", GetAddress(0xB6B40), &Vehicle::IsWrecked);
        ReversibleHooks::Install("Vehicle", "DriverIsPlayerPed", GetAddress(0xB6B60), &Vehicle::DriverIsPlayerPed);
        ReversibleHooks::Install("Vehicle", "HasPlayerPed", GetAddress(0xB6B90), &Vehicle::HasPlayerPed);
        ReversibleHooks::Install("Vehicle", "IsTrainPart", GetAddress(0xB6BD0), &Vehicle::IsTrainPart);
        ReversibleHooks::Install("Vehicle", "HasTurret", GetAddress(0xB6C10), &Vehicle::HasTurret);
        ReversibleHooks::Install("Vehicle", "EnableSiren", GetAddress(0xB6CB0), &Vehicle::EnableSiren);
        ReversibleHooks::Install("Vehicle", "SirenEnabled", GetAddress(0xB6CD0), &Vehicle::SirenEnabled);
        ReversibleHooks::Install("Vehicle", "SetLandingGearState", GetAddress(0xB6D10), &Vehicle::SetLandingGearState);
        ReversibleHooks::Install("Vehicle", "GetLandingGearState", GetAddress(0xB6DA0), &Vehicle::GetLandingGearState);
        ReversibleHooks::Install("Vehicle", "SetHydraThrusters", GetAddress(0xB6E10), &Vehicle::SetHydraThrusters);
        ReversibleHooks::Install("Vehicle", "GetHydraThrusters", GetAddress(0xB6E30), &Vehicle::GetHydraThrusters);
        ReversibleHooks::Install("Vehicle", "ProcessMarkers", GetAddress(0xB6E50), &Vehicle::ProcessMarkers);
        ReversibleHooks::Install("Vehicle", "Lock", GetAddress(0xB6FB0), &Vehicle::Lock);
        ReversibleHooks::Install("Vehicle", "UpdateLastDrivenTime", GetAddress(0xB6FE0), &Vehicle::UpdateLastDrivenTime);
        ReversibleHooks::Install("Vehicle", "GetTrainSpeed", GetAddress(0xB7050), &Vehicle::GetTrainSpeed);
        ReversibleHooks::Install("Vehicle", "SetTrainSpeed", GetAddress(0xB7070), &Vehicle::SetTrainSpeed);
        ReversibleHooks::Install("Vehicle", "SetTires", GetAddress(0xB70B0), &Vehicle::SetTires);
        ReversibleHooks::Install("Vehicle", "GetTires", GetAddress(0xB71A0), &Vehicle::GetTires);
        ReversibleHooks::Install("Vehicle", "UpdateDamage", GetAddress(0xB7230), &Vehicle::UpdateDamage);
        ReversibleHooks::Install("Vehicle", "GetPanelsDamage", GetAddress(0xB72F0), &Vehicle::GetPanelsDamage);
        ReversibleHooks::Install("Vehicle", "GetDoorsDamage", GetAddress(0xB7320), &Vehicle::GetDoorsDamage);
        ReversibleHooks::Install("Vehicle", "GetLightsDamage", GetAddress(0xB7350), &Vehicle::GetLightsDamage);
        ReversibleHooks::Install("Vehicle", "AttachTrailer", GetAddress(0xB7380), &Vehicle::AttachTrailer);
        ReversibleHooks::Install("Vehicle", "DetachTrailer", GetAddress(0xB73A0), &Vehicle::DetachTrailer);
        ReversibleHooks::Install("Vehicle", "SetTrailer", GetAddress(0xB73F0), &Vehicle::SetTrailer);
        ReversibleHooks::Install("Vehicle", "GetTrailer", GetAddress(0xB7400), &Vehicle::GetTrailer);
        ReversibleHooks::Install("Vehicle", "GetTractor", GetAddress(0xB7460), &Vehicle::GetTractor);
        ReversibleHooks::Install("Vehicle", "IsTrailer", GetAddress(0xB74E0), &Vehicle::IsTrailer);
        ReversibleHooks::Install("Vehicle", "IsTowtruck", GetAddress(0xB7540), &Vehicle::IsTowtruck);
        ReversibleHooks::Install("Vehicle", "IsRC", GetAddress(0xB7570), &Vehicle::IsRC);
        ReversibleHooks::Install("Vehicle", "EnableLights", GetAddress(0xB75C0), &Vehicle::EnableLights);
        ReversibleHooks::Install("Vehicle", "RemovePassengers", GetAddress(0xB7650), &Vehicle::RemovePassengers);
        ReversibleHooks::Install("Vehicle", "AddComponent", GetAddress(0xB7730), &Vehicle::AddComponent);
        ReversibleHooks::Install("Vehicle", "RemoveComponent", GetAddress(0xB7810), &Vehicle::RemoveComponent);
        ReversibleHooks::Install("Vehicle", "SetPaintjob", GetAddress(0xB7850), &Vehicle::SetPaintjob);
        ReversibleHooks::Install("Vehicle", "DoesExist", GetAddress(0xB78A0), &Vehicle::DoesExist);
        ReversibleHooks::Install("Vehicle", "SetLicensePlateText", GetAddress(0xB78B0), &Vehicle::SetLicensePlateText);
        ReversibleHooks::Install("Vehicle", "SetRotation", GetAddress(0xB78D0), &Vehicle::SetRotation);
        ReversibleHooks::Install("Vehicle", "ConstructLicensePlate", GetAddress(0xB7900), &Vehicle::ConstructLicensePlate);
        ReversibleHooks::Install("Vehicle", "ShutdownLicensePlate", GetAddress(0xB7950), &Vehicle::ShutdownLicensePlate);
        ReversibleHooks::Install("Vehicle", "HasSiren", GetAddress(0xB7A90), &Vehicle::HasSiren);
        ReversibleHooks::Install("Vehicle", "GetMaxPassengers", GetAddress(0xB7AA0), &Vehicle::GetMaxPassengers);
        ReversibleHooks::Install("Vehicle", "SetWindowOpenFlag", GetAddress(0xB7AD0), &Vehicle::SetWindowOpenFlag);
        ReversibleHooks::Install("Vehicle", "ClearWindowOpenFlag", GetAddress(0xB7B00), &Vehicle::ClearWindowOpenFlag);
        ReversibleHooks::Install("Vehicle", "EnableEngine", GetAddress(0xB81D0), &Vehicle::EnableEngine);
    }


    enum { MAX_LICENSE_PLATE_TEXT = 32 };

    // void **m_lpVtbl = 0xED6E8;
    Vehicle*          m_pTrailer;
    ::CVehicle*        m_pGameVehicle;
    char               pad_50[8];
    BOOL               m_bIsInvulnerable;
    BOOL               m_bIsLightsOn;
    BOOL               m_bIsLocked;
    bool               m_bIsObjective;
    BOOL               m_bObjectiveBlipCreated;
    TICK               m_timeSinceLastDriven;
    BOOL               m_bHasBeenDriven;
    char               pad_71[4];
    BOOL               m_bEngineState;
    unsigned char      m_nPrimaryColor;
    unsigned char      m_nSecondaryColor;
    BOOL               m_bNeedsToUpdateColor;
    BOOL               m_bUnoccupiedSync;
    BOOL               m_bRemoteUnocSync;
    BOOL               m_bKeepModelLoaded;
    int                m_bHasSiren;
    IDirect3DTexture9* m_pLicensePlate;
    char               m_szLicensePlateText[MAX_LICENSE_PLATE_TEXT + 1];
    GTAREF             m_marker;

    
    Vehicle(int nModel, Vector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren);
    ~Vehicle();

    void ChangeInterior(int nId);
    void ResetPointers();
    BOOL HasDriver();
    BOOL IsOccupied();
    void SetInvulnerable(BOOL bInv);
    void SetLocked(BOOL block);
    float GetHealth();
    void SetHealth(float fValue);
    void SetColor(NUMBER nPrimary, NUMBER nSecondary);
    void UpdateColor();
    int GetSubtype();
    BOOL IsSunk();
    BOOL IsWrecked();
    BOOL DriverIsPlayerPed();
    BOOL HasPlayerPed();
    BOOL IsTrainPart();
    BOOL HasTurret();
    void EnableSiren(bool bEnable);
    BOOL SirenEnabled();
    void SetLandingGearState(BOOL bHide);
    BOOL GetLandingGearState();
    void SetHydraThrusters(int nDirection);
    int GetHydraThrusters();
    void ProcessMarkers();
    void Lock(BOOL bLock);
    BOOL UpdateLastDrivenTime();
    float GetTrainSpeed();
    void SetTrainSpeed(float fValue);
    void SetTires(char nState);
    char GetTires();
    void UpdateDamage(int nPanels, int nDoors, char nLights);
    int GetPanelsDamage();
    int GetDoorsDamage();
    char GetLightsDamage();
    void AttachTrailer();
    void DetachTrailer();
    void SetTrailer(Vehicle* pVehicle);
    Vehicle* GetTrailer();
    Vehicle* GetTractor();
    BOOL IsTrailer();
    BOOL IsTowtruck();
    BOOL IsRC();
    void EnableLights(bool bEnable);
    void RemovePassengers();
    BOOL AddComponent(unsigned short nId);
    BOOL RemoveComponent(unsigned short nId);
    void SetPaintjob(NUMBER nId);
    BOOL DoesExist();
    void SetLicensePlateText(const char* szText);
    void SetRotation(float fValue);
    void ConstructLicensePlate();
    void ShutdownLicensePlate();
    BOOL HasSiren();
    char GetMaxPassengers();
    void SetWindowOpenFlag(NUMBER nDoorId);
    void ClearWindowOpenFlag(NUMBER nDoorId);
    void EnableEngine(BOOL bEnable);
};

END_PACK

#endif // VEHICLE_HPP_