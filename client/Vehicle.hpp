#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_

#include "common.hpp"

BEGIN_PACK

class Vehicle {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&ChangeInterior)> ChangeInterior_hook{ GetAddress(0xB6800) }; ChangeInterior_hook.before.connect(ChangeInterior);
        static kthook::kthook_t<decltype(&ResetPointers)> ResetPointers_hook{ GetAddress(0xB6830) }; ResetPointers_hook.before.connect(ResetPointers);
        static kthook::kthook_t<decltype(&HasDriver)> HasDriver_hook{ GetAddress(0xB6850) }; HasDriver_hook.before.connect(HasDriver);
        static kthook::kthook_t<decltype(&IsOccupied)> IsOccupied_hook{ GetAddress(0xB68A0) }; IsOccupied_hook.before.connect(IsOccupied);
        static kthook::kthook_t<decltype(&SetInvulnerable)> SetInvulnerable_hook{ GetAddress(0xB6900) }; SetInvulnerable_hook.before.connect(SetInvulnerable);
        static kthook::kthook_t<decltype(&SetLocked)> SetLocked_hook{ GetAddress(0xB69A0) }; SetLocked_hook.before.connect(SetLocked);
        static kthook::kthook_t<decltype(&GetHealth)> GetHealth_hook{ GetAddress(0xB6A10) }; GetHealth_hook.before.connect(GetHealth);
        static kthook::kthook_t<decltype(&SetHealth)> SetHealth_hook{ GetAddress(0xB6A30) }; SetHealth_hook.before.connect(SetHealth);
        static kthook::kthook_t<decltype(&SetColor)> SetColor_hook{ GetAddress(0xB6A50) }; SetColor_hook.before.connect(SetColor);
        static kthook::kthook_t<decltype(&UpdateColor)> UpdateColor_hook{ GetAddress(0xB6AA0) }; UpdateColor_hook.before.connect(UpdateColor);
        static kthook::kthook_t<decltype(&GetSubtype)> GetSubtype_hook{ GetAddress(0xB6B00) }; GetSubtype_hook.before.connect(GetSubtype);
        static kthook::kthook_t<decltype(&IsSunk)> IsSunk_hook{ GetAddress(0xB6B20) }; IsSunk_hook.before.connect(IsSunk);
        static kthook::kthook_t<decltype(&IsWrecked)> IsWrecked_hook{ GetAddress(0xB6B40) }; IsWrecked_hook.before.connect(IsWrecked);
        static kthook::kthook_t<decltype(&DriverIsPlayerPed)> DriverIsPlayerPed_hook{ GetAddress(0xB6B60) }; DriverIsPlayerPed_hook.before.connect(DriverIsPlayerPed);
        static kthook::kthook_t<decltype(&HasPlayerPed)> HasPlayerPed_hook{ GetAddress(0xB6B90) }; HasPlayerPed_hook.before.connect(HasPlayerPed);
        static kthook::kthook_t<decltype(&IsTrainPart)> IsTrainPart_hook{ GetAddress(0xB6BD0) }; IsTrainPart_hook.before.connect(IsTrainPart);
        static kthook::kthook_t<decltype(&HasTurret)> HasTurret_hook{ GetAddress(0xB6C10) }; HasTurret_hook.before.connect(HasTurret);
        static kthook::kthook_t<decltype(&EnableSiren)> EnableSiren_hook{ GetAddress(0xB6CB0) }; EnableSiren_hook.before.connect(EnableSiren);
        static kthook::kthook_t<decltype(&SirenEnabled)> SirenEnabled_hook{ GetAddress(0xB6CD0) }; SirenEnabled_hook.before.connect(SirenEnabled);
        static kthook::kthook_t<decltype(&SetLandingGearState)> SetLandingGearState_hook{ GetAddress(0xB6D10) }; SetLandingGearState_hook.before.connect(SetLandingGearState);
        static kthook::kthook_t<decltype(&GetLandingGearState)> GetLandingGearState_hook{ GetAddress(0xB6DA0) }; GetLandingGearState_hook.before.connect(GetLandingGearState);
        static kthook::kthook_t<decltype(&SetHydraThrusters)> SetHydraThrusters_hook{ GetAddress(0xB6E10) }; SetHydraThrusters_hook.before.connect(SetHydraThrusters);
        static kthook::kthook_t<decltype(&GetHydraThrusters)> GetHydraThrusters_hook{ GetAddress(0xB6E30) }; GetHydraThrusters_hook.before.connect(GetHydraThrusters);
        static kthook::kthook_t<decltype(&ProcessMarkers)> ProcessMarkers_hook{ GetAddress(0xB6E50) }; ProcessMarkers_hook.before.connect(ProcessMarkers);
        static kthook::kthook_t<decltype(&Lock)> Lock_hook{ GetAddress(0xB6FB0) }; Lock_hook.before.connect(Lock);
        static kthook::kthook_t<decltype(&UpdateLastDrivenTime)> UpdateLastDrivenTime_hook{ GetAddress(0xB6FE0) }; UpdateLastDrivenTime_hook.before.connect(UpdateLastDrivenTime);
        static kthook::kthook_t<decltype(&GetTrainSpeed)> GetTrainSpeed_hook{ GetAddress(0xB7050) }; GetTrainSpeed_hook.before.connect(GetTrainSpeed);
        static kthook::kthook_t<decltype(&SetTrainSpeed)> SetTrainSpeed_hook{ GetAddress(0xB7070) }; SetTrainSpeed_hook.before.connect(SetTrainSpeed);
        static kthook::kthook_t<decltype(&SetTires)> SetTires_hook{ GetAddress(0xB70B0) }; SetTires_hook.before.connect(SetTires);
        static kthook::kthook_t<decltype(&GetTires)> GetTires_hook{ GetAddress(0xB71A0) }; GetTires_hook.before.connect(GetTires);
        static kthook::kthook_t<decltype(&UpdateDamage)> UpdateDamage_hook{ GetAddress(0xB7230) }; UpdateDamage_hook.before.connect(UpdateDamage);
        static kthook::kthook_t<decltype(&GetPanelsDamage)> GetPanelsDamage_hook{ GetAddress(0xB72F0) }; GetPanelsDamage_hook.before.connect(GetPanelsDamage);
        static kthook::kthook_t<decltype(&GetDoorsDamage)> GetDoorsDamage_hook{ GetAddress(0xB7320) }; GetDoorsDamage_hook.before.connect(GetDoorsDamage);
        static kthook::kthook_t<decltype(&GetLightsDamage)> GetLightsDamage_hook{ GetAddress(0xB7350) }; GetLightsDamage_hook.before.connect(GetLightsDamage);
        static kthook::kthook_t<decltype(&AttachTrailer)> AttachTrailer_hook{ GetAddress(0xB7380) }; AttachTrailer_hook.before.connect(AttachTrailer);
        static kthook::kthook_t<decltype(&DetachTrailer)> DetachTrailer_hook{ GetAddress(0xB73A0) }; DetachTrailer_hook.before.connect(DetachTrailer);
        static kthook::kthook_t<decltype(&SetTrailer)> SetTrailer_hook{ GetAddress(0xB73F0) }; SetTrailer_hook.before.connect(SetTrailer);
        static kthook::kthook_t<decltype(&GetTrailer)> GetTrailer_hook{ GetAddress(0xB7400) }; GetTrailer_hook.before.connect(GetTrailer);
        static kthook::kthook_t<decltype(&GetTractor)> GetTractor_hook{ GetAddress(0xB7460) }; GetTractor_hook.before.connect(GetTractor);
        static kthook::kthook_t<decltype(&IsTrailer)> IsTrailer_hook{ GetAddress(0xB74E0) }; IsTrailer_hook.before.connect(IsTrailer);
        static kthook::kthook_t<decltype(&IsTowtruck)> IsTowtruck_hook{ GetAddress(0xB7540) }; IsTowtruck_hook.before.connect(IsTowtruck);
        static kthook::kthook_t<decltype(&IsRC)> IsRC_hook{ GetAddress(0xB7570) }; IsRC_hook.before.connect(IsRC);
        static kthook::kthook_t<decltype(&EnableLights)> EnableLights_hook{ GetAddress(0xB75C0) }; EnableLights_hook.before.connect(EnableLights);
        static kthook::kthook_t<decltype(&RemovePassengers)> RemovePassengers_hook{ GetAddress(0xB7650) }; RemovePassengers_hook.before.connect(RemovePassengers);
        static kthook::kthook_t<decltype(&AddComponent)> AddComponent_hook{ GetAddress(0xB7730) }; AddComponent_hook.before.connect(AddComponent);
        static kthook::kthook_t<decltype(&RemoveComponent)> RemoveComponent_hook{ GetAddress(0xB7810) }; RemoveComponent_hook.before.connect(RemoveComponent);
        static kthook::kthook_t<decltype(&SetPaintjob)> SetPaintjob_hook{ GetAddress(0xB7850) }; SetPaintjob_hook.before.connect(SetPaintjob);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0xB78A0) }; DoesExist_hook.before.connect(DoesExist);
        static kthook::kthook_t<decltype(&SetLicensePlateText)> SetLicensePlateText_hook{ GetAddress(0xB78B0) }; SetLicensePlateText_hook.before.connect(SetLicensePlateText);
        static kthook::kthook_t<decltype(&SetRotation)> SetRotation_hook{ GetAddress(0xB78D0) }; SetRotation_hook.before.connect(SetRotation);
        static kthook::kthook_t<decltype(&ConstructLicensePlate)> ConstructLicensePlate_hook{ GetAddress(0xB7900) }; ConstructLicensePlate_hook.before.connect(ConstructLicensePlate);
        static kthook::kthook_t<decltype(&ShutdownLicensePlate)> ShutdownLicensePlate_hook{ GetAddress(0xB7950) }; ShutdownLicensePlate_hook.before.connect(ShutdownLicensePlate);
        static kthook::kthook_t<decltype(&HasSiren)> HasSiren_hook{ GetAddress(0xB7A90) }; HasSiren_hook.before.connect(HasSiren);
        static kthook::kthook_t<decltype(&GetMaxPassengers)> GetMaxPassengers_hook{ GetAddress(0xB7AA0) }; GetMaxPassengers_hook.before.connect(GetMaxPassengers);
        static kthook::kthook_t<decltype(&SetWindowOpenFlag)> SetWindowOpenFlag_hook{ GetAddress(0xB7AD0) }; SetWindowOpenFlag_hook.before.connect(SetWindowOpenFlag);
        static kthook::kthook_t<decltype(&ClearWindowOpenFlag)> ClearWindowOpenFlag_hook{ GetAddress(0xB7B00) }; ClearWindowOpenFlag_hook.before.connect(ClearWindowOpenFlag);
        static kthook::kthook_t<decltype(&EnableEngine)> EnableEngine_hook{ GetAddress(0xB81D0) }; EnableEngine_hook.before.connect(EnableEngine);
    }


    enum { MAX_LICENSE_PLATE_TEXT = 32 };

    // void **m_lpVtbl = 0xED6E8;
    CVehicle*          m_pTrailer;
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

    
    Vehicle(int nModel, CVector position, float fRotation, BOOL bKeepModelLoaded, BOOL bHasSiren);
    ~Vehicle();

    MAKE_RET(void) ChangeInterior(int nId);
    MAKE_RET(void) ResetPointers();
    MAKE_RET(BOOL) HasDriver();
    MAKE_RET(BOOL) IsOccupied();
    MAKE_RET(void) SetInvulnerable(BOOL bInv);
    MAKE_RET(void) SetLocked(BOOL block);
    MAKE_RET(float) GetHealth();
    MAKE_RET(void) SetHealth(float fValue);
    MAKE_RET(void) SetColor(NUMBER nPrimary, NUMBER nSecondary);
    MAKE_RET(void) UpdateColor();
    MAKE_RET(int) GetSubtype();
    MAKE_RET(BOOL) IsSunk();
    MAKE_RET(BOOL) IsWrecked();
    MAKE_RET(BOOL) DriverIsPlayerPed();
    MAKE_RET(BOOL) HasPlayerPed();
    MAKE_RET(BOOL) IsTrainPart();
    MAKE_RET(BOOL) HasTurret();
    MAKE_RET(void) EnableSiren(bool bEnable);
    MAKE_RET(BOOL) SirenEnabled();
    MAKE_RET(void) SetLandingGearState(BOOL bHide);
    MAKE_RET(BOOL) GetLandingGearState();
    MAKE_RET(void) SetHydraThrusters(int nDirection);
    MAKE_RET(int) GetHydraThrusters();
    MAKE_RET(void) ProcessMarkers();
    MAKE_RET(void) Lock(BOOL bLock);
    MAKE_RET(BOOL) UpdateLastDrivenTime();
    MAKE_RET(float) GetTrainSpeed();
    MAKE_RET(void) SetTrainSpeed(float fValue);
    MAKE_RET(void) SetTires(char nState);
    MAKE_RET(char) GetTires();
    MAKE_RET(void) UpdateDamage(int nPanels, int nDoors, char nLights);
    MAKE_RET(int) GetPanelsDamage();
    MAKE_RET(int) GetDoorsDamage();
    MAKE_RET(char) GetLightsDamage();
    MAKE_RET(void) AttachTrailer();
    MAKE_RET(void) DetachTrailer();
    MAKE_RET(void) SetTrailer(CVehicle* pVehicle);
    MAKE_RET(CVehicle*) GetTrailer();
    MAKE_RET(CVehicle*) GetTractor();
    MAKE_RET(BOOL) IsTrailer();
    MAKE_RET(BOOL) IsTowtruck();
    MAKE_RET(BOOL) IsRC();
    MAKE_RET(void) EnableLights(bool bEnable);
    MAKE_RET(void) RemovePassengers();
    MAKE_RET(BOOL) AddComponent(unsigned short nId);
    MAKE_RET(BOOL) RemoveComponent(unsigned short nId);
    MAKE_RET(void) SetPaintjob(NUMBER nId);
    MAKE_RET(BOOL) DoesExist();
    MAKE_RET(void) SetLicensePlateText(const char* szText);
    MAKE_RET(void) SetRotation(float fValue);
    MAKE_RET(void) ConstructLicensePlate();
    MAKE_RET(void) ShutdownLicensePlate();
    MAKE_RET(BOOL) HasSiren();
    MAKE_RET(char) GetMaxPassengers();
    MAKE_RET(void) SetWindowOpenFlag(NUMBER nDoorId);
    MAKE_RET(void) ClearWindowOpenFlag(NUMBER nDoorId);
    MAKE_RET(void) EnableEngine(BOOL bEnable);
};

END_PACK

#endif // VEHICLE_HPP_