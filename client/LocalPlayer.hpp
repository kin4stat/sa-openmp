#ifndef LOCALPLAYER_HPP_
#define LOCALPLAYER_HPP_

#include "common.hpp"
#include "Ped.hpp"
#include "Vehicle.hpp"
#include "Synchronization.hpp"

#include "CVector.h"

BEGIN_PACK

class LocalPlayer {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("LocalPlayer", "GetPed", GetAddress(0x2D50), &LocalPlayer::GetPed);
        ReversibleHooks::Install("LocalPlayer", "ResetData", GetAddress(0x2E70), &LocalPlayer::ResetData);
        ReversibleHooks::Install("LocalPlayer", "ProcessHead", GetAddress(0x2F80), &LocalPlayer::ProcessHead);
        ReversibleHooks::Install("LocalPlayer", "SetSpecialAction", GetAddress(0x30C0), &LocalPlayer::SetSpecialAction);
        ReversibleHooks::Install("LocalPlayer", "GetSpecialAction", GetAddress(0x3340), &LocalPlayer::GetSpecialAction);
        ReversibleHooks::Install("LocalPlayer", "UpdateSurfing", GetAddress(0x3460), &LocalPlayer::UpdateSurfing);
        ReversibleHooks::Install("LocalPlayer", "SetSurfing", GetAddress(0x35E0), &LocalPlayer::SetSurfing);
        ReversibleHooks::Install("LocalPlayer", "ProcessSurfing", GetAddress(0x3600), &LocalPlayer::ProcessSurfing);
        ReversibleHooks::Install("LocalPlayer", "NeedsToUpdate", GetAddress(0x3920), &LocalPlayer::NeedsToUpdate);
        ReversibleHooks::Install("LocalPlayer", "GetIncarSendRate", GetAddress(0x3970), &LocalPlayer::GetIncarSendRate);
        ReversibleHooks::Install("LocalPlayer", "GetOnfootSendRate", GetAddress(0x39B0), &LocalPlayer::GetOnfootSendRate);
        ReversibleHooks::Install("LocalPlayer", "GetUnoccupiedSendRate", GetAddress(0x39F0), &LocalPlayer::GetUnoccupiedSendRate);
        ReversibleHooks::Install("LocalPlayer", "SetSpawnInfo", GetAddress(0x3AA0), &LocalPlayer::SetSpawnInfo);
        ReversibleHooks::Install("LocalPlayer", "Spawn", GetAddress(0x3AD0), &LocalPlayer::Spawn);
        ReversibleHooks::Install("LocalPlayer", "GetColorAsRGBA", GetAddress(0x3D80), &LocalPlayer::GetColorAsRGBA);
        ReversibleHooks::Install("LocalPlayer", "GetColorAsARGB", GetAddress(0x3DA0), &LocalPlayer::GetColorAsARGB);
        ReversibleHooks::Install("LocalPlayer", "ProcessOnfootWorldBounds", GetAddress(0x3DD0), &LocalPlayer::ProcessOnfootWorldBounds);
        ReversibleHooks::Install("LocalPlayer", "ProcessIncarWorldBounds", GetAddress(0x3E30), &LocalPlayer::ProcessIncarWorldBounds);
        ReversibleHooks::Install("LocalPlayer", "RequestSpawn", GetAddress(0x3ED0), &LocalPlayer::RequestSpawn);
        ReversibleHooks::Install("LocalPlayer", "PrepareForClassSelection", GetAddress(0x3EF0), &LocalPlayer::PrepareForClassSelection);
        ReversibleHooks::Install("LocalPlayer", "PrepareForClassSelection_Outcome", GetAddress(0x3F40), &LocalPlayer::PrepareForClassSelection_Outcome);
        ReversibleHooks::Install("LocalPlayer", "EnableSpectating", GetAddress(0x4010), &LocalPlayer::EnableSpectating);
        ReversibleHooks::Install("LocalPlayer", "SpectateForVehicle", GetAddress(0x4080), &LocalPlayer::SpectateForVehicle);
        ReversibleHooks::Install("LocalPlayer", "SpectateForPlayer", GetAddress(0x40D0), &LocalPlayer::SpectateForPlayer);
        ReversibleHooks::Install("LocalPlayer", "NeedsToSendOnfootData", GetAddress(0x4150), &LocalPlayer::NeedsToSendOnfootData);
        ReversibleHooks::Install("LocalPlayer", "NeedsToSendIncarData", GetAddress(0x4190), &LocalPlayer::NeedsToSendIncarData);
        ReversibleHooks::Install("LocalPlayer", "DefineCameraTarget", GetAddress(0x4290), &LocalPlayer::DefineCameraTarget);
        ReversibleHooks::Install("LocalPlayer", "UpdateCameraTarget", GetAddress(0x4550), &LocalPlayer::UpdateCameraTarget);
        ReversibleHooks::Install("LocalPlayer", "DrawCameraTargetLabel", GetAddress(0x46A0), &LocalPlayer::DrawCameraTargetLabel);
        ReversibleHooks::Install("LocalPlayer", "SendOnfootData", GetAddress(0x4D40), &LocalPlayer::SendOnfootData);
        ReversibleHooks::Install("LocalPlayer", "SendAimData", GetAddress(0x5040), &LocalPlayer::SendAimData);
        ReversibleHooks::Install("LocalPlayer", "SendTrailerData", GetAddress(0x51F0), &LocalPlayer::SendTrailerData);
        ReversibleHooks::Install("LocalPlayer", "SendPassengerData", GetAddress(0x53B0), &LocalPlayer::SendPassengerData);
        ReversibleHooks::Install("LocalPlayer", "WastedNotification", GetAddress(0x5620), &LocalPlayer::WastedNotification);
        ReversibleHooks::Install("LocalPlayer", "RequestClass", GetAddress(0x56E0), &LocalPlayer::RequestClass);
        ReversibleHooks::Install("LocalPlayer", "ChangeInterior", GetAddress(0x5780), &LocalPlayer::ChangeInterior);
        ReversibleHooks::Install("LocalPlayer", "Chat", GetAddress(0x5820), &LocalPlayer::Chat);
        ReversibleHooks::Install("LocalPlayer", "EnterVehicle", GetAddress(0x58E0), &LocalPlayer::EnterVehicle);
        ReversibleHooks::Install("LocalPlayer", "ExitVehicle", GetAddress(0x5A00), &LocalPlayer::ExitVehicle);
        ReversibleHooks::Install("LocalPlayer", "SendStats", GetAddress(0x5B10), &LocalPlayer::SendStats);
        ReversibleHooks::Install("LocalPlayer", "UpdateVehicleDamage", GetAddress(0x5BE0), &LocalPlayer::UpdateVehicleDamage);
        ReversibleHooks::Install("LocalPlayer", "NextClass", GetAddress(0x5DF0), &LocalPlayer::NextClass);
        ReversibleHooks::Install("LocalPlayer", "PrevClass", GetAddress(0x5E80), &LocalPlayer::PrevClass);
        ReversibleHooks::Install("LocalPlayer", "ProcessClassSelection", GetAddress(0x5F00), &LocalPlayer::ProcessClassSelection);
        ReversibleHooks::Install("LocalPlayer", "UpdateWeapons", GetAddress(0x6090), &LocalPlayer::UpdateWeapons);
        ReversibleHooks::Install("LocalPlayer", "ProcessSpectating", GetAddress(0x6320), &LocalPlayer::ProcessSpectating);
        ReversibleHooks::Install("LocalPlayer", "SendTakeDamage", GetAddress(0x6670), &LocalPlayer::SendTakeDamage);
        ReversibleHooks::Install("LocalPlayer", "SendGiveDamage", GetAddress(0x6780), &LocalPlayer::SendGiveDamage);
        ReversibleHooks::Install("LocalPlayer", "ProcessUnoccupiedSync", GetAddress(0x6BD0), &LocalPlayer::ProcessUnoccupiedSync);
        ReversibleHooks::Install("LocalPlayer", "EnterVehicleAsPassenger", GetAddress(0x6DA0), &LocalPlayer::EnterVehicleAsPassenger);
        ReversibleHooks::Install("LocalPlayer", "SendIncarData", GetAddress(0x6E40), &LocalPlayer::SendIncarData);
        ReversibleHooks::Install("LocalPlayer", "Process", GetAddress(0x7270), &LocalPlayer::Process);
    }


    Ped* m_pPed;

    Synchronization::IncarData     m_incarData;
    Synchronization::AimData       m_aimData;
    Synchronization::TrailerData   m_trailerData;
    Synchronization::OnfootData    m_onfootData;
    Synchronization::PassengerData m_passengerData;

    BOOL      m_bIsActive;
    BOOL      m_bIsWasted;
    ID        m_nCurrentVehicle;
    ID        m_nLastVehicle;
    Animation m_animation;
    int       field_1;
    BOOL      m_bDoesSpectating;
    NUMBER    m_nTeam;
    short     field_10d;
    TICK      m_lastUpdate;
    TICK      m_lastSpecUpdate;
    TICK      m_lastAimUpdate;
    TICK      m_lastStatsUpdate;

    struct CameraTarget {
        ID m_nObject;
        ID m_nVehicle;
        ID m_nPlayer;
        ID m_nActor;
    } m_cameraTarget;

    TICK m_lastCameraTargetUpdate;

    struct {
        CVector m_direction;
        TICK    m_lastUpdate;
        TICK    m_lastLook;
    } m_head;

    TICK m_lastAnyUpdate;
    BOOL m_bClearedToSpawn;
    TICK m_lastSelectionTick;
    TICK m_initialSelectionTick;

    struct SpawnInfo {
        NUMBER  m_nTeam;
        int     m_nSkin;
        char    field_c;
        CVector m_position;
        float   m_fRotation;
        int     m_aWeapon[3];
        int     m_aAmmo[3];
    } m_spawnInfo;

    BOOL m_bHasSpawnInfo;
    TICK m_lastWeaponsUpdate;

    struct {
        ID     m_nAimedPlayer;
        ID     m_nAimedActor;
        NUMBER m_nCurrentWeapon;
        NUMBER m_aLastWeapon[13];
        int    m_aLastWeaponAmmo[13];
    } m_weaponsData;

    BOOL m_bPassengerDriveBy;
    char m_nCurrentInterior;
    BOOL m_bInRCMode;
    char m_szName[256];

    struct {
        ID   m_nEntityId; // vehicle 0 =< id < 2000; object 2000 <= id < 3000
        TICK m_lastUpdate;

        union {
            Vehicle* m_pVehicle;
            CObject*  m_pObject;
        };

        BOOL    m_bStuck;
        BOOL    m_bIsActive;
        CVector m_position;
        int     field_;
        int     m_nMode;
    } m_surfing;

    struct {
        BOOL m_bEnableAfterDeath;
        int  m_nSelected;
        BOOL m_bWaitingForSpawnRequestReply;
        BOOL m_bIsActive;
    } m_classSelection;

    TICK m_zoneDisplayingEnd;

    struct {
        char m_nMode;
        char m_nType;
        int  m_nObject;
        BOOL m_bProcessed;
    } m_spectating;

    struct {
        ID   m_nVehicleUpdating;
        int  m_nBumper;
        int  m_nDoor;
        bool m_bLight;
        bool m_bWheel;
    } m_damage;

    
    LocalPlayer();
    ~LocalPlayer();

    Ped* GetPed();
    void ResetData();
    void ProcessHead();
    void SetSpecialAction(char nId);
    char GetSpecialAction();
    void UpdateSurfing();
    void SetSurfing(Vehicle* pVehicle, BOOL bStuck);
    void ProcessSurfing();
    BOOL NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen);
    int GetIncarSendRate();
    int GetOnfootSendRate();
    int GetUnoccupiedSendRate();
    void SetSpawnInfo(const SpawnInfo* pInfo);
    BOOL Spawn();
    D3DCOLOR GetColorAsRGBA();
    D3DCOLOR GetColorAsARGB();
    void ProcessOnfootWorldBounds();
    void ProcessIncarWorldBounds();
    void RequestSpawn();
    void PrepareForClassSelection();
    void PrepareForClassSelection_Outcome(BOOL bOutcome);
    void EnableSpectating(BOOL bEnable);
    void SpectateForVehicle(ID nId);
    void SpectateForPlayer(ID nId);
    BOOL NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY);
    BOOL NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY);
    bool DefineCameraTarget(CameraTarget* pInfo);
    void UpdateCameraTarget();
    void DrawCameraTargetLabel();
    void SendOnfootData();
    void SendAimData();
    void SendTrailerData(ID nTrailer);
    void SendPassengerData();
    void WastedNotification();
    void RequestClass(int nId);
    void ChangeInterior(char nId);
    void Chat(const char* szText);
    void EnterVehicle(int nVehicle, BOOL bPassenger);
    void ExitVehicle(int nVehicle);
    void SendStats();
    void UpdateVehicleDamage(ID nVehicle);
    void NextClass();
    void PrevClass();
    void ProcessClassSelection();
    void UpdateWeapons();
    void ProcessSpectating();
    void SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    void SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    bool ProcessUnoccupiedSync(ID nVehicle, Vehicle* pVehicle);
    void EnterVehicleAsPassenger();
    void SendIncarData();
    void Process();
};

END_PACK

#endif // LOCALPLAYER_HPP_