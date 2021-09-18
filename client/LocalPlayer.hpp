#ifndef LOCALPLAYER_HPP_
#define LOCALPLAYER_HPP_

#include "common.hpp"

BEGIN_PACK

class LocalPlayer {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetPed)> GetPed_hook{ GetAddress(0x2D50) }; GetPed_hook.before.connect(GetPed);
        static kthook::kthook_t<decltype(&ResetData)> ResetData_hook{ GetAddress(0x2E70) }; ResetData_hook.before.connect(ResetData);
        static kthook::kthook_t<decltype(&ProcessHead)> ProcessHead_hook{ GetAddress(0x2F80) }; ProcessHead_hook.before.connect(ProcessHead);
        static kthook::kthook_t<decltype(&SetSpecialAction)> SetSpecialAction_hook{ GetAddress(0x30C0) }; SetSpecialAction_hook.before.connect(SetSpecialAction);
        static kthook::kthook_t<decltype(&GetSpecialAction)> GetSpecialAction_hook{ GetAddress(0x3340) }; GetSpecialAction_hook.before.connect(GetSpecialAction);
        static kthook::kthook_t<decltype(&UpdateSurfing)> UpdateSurfing_hook{ GetAddress(0x3460) }; UpdateSurfing_hook.before.connect(UpdateSurfing);
        static kthook::kthook_t<decltype(&SetSurfing)> SetSurfing_hook{ GetAddress(0x35E0) }; SetSurfing_hook.before.connect(SetSurfing);
        static kthook::kthook_t<decltype(&ProcessSurfing)> ProcessSurfing_hook{ GetAddress(0x3600) }; ProcessSurfing_hook.before.connect(ProcessSurfing);
        static kthook::kthook_t<decltype(&NeedsToUpdate)> NeedsToUpdate_hook{ GetAddress(0x3920) }; NeedsToUpdate_hook.before.connect(NeedsToUpdate);
        static kthook::kthook_t<decltype(&GetIncarSendRate)> GetIncarSendRate_hook{ GetAddress(0x3970) }; GetIncarSendRate_hook.before.connect(GetIncarSendRate);
        static kthook::kthook_t<decltype(&GetOnfootSendRate)> GetOnfootSendRate_hook{ GetAddress(0x39B0) }; GetOnfootSendRate_hook.before.connect(GetOnfootSendRate);
        static kthook::kthook_t<decltype(&GetUnoccupiedSendRate)> GetUnoccupiedSendRate_hook{ GetAddress(0x39F0) }; GetUnoccupiedSendRate_hook.before.connect(GetUnoccupiedSendRate);
        static kthook::kthook_t<decltype(&SetSpawnInfo)> SetSpawnInfo_hook{ GetAddress(0x3AA0) }; SetSpawnInfo_hook.before.connect(SetSpawnInfo);
        static kthook::kthook_t<decltype(&Spawn)> Spawn_hook{ GetAddress(0x3AD0) }; Spawn_hook.before.connect(Spawn);
        static kthook::kthook_t<decltype(&GetColorAsRGBA)> GetColorAsRGBA_hook{ GetAddress(0x3D80) }; GetColorAsRGBA_hook.before.connect(GetColorAsRGBA);
        static kthook::kthook_t<decltype(&GetColorAsARGB)> GetColorAsARGB_hook{ GetAddress(0x3DA0) }; GetColorAsARGB_hook.before.connect(GetColorAsARGB);
        static kthook::kthook_t<decltype(&ProcessOnfootWorldBounds)> ProcessOnfootWorldBounds_hook{ GetAddress(0x3DD0) }; ProcessOnfootWorldBounds_hook.before.connect(ProcessOnfootWorldBounds);
        static kthook::kthook_t<decltype(&ProcessIncarWorldBounds)> ProcessIncarWorldBounds_hook{ GetAddress(0x3E30) }; ProcessIncarWorldBounds_hook.before.connect(ProcessIncarWorldBounds);
        static kthook::kthook_t<decltype(&RequestSpawn)> RequestSpawn_hook{ GetAddress(0x3ED0) }; RequestSpawn_hook.before.connect(RequestSpawn);
        static kthook::kthook_t<decltype(&PrepareForClassSelection)> PrepareForClassSelection_hook{ GetAddress(0x3EF0) }; PrepareForClassSelection_hook.before.connect(PrepareForClassSelection);
        static kthook::kthook_t<decltype(&PrepareForClassSelection_Outcome)> PrepareForClassSelection_Outcome_hook{ GetAddress(0x3F40) }; PrepareForClassSelection_Outcome_hook.before.connect(PrepareForClassSelection_Outcome);
        static kthook::kthook_t<decltype(&EnableSpectating)> EnableSpectating_hook{ GetAddress(0x4010) }; EnableSpectating_hook.before.connect(EnableSpectating);
        static kthook::kthook_t<decltype(&SpectateForVehicle)> SpectateForVehicle_hook{ GetAddress(0x4080) }; SpectateForVehicle_hook.before.connect(SpectateForVehicle);
        static kthook::kthook_t<decltype(&SpectateForPlayer)> SpectateForPlayer_hook{ GetAddress(0x40D0) }; SpectateForPlayer_hook.before.connect(SpectateForPlayer);
        static kthook::kthook_t<decltype(&NeedsToSendOnfootData)> NeedsToSendOnfootData_hook{ GetAddress(0x4150) }; NeedsToSendOnfootData_hook.before.connect(NeedsToSendOnfootData);
        static kthook::kthook_t<decltype(&NeedsToSendIncarData)> NeedsToSendIncarData_hook{ GetAddress(0x4190) }; NeedsToSendIncarData_hook.before.connect(NeedsToSendIncarData);
        static kthook::kthook_t<decltype(&DefineCameraTarget)> DefineCameraTarget_hook{ GetAddress(0x4290) }; DefineCameraTarget_hook.before.connect(DefineCameraTarget);
        static kthook::kthook_t<decltype(&UpdateCameraTarget)> UpdateCameraTarget_hook{ GetAddress(0x4550) }; UpdateCameraTarget_hook.before.connect(UpdateCameraTarget);
        static kthook::kthook_t<decltype(&DrawCameraTargetLabel)> DrawCameraTargetLabel_hook{ GetAddress(0x46A0) }; DrawCameraTargetLabel_hook.before.connect(DrawCameraTargetLabel);
        static kthook::kthook_t<decltype(&SendOnfootData)> SendOnfootData_hook{ GetAddress(0x4D40) }; SendOnfootData_hook.before.connect(SendOnfootData);
        static kthook::kthook_t<decltype(&SendAimData)> SendAimData_hook{ GetAddress(0x5040) }; SendAimData_hook.before.connect(SendAimData);
        static kthook::kthook_t<decltype(&SendTrailerData)> SendTrailerData_hook{ GetAddress(0x51F0) }; SendTrailerData_hook.before.connect(SendTrailerData);
        static kthook::kthook_t<decltype(&SendPassengerData)> SendPassengerData_hook{ GetAddress(0x53B0) }; SendPassengerData_hook.before.connect(SendPassengerData);
        static kthook::kthook_t<decltype(&WastedNotification)> WastedNotification_hook{ GetAddress(0x5620) }; WastedNotification_hook.before.connect(WastedNotification);
        static kthook::kthook_t<decltype(&RequestClass)> RequestClass_hook{ GetAddress(0x56E0) }; RequestClass_hook.before.connect(RequestClass);
        static kthook::kthook_t<decltype(&ChangeInterior)> ChangeInterior_hook{ GetAddress(0x5780) }; ChangeInterior_hook.before.connect(ChangeInterior);
        static kthook::kthook_t<decltype(&Chat)> Chat_hook{ GetAddress(0x5820) }; Chat_hook.before.connect(Chat);
        static kthook::kthook_t<decltype(&EnterVehicle)> EnterVehicle_hook{ GetAddress(0x58E0) }; EnterVehicle_hook.before.connect(EnterVehicle);
        static kthook::kthook_t<decltype(&ExitVehicle)> ExitVehicle_hook{ GetAddress(0x5A00) }; ExitVehicle_hook.before.connect(ExitVehicle);
        static kthook::kthook_t<decltype(&SendStats)> SendStats_hook{ GetAddress(0x5B10) }; SendStats_hook.before.connect(SendStats);
        static kthook::kthook_t<decltype(&UpdateVehicleDamage)> UpdateVehicleDamage_hook{ GetAddress(0x5BE0) }; UpdateVehicleDamage_hook.before.connect(UpdateVehicleDamage);
        static kthook::kthook_t<decltype(&NextClass)> NextClass_hook{ GetAddress(0x5DF0) }; NextClass_hook.before.connect(NextClass);
        static kthook::kthook_t<decltype(&PrevClass)> PrevClass_hook{ GetAddress(0x5E80) }; PrevClass_hook.before.connect(PrevClass);
        static kthook::kthook_t<decltype(&ProcessClassSelection)> ProcessClassSelection_hook{ GetAddress(0x5F00) }; ProcessClassSelection_hook.before.connect(ProcessClassSelection);
        static kthook::kthook_t<decltype(&UpdateWeapons)> UpdateWeapons_hook{ GetAddress(0x6090) }; UpdateWeapons_hook.before.connect(UpdateWeapons);
        static kthook::kthook_t<decltype(&ProcessSpectating)> ProcessSpectating_hook{ GetAddress(0x6320) }; ProcessSpectating_hook.before.connect(ProcessSpectating);
        static kthook::kthook_t<decltype(&SendTakeDamage)> SendTakeDamage_hook{ GetAddress(0x6670) }; SendTakeDamage_hook.before.connect(SendTakeDamage);
        static kthook::kthook_t<decltype(&SendGiveDamage)> SendGiveDamage_hook{ GetAddress(0x6780) }; SendGiveDamage_hook.before.connect(SendGiveDamage);
        static kthook::kthook_t<decltype(&ProcessUnoccupiedSync)> ProcessUnoccupiedSync_hook{ GetAddress(0x6BD0) }; ProcessUnoccupiedSync_hook.before.connect(ProcessUnoccupiedSync);
        static kthook::kthook_t<decltype(&EnterVehicleAsPassenger)> EnterVehicleAsPassenger_hook{ GetAddress(0x6DA0) }; EnterVehicleAsPassenger_hook.before.connect(EnterVehicleAsPassenger);
        static kthook::kthook_t<decltype(&SendIncarData)> SendIncarData_hook{ GetAddress(0x6E40) }; SendIncarData_hook.before.connect(SendIncarData);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x7270) }; Process_hook.before.connect(Process);
    }



    ~LocalPlayer();

    MAKE_RET(CPed*) GetPed();
    MAKE_RET(void) ResetData();
    MAKE_RET(void) ProcessHead();
    MAKE_RET(void) SetSpecialAction(char nId);
    MAKE_RET(char) GetSpecialAction();
    MAKE_RET(void) UpdateSurfing();
    MAKE_RET(void) SetSurfing(CVehicle* pVehicle, BOOL bStuck);
    MAKE_RET(void) ProcessSurfing();
    MAKE_RET(BOOL) NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen);
    MAKE_RET(int) GetIncarSendRate();
    MAKE_RET(int) GetOnfootSendRate();
    MAKE_RET(int) GetUnoccupiedSendRate();
    MAKE_RET(void) SetSpawnInfo(const SpawnInfo* pInfo);
    MAKE_RET(BOOL) Spawn();
    MAKE_RET(D3DCOLOR) GetColorAsRGBA();
    MAKE_RET(D3DCOLOR) GetColorAsARGB();
    MAKE_RET(void) ProcessOnfootWorldBounds();
    MAKE_RET(void) ProcessIncarWorldBounds();
    MAKE_RET(void) RequestSpawn();
    MAKE_RET(void) PrepareForClassSelection();
    MAKE_RET(void) PrepareForClassSelection_Outcome(BOOL bOutcome);
    MAKE_RET(void) EnableSpectating(BOOL bEnable);
    MAKE_RET(void) SpectateForVehicle(ID nId);
    MAKE_RET(void) SpectateForPlayer(ID nId);
    MAKE_RET(BOOL) NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY);
    MAKE_RET(BOOL) NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY);
    MAKE_RET(bool) DefineCameraTarget(CameraTarget* pInfo);
    MAKE_RET(void) UpdateCameraTarget();
    MAKE_RET(void) DrawCameraTargetLabel();
    MAKE_RET(void) SendOnfootData();
    MAKE_RET(void) SendAimData();
    MAKE_RET(void) SendTrailerData(ID nTrailer);
    MAKE_RET(void) SendPassengerData();
    MAKE_RET(void) WastedNotification();
    MAKE_RET(void) RequestClass(int nId);
    MAKE_RET(void) ChangeInterior(char nId);
    MAKE_RET(void) Chat(const char* szText);
    MAKE_RET(void) EnterVehicle(int nVehicle, BOOL bPassenger);
    MAKE_RET(void) ExitVehicle(int nVehicle);
    MAKE_RET(void) SendStats();
    MAKE_RET(void) UpdateVehicleDamage(ID nVehicle);
    MAKE_RET(void) NextClass();
    MAKE_RET(void) PrevClass();
    MAKE_RET(void) ProcessClassSelection();
    MAKE_RET(void) UpdateWeapons();
    MAKE_RET(void) ProcessSpectating();
    MAKE_RET(void) SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    MAKE_RET(void) SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart);
    MAKE_RET(bool) ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle);
    MAKE_RET(void) EnterVehicleAsPassenger();
    MAKE_RET(void) SendIncarData();
    MAKE_RET(void) Process();
};

END_PACK

#endif // LOCALPLAYER_HPP_