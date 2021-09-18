#ifndef PED_HPP_
#define PED_HPP_

#include "common.hpp"

BEGIN_PACK

class Ped {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&ResetPointers)> ResetPointers_hook{ GetAddress(0xAB320) }; ResetPointers_hook.before.connect(ResetPointers);
        static kthook::kthook_t<decltype(&SetInitialState)> SetInitialState_hook{ GetAddress(0xAB340) }; SetInitialState_hook.before.connect(SetInitialState);
        static kthook::kthook_t<decltype(&GetAim)> GetAim_hook{ GetAddress(0xAB390) }; GetAim_hook.before.connect(GetAim);
        static kthook::kthook_t<decltype(&GetCurrentWeapon)> GetCurrentWeapon_hook{ GetAddress(0xAB3C0) }; GetCurrentWeapon_hook.before.connect(GetCurrentWeapon);
        static kthook::kthook_t<decltype(&GetVehicleRef)> GetVehicleRef_hook{ GetAddress(0xAB400) }; GetVehicleRef_hook.before.connect(GetVehicleRef);
        static kthook::kthook_t<decltype(&DeleteArrow)> DeleteArrow_hook{ GetAddress(0xAB420) }; DeleteArrow_hook.before.connect(DeleteArrow);
        static kthook::kthook_t<decltype(&IsOnScreen)> IsOnScreen_hook{ GetAddress(0xAB450) }; IsOnScreen_hook.before.connect(IsOnScreen);
        static kthook::kthook_t<decltype(&SetImmunities)> SetImmunities_hook{ GetAddress(0xAB470) }; SetImmunities_hook.before.connect(SetImmunities);
        static kthook::kthook_t<decltype(&GetHealth)> GetHealth_hook{ GetAddress(0xAB4C0) }; GetHealth_hook.before.connect(GetHealth);
        static kthook::kthook_t<decltype(&SetHealth)> SetHealth_hook{ GetAddress(0xAB4E0) }; SetHealth_hook.before.connect(SetHealth);
        static kthook::kthook_t<decltype(&GetArmour)> GetArmour_hook{ GetAddress(0xAB500) }; GetArmour_hook.before.connect(GetArmour);
        static kthook::kthook_t<decltype(&SetArmour)> SetArmour_hook{ GetAddress(0xAB520) }; SetArmour_hook.before.connect(SetArmour);
        static kthook::kthook_t<decltype(&GetFlags)> GetFlags_hook{ GetAddress(0xAB540) }; GetFlags_hook.before.connect(GetFlags);
        static kthook::kthook_t<decltype(&SetFlags)> SetFlags_hook{ GetAddress(0xAB560) }; SetFlags_hook.before.connect(SetFlags);
        static kthook::kthook_t<decltype(&IsDead)> IsDead_hook{ GetAddress(0xAB580) }; IsDead_hook.before.connect(IsDead);
        static kthook::kthook_t<decltype(&GetState)> GetState_hook{ GetAddress(0xAB5B0) }; GetState_hook.before.connect(GetState);
        static kthook::kthook_t<decltype(&SetState)> SetState_hook{ GetAddress(0xAB5C0) }; SetState_hook.before.connect(SetState);
        static kthook::kthook_t<decltype(&GetRotation)> GetRotation_hook{ GetAddress(0xAB600) }; GetRotation_hook.before.connect(GetRotation);
        static kthook::kthook_t<decltype(&ForceRotation)> ForceRotation_hook{ GetAddress(0xAB680) }; ForceRotation_hook.before.connect(ForceRotation);
        static kthook::kthook_t<decltype(&SetRotation)> SetRotation_hook{ GetAddress(0xAB6D0) }; SetRotation_hook.before.connect(SetRotation);
        static kthook::kthook_t<decltype(&IsPassenger)> IsPassenger_hook{ GetAddress(0xAB730) }; IsPassenger_hook.before.connect(IsPassenger);
        static kthook::kthook_t<decltype(&GetVehicle)> GetVehicle_hook{ GetAddress(0xAB770) }; GetVehicle_hook.before.connect(GetVehicle);
        static kthook::kthook_t<decltype(&ClearWeapons)> ClearWeapons_hook{ GetAddress(0xAB780) }; ClearWeapons_hook.before.connect(ClearWeapons);
        static kthook::kthook_t<decltype(&RemoveWeaponWhenEnteringVehicle)> RemoveWeaponWhenEnteringVehicle_hook{ GetAddress(0xAB880) }; RemoveWeaponWhenEnteringVehicle_hook.before.connect(RemoveWeaponWhenEnteringVehicle);
        static kthook::kthook_t<decltype(&GetCurrentWeaponSlot)> GetCurrentWeaponSlot_hook{ GetAddress(0xAB8B0) }; GetCurrentWeaponSlot_hook.before.connect(GetCurrentWeaponSlot);
        static kthook::kthook_t<decltype(&CurrentWeaponHasAmmo)> CurrentWeaponHasAmmo_hook{ GetAddress(0xAB8D0) }; CurrentWeaponHasAmmo_hook.before.connect(CurrentWeaponHasAmmo);
        static kthook::kthook_t<decltype(&GetDistanceToEntity)> GetDistanceToEntity_hook{ GetAddress(0xAB910) }; GetDistanceToEntity_hook.before.connect(GetDistanceToEntity);
        static kthook::kthook_t<decltype(&GetVehicleSeatIndex)> GetVehicleSeatIndex_hook{ GetAddress(0xAB970) }; GetVehicleSeatIndex_hook.before.connect(GetVehicleSeatIndex);
        static kthook::kthook_t<decltype(&PutIntoVehicle)> PutIntoVehicle_hook{ GetAddress(0xABA00) }; PutIntoVehicle_hook.before.connect(PutIntoVehicle);
        static kthook::kthook_t<decltype(&EnterVehicle)> EnterVehicle_hook{ GetAddress(0xABB80) }; EnterVehicle_hook.before.connect(EnterVehicle);
        static kthook::kthook_t<decltype(&ExitVehicle)> ExitVehicle_hook{ GetAddress(0xABC50) }; ExitVehicle_hook.before.connect(ExitVehicle);
        static kthook::kthook_t<decltype(&WarpFromVehicle)> WarpFromVehicle_hook{ GetAddress(0xABCE0) }; WarpFromVehicle_hook.before.connect(WarpFromVehicle);
        static kthook::kthook_t<decltype(&SetSpawnInfo)> SetSpawnInfo_hook{ GetAddress(0xABEC0) }; SetSpawnInfo_hook.before.connect(SetSpawnInfo);
        static kthook::kthook_t<decltype(&SetControllable)> SetControllable_hook{ GetAddress(0xABF00) }; SetControllable_hook.before.connect(SetControllable);
        static kthook::kthook_t<decltype(&GetDeathInfo)> GetDeathInfo_hook{ GetAddress(0xABFC0) }; GetDeathInfo_hook.before.connect(GetDeathInfo);
        static kthook::kthook_t<decltype(&GetFloor)> GetFloor_hook{ GetAddress(0xAC180) }; GetFloor_hook.before.connect(GetFloor);
        static kthook::kthook_t<decltype(&GetCurrentWeaponInfo)> GetCurrentWeaponInfo_hook{ GetAddress(0xAC230) }; GetCurrentWeaponInfo_hook.before.connect(GetCurrentWeaponInfo);
        static kthook::kthook_t<decltype(&HandsUp)> HandsUp_hook{ GetAddress(0xAC280) }; HandsUp_hook.before.connect(HandsUp);
        static kthook::kthook_t<decltype(&DoesHandsUp)> DoesHandsUp_hook{ GetAddress(0xAC2D0) }; DoesHandsUp_hook.before.connect(DoesHandsUp);
        static kthook::kthook_t<decltype(&HoldObject)> HoldObject_hook{ GetAddress(0xAC330) }; HoldObject_hook.before.connect(HoldObject);
        static kthook::kthook_t<decltype(&EnableJetpack)> EnableJetpack_hook{ GetAddress(0xAC480) }; EnableJetpack_hook.before.connect(EnableJetpack);
        static kthook::kthook_t<decltype(&DisableJetpack)> DisableJetpack_hook{ GetAddress(0xAC4D0) }; DisableJetpack_hook.before.connect(DisableJetpack);
        static kthook::kthook_t<decltype(&HasJetpack)> HasJetpack_hook{ GetAddress(0xAC530) }; HasJetpack_hook.before.connect(HasJetpack);
        static kthook::kthook_t<decltype(&EnablePassengerDrivebyMode)> EnablePassengerDrivebyMode_hook{ GetAddress(0xAC700) }; EnablePassengerDrivebyMode_hook.before.connect(EnablePassengerDrivebyMode);
        static kthook::kthook_t<decltype(&Extinguish)> Extinguish_hook{ GetAddress(0xAC860) }; Extinguish_hook.before.connect(Extinguish);
        static kthook::kthook_t<decltype(&GetWeaponSlot)> GetWeaponSlot_hook{ GetAddress(0xAC900) }; GetWeaponSlot_hook.before.connect(GetWeaponSlot);
        static kthook::kthook_t<decltype(&SetWalkStyle)> SetWalkStyle_hook{ GetAddress(0xAC940) }; SetWalkStyle_hook.before.connect(SetWalkStyle);
        static kthook::kthook_t<decltype(&PerformAnimation)> PerformAnimation_hook{ GetAddress(0xAC9A0) }; PerformAnimation_hook.before.connect(PerformAnimation);
        static kthook::kthook_t<decltype(&LinkToInterior)> LinkToInterior_hook{ GetAddress(0xACAB0) }; LinkToInterior_hook.before.connect(LinkToInterior);
        static kthook::kthook_t<decltype(&DestroyParachute)> DestroyParachute_hook{ GetAddress(0xACB50) }; DestroyParachute_hook.before.connect(DestroyParachute);
        static kthook::kthook_t<decltype(&OpenParachute)> OpenParachute_hook{ GetAddress(0xACC40) }; OpenParachute_hook.before.connect(OpenParachute);
        static kthook::kthook_t<decltype(&ProcessParachuteEvent)> ProcessParachuteEvent_hook{ GetAddress(0xACD90) }; ProcessParachuteEvent_hook.before.connect(ProcessParachuteEvent);
        static kthook::kthook_t<decltype(&IsOnGround)> IsOnGround_hook{ GetAddress(0xACFD0) }; IsOnGround_hook.before.connect(IsOnGround);
        static kthook::kthook_t<decltype(&ResetDamageEntity)> ResetDamageEntity_hook{ GetAddress(0xACFF0) }; ResetDamageEntity_hook.before.connect(ResetDamageEntity);
        static kthook::kthook_t<decltype(&RemoveWeaponModel)> RemoveWeaponModel_hook{ GetAddress(0xAD020) }; RemoveWeaponModel_hook.before.connect(RemoveWeaponModel);
        static kthook::kthook_t<decltype(&GetAimZ)> GetAimZ_hook{ GetAddress(0xAD060) }; GetAimZ_hook.before.connect(GetAimZ);
        static kthook::kthook_t<decltype(&SetAimZ)> SetAimZ_hook{ GetAddress(0xAD0A0) }; SetAimZ_hook.before.connect(SetAimZ);
        static kthook::kthook_t<decltype(&GetContactEntity)> GetContactEntity_hook{ GetAddress(0xAD110) }; GetContactEntity_hook.before.connect(GetContactEntity);
        static kthook::kthook_t<decltype(&GetContactVehicle)> GetContactVehicle_hook{ GetAddress(0xAD120) }; GetContactVehicle_hook.before.connect(GetContactVehicle);
        static kthook::kthook_t<decltype(&GetStat)> GetStat_hook{ GetAddress(0xAD150) }; GetStat_hook.before.connect(GetStat);
        static kthook::kthook_t<decltype(&PerformingCustomAnimation)> PerformingCustomAnimation_hook{ GetAddress(0xAD170) }; PerformingCustomAnimation_hook.before.connect(PerformingCustomAnimation);
        static kthook::kthook_t<decltype(&StartDancing)> StartDancing_hook{ GetAddress(0xAD240) }; StartDancing_hook.before.connect(StartDancing);
        static kthook::kthook_t<decltype(&StopDancing)> StopDancing_hook{ GetAddress(0xAD290) }; StopDancing_hook.before.connect(StopDancing);
        static kthook::kthook_t<decltype(&DoesDancing)> DoesDancing_hook{ GetAddress(0xAD2D0) }; DoesDancing_hook.before.connect(DoesDancing);
        static kthook::kthook_t<decltype(&DropStuff)> DropStuff_hook{ GetAddress(0xAD370) }; DropStuff_hook.before.connect(DropStuff);
        static kthook::kthook_t<decltype(&GetStuff)> GetStuff_hook{ GetAddress(0xAD400) }; GetStuff_hook.before.connect(GetStuff);
        static kthook::kthook_t<decltype(&ApplyStuff)> ApplyStuff_hook{ GetAddress(0xAD410) }; ApplyStuff_hook.before.connect(ApplyStuff);
        static kthook::kthook_t<decltype(&ProcessDrunk)> ProcessDrunk_hook{ GetAddress(0xAD560) }; ProcessDrunk_hook.before.connect(ProcessDrunk);
        static kthook::kthook_t<decltype(&GetDrunkLevel)> GetDrunkLevel_hook{ GetAddress(0xAD710) }; GetDrunkLevel_hook.before.connect(GetDrunkLevel);
        static kthook::kthook_t<decltype(&SetDrunkLevel)> SetDrunkLevel_hook{ GetAddress(0xAD720) }; SetDrunkLevel_hook.before.connect(SetDrunkLevel);
        static kthook::kthook_t<decltype(&DestroyCommandTask)> DestroyCommandTask_hook{ GetAddress(0xAD790) }; DestroyCommandTask_hook.before.connect(DestroyCommandTask);
        static kthook::kthook_t<decltype(&EnableCellphone)> EnableCellphone_hook{ GetAddress(0xAD7E0) }; EnableCellphone_hook.before.connect(EnableCellphone);
        static kthook::kthook_t<decltype(&UsingCellphone)> UsingCellphone_hook{ GetAddress(0xAD810) }; UsingCellphone_hook.before.connect(UsingCellphone);
        static kthook::kthook_t<decltype(&SetFightingStyle)> SetFightingStyle_hook{ GetAddress(0xAD840) }; SetFightingStyle_hook.before.connect(SetFightingStyle);
        static kthook::kthook_t<decltype(&StartUrinating)> StartUrinating_hook{ GetAddress(0xAD870) }; StartUrinating_hook.before.connect(StartUrinating);
        static kthook::kthook_t<decltype(&StopUrinating)> StopUrinating_hook{ GetAddress(0xAD950) }; StopUrinating_hook.before.connect(StopUrinating);
        static kthook::kthook_t<decltype(&DoesUrinating)> DoesUrinating_hook{ GetAddress(0xAD9D0) }; DoesUrinating_hook.before.connect(DoesUrinating);
        static kthook::kthook_t<decltype(&LoadShoppingDataSubsection)> LoadShoppingDataSubsection_hook{ GetAddress(0xADA70) }; LoadShoppingDataSubsection_hook.before.connect(LoadShoppingDataSubsection);
        static kthook::kthook_t<decltype(&GetAimedPed)> GetAimedPed_hook{ GetAddress(0xAE6D0) }; GetAimedPed_hook.before.connect(GetAimedPed);
        static kthook::kthook_t<decltype(&SetKeys)> SetKeys_hook{ GetAddress(0xAEAB0) }; SetKeys_hook.before.connect(SetKeys);
        static kthook::kthook_t<decltype(&GetKeys)> GetKeys_hook{ GetAddress(0xAED40) }; GetKeys_hook.before.connect(GetKeys);
        static kthook::kthook_t<decltype(&CreateArrow)> CreateArrow_hook{ GetAddress(0xAEEA0) }; CreateArrow_hook.before.connect(CreateArrow);
        static kthook::kthook_t<decltype(&SetModelIndex)> SetModelIndex_hook{ GetAddress(0xAF6C0) }; SetModelIndex_hook.before.connect(SetModelIndex);
        static kthook::kthook_t<decltype(&Kill)> Kill_hook{ GetAddress(0xAF740) }; Kill_hook.before.connect(Kill);
        static kthook::kthook_t<decltype(&SetWeaponAmmo)> SetWeaponAmmo_hook{ GetAddress(0xAF7F0) }; SetWeaponAmmo_hook.before.connect(SetWeaponAmmo);
        static kthook::kthook_t<decltype(&ProcessDancing)> ProcessDancing_hook{ GetAddress(0xAF820) }; ProcessDancing_hook.before.connect(ProcessDancing);
        static kthook::kthook_t<decltype(&GiveStuff)> GiveStuff_hook{ GetAddress(0xAFA40) }; GiveStuff_hook.before.connect(GiveStuff);
        static kthook::kthook_t<decltype(&Destroy)> Destroy_hook{ GetAddress(0xB0710) }; Destroy_hook.before.connect(Destroy);
        static kthook::kthook_t<decltype(&SetCameraMode)> SetCameraMode_hook{ GetAddress(0x13F70) }; SetCameraMode_hook.before.connect(SetCameraMode);
        static kthook::kthook_t<decltype(&SetCameraExtZoomAndAspectRatio)> SetCameraExtZoomAndAspectRatio_hook{ GetAddress(0x13F90) }; SetCameraExtZoomAndAspectRatio_hook.before.connect(SetCameraExtZoomAndAspectRatio);
        static kthook::kthook_t<decltype(&HasAccessory)> HasAccessory_hook{ GetAddress(0xAE5A0) }; HasAccessory_hook.before.connect(HasAccessory);
        static kthook::kthook_t<decltype(&DeleteAccessory)> DeleteAccessory_hook{ GetAddress(0xAE5C0) }; DeleteAccessory_hook.before.connect(DeleteAccessory);
        static kthook::kthook_t<decltype(&GetAccessoryState)> GetAccessoryState_hook{ GetAddress(0xAE620) }; GetAccessoryState_hook.before.connect(GetAccessoryState);
        static kthook::kthook_t<decltype(&DeleteAllAccessories)> DeleteAllAccessories_hook{ GetAddress(0xB0220) }; DeleteAllAccessories_hook.before.connect(DeleteAllAccessories);
        static kthook::kthook_t<decltype(&AddAccessory)> AddAccessory_hook{ GetAddress(0xB0280) }; AddAccessory_hook.before.connect(AddAccessory);
        static kthook::kthook_t<decltype(&GetAccessory)> GetAccessory_hook{ GetAddress(0x13330) }; GetAccessory_hook.before.connect(GetAccessory);
        static kthook::kthook_t<decltype(&GetCameraMode)> GetCameraMode_hook{ GetAddress(0x2CB0) }; GetCameraMode_hook.before.connect(GetCameraMode);
        static kthook::kthook_t<decltype(&GetBonePosition)> GetBonePosition_hook{ GetAddress(0xADBF0) }; GetBonePosition_hook.before.connect(GetBonePosition);
    }


    enum { MAX_ACCESSORIES = 10 };
    enum StuffType {
        STUFF_TYPE_NONE,
        STUFF_TYPE_BEER,
        STUFF_TYPE_DYN_BEER,
        STUFF_TYPE_PINT_GLASS,
        STUFF_TYPE_CIGGI
    };

    struct Accessory {
        int      m_nModel;
        int      m_nBone;
        CVector  m_offset;
        CVector  m_rotation;
        CVector  m_scale;
        D3DCOLOR m_firstMaterialColor;
        D3DCOLOR m_secondMaterialColor;
    };

    // void **m_lpVtbl = 0xED0FC;
    BOOL m_bUsingCellphone;

    struct {
        BOOL           m_bNotEmpty[MAX_ACCESSORIES];
        Accessory      m_info[MAX_ACCESSORIES];
        class CObject* m_pObject[MAX_ACCESSORIES];
    } m_accessories;

    ::CPed*       m_pGamePed;
    unsigned int  pad_2a8[2];
    unsigned char m_nPlayerNumber;
    unsigned int  pad_2b1[2];
    GTAREF        m_parachuteObject;
    GTAREF        m_urinatingParticle;

    struct {
        int          m_nType;
        GTAREF       m_object;
        unsigned int m_nDrunkLevel;
    } m_stuff;

    GTAREF        m_arrow;
    unsigned char field_2de;
    BOOL          m_bDoesDancing;
    unsigned int  m_nDanceStyle;
    unsigned int  m_nLastDanceMove;
    unsigned char pad_2de[20];
    BOOL          m_bDoesUrinating;
    unsigned char pad[55];

    CPed();
    
    Ped(int nPlayerNumber, int nModel, CVector position, float fRotation);
    ~Ped();

    MAKE_RET(void) ResetPointers();
    MAKE_RET(void) SetInitialState();
    MAKE_RET(AimStuff::Aim*) GetAim();
    MAKE_RET(char) GetCurrentWeapon();
    MAKE_RET(GTAREF) GetVehicleRef();
    MAKE_RET(void) DeleteArrow();
    MAKE_RET(BOOL) IsOnScreen();
    MAKE_RET(void) SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP);
    MAKE_RET(float) GetHealth();
    MAKE_RET(void) SetHealth(float fValue);
    MAKE_RET(float) GetArmour();
    MAKE_RET(void) SetArmour(float fValue);
    MAKE_RET(int) GetFlags();
    MAKE_RET(void) SetFlags(int nValue);
    MAKE_RET(BOOL) IsDead();
    MAKE_RET(char) GetState();
    MAKE_RET(void) SetState(char nValue);
    MAKE_RET(float) GetRotation();
    MAKE_RET(void) ForceRotation(float fValue);
    MAKE_RET(void) SetRotation(float fValue);
    MAKE_RET(BOOL) IsPassenger();
    MAKE_RET(::CVehicle*) GetVehicle();
    MAKE_RET(void) ClearWeapons();
    MAKE_RET(void) RemoveWeaponWhenEnteringVehicle();
    MAKE_RET(::CWeapon*) GetCurrentWeaponSlot();
    MAKE_RET(BOOL) CurrentWeaponHasAmmo();
    MAKE_RET(float) GetDistanceToEntity(const CEntity* pEntity);
    MAKE_RET(int) GetVehicleSeatIndex();
    MAKE_RET(void) PutIntoVehicle(GTAREF vehicle, int nSeat);
    MAKE_RET(void) EnterVehicle(GTAREF vehicle, BOOL bAsPassenger);
    MAKE_RET(void) ExitVehicle();
    MAKE_RET(void) WarpFromVehicle(CVector putAt);
    MAKE_RET(void) SetSpawnInfo(const CVector* pPosition, float fRotation);
    MAKE_RET(void) SetControllable(BOOL bEnable);
    MAKE_RET(char) GetDeathInfo(ID* pKiller);
    MAKE_RET(::CEntity*) GetFloor();
    MAKE_RET(::CWeaponInfo*) GetCurrentWeaponInfo();
    MAKE_RET(void) HandsUp();
    MAKE_RET(BOOL) DoesHandsUp();
    MAKE_RET(void) HoldObject(int nModel);
    MAKE_RET(void) EnableJetpack();
    MAKE_RET(void) DisableJetpack();
    MAKE_RET(BOOL) HasJetpack();
    MAKE_RET(BOOL) EnablePassengerDrivebyMode();
    MAKE_RET(void) Extinguish();
    MAKE_RET(::CWeapon*) GetWeaponSlot(int nWeapon);
    MAKE_RET(void) SetWalkStyle(const char* szName);
    MAKE_RET(void) PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int loopa, int nLockX, int nLockY, int nLockF, int nTime);
    MAKE_RET(void) LinkToInterior(char nId, BOOL bRefresh);
    MAKE_RET(void) DestroyParachute();
    MAKE_RET(BOOL) OpenParachute();
    MAKE_RET(void) ProcessParachuteEvent(const char* szName);
    MAKE_RET(BOOL) IsOnGround();
    MAKE_RET(void) ResetDamageEntity();
    MAKE_RET(void) RemoveWeaponModel(int nWeapon);
    MAKE_RET(float) GetAimZ();
    MAKE_RET(void) SetAimZ(float fValue);
    MAKE_RET(::CEntity*) GetContactEntity();
    MAKE_RET(::CVehicle*) GetContactVehicle();
    MAKE_RET(int) GetStat();
    MAKE_RET(BOOL) PerformingCustomAnimation();
    MAKE_RET(void) StartDancing(int nStyle);
    MAKE_RET(void) StopDancing();
    MAKE_RET(BOOL) DoesDancing();
    MAKE_RET(void) DropStuff();
    MAKE_RET(int) GetStuff();
    MAKE_RET(BOOL) ApplyStuff();
    MAKE_RET(void) ProcessDrunk();
    MAKE_RET(int) GetDrunkLevel();
    MAKE_RET(void) SetDrunkLevel(int nValue);
    MAKE_RET(void) DestroyCommandTask();
    MAKE_RET(void) EnableCellphone(BOOL bEnable);
    MAKE_RET(BOOL) UsingCellphone();
    MAKE_RET(void) SetFightingStyle(int nStyle);
    MAKE_RET(void) StartUrinating();
    MAKE_RET(void) StopUrinating();
    MAKE_RET(BOOL) DoesUrinating();
    MAKE_RET(void) LoadShoppingDataSubsection(const char* szName);
    MAKE_RET(::CPed*) GetAimedPed();
    MAKE_RET(void) SetKeys(short controllerState, short sLeftStickX, short sLeftStickY);
    MAKE_RET(short) GetKeys(short* pLeftStickX, short* pLeftStickY);
    MAKE_RET(void) CreateArrow(int nColor);
    MAKE_RET(void) SetModelIndex(int nModel);
    MAKE_RET(void) Kill();
    MAKE_RET(void) SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo);
    MAKE_RET(void) ProcessDancing();
    MAKE_RET(void) GiveStuff(int nType);
    MAKE_RET(void) Destroy();
    MAKE_RET(void) SetCameraMode(char nMode);
    MAKE_RET(void) SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio);
    MAKE_RET(BOOL) HasAccessory();
    MAKE_RET(void) DeleteAccessory(int nSlot);
    MAKE_RET(BOOL) GetAccessoryState(int nSlot);
    MAKE_RET(void) DeleteAllAccessories();
    MAKE_RET(void) AddAccessory(int nSlot, const Accessory* pInfo);
    MAKE_RET(CObject*) GetAccessory(int nSlot);
    MAKE_RET(char) GetCameraMode();
    MAKE_RET(void) GetBonePosition(unsigned int boneId, CVector* outPosition);
};

END_PACK

#endif // PED_HPP_