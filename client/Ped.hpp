#ifndef PED_HPP_
#define PED_HPP_

#include "common.hpp"
#include "Entity.hpp"
#include "Object.hpp"
#include "AimStuff.hpp"
#include "ControllerState.hpp"

#include "CPed.h"
#include "CVector.h"

BEGIN_PACK

class Ped {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Ped", "ResetPointers", GetAddress(0xAB320), &Ped::ResetPointers);
        ReversibleHooks::Install("Ped", "SetInitialState", GetAddress(0xAB340), &Ped::SetInitialState);
        ReversibleHooks::Install("Ped", "GetAim", GetAddress(0xAB390), &Ped::GetAim);
        ReversibleHooks::Install("Ped", "GetCurrentWeapon", GetAddress(0xAB3C0), &Ped::GetCurrentWeapon);
        ReversibleHooks::Install("Ped", "GetVehicleRef", GetAddress(0xAB400), &Ped::GetVehicleRef);
        ReversibleHooks::Install("Ped", "DeleteArrow", GetAddress(0xAB420), &Ped::DeleteArrow);
        ReversibleHooks::Install("Ped", "IsOnScreen", GetAddress(0xAB450), &Ped::IsOnScreen);
        ReversibleHooks::Install("Ped", "SetImmunities", GetAddress(0xAB470), &Ped::SetImmunities);
        ReversibleHooks::Install("Ped", "GetHealth", GetAddress(0xAB4C0), &Ped::GetHealth);
        ReversibleHooks::Install("Ped", "SetHealth", GetAddress(0xAB4E0), &Ped::SetHealth);
        ReversibleHooks::Install("Ped", "GetArmour", GetAddress(0xAB500), &Ped::GetArmour);
        ReversibleHooks::Install("Ped", "SetArmour", GetAddress(0xAB520), &Ped::SetArmour);
        ReversibleHooks::Install("Ped", "GetFlags", GetAddress(0xAB540), &Ped::GetFlags);
        ReversibleHooks::Install("Ped", "SetFlags", GetAddress(0xAB560), &Ped::SetFlags);
        ReversibleHooks::Install("Ped", "IsDead", GetAddress(0xAB580), &Ped::IsDead);
        ReversibleHooks::Install("Ped", "GetState", GetAddress(0xAB5B0), &Ped::GetState);
        ReversibleHooks::Install("Ped", "SetState", GetAddress(0xAB5C0), &Ped::SetState);
        ReversibleHooks::Install("Ped", "GetRotation", GetAddress(0xAB600), &Ped::GetRotation);
        ReversibleHooks::Install("Ped", "ForceRotation", GetAddress(0xAB680), &Ped::ForceRotation);
        ReversibleHooks::Install("Ped", "SetRotation", GetAddress(0xAB6D0), &Ped::SetRotation);
        ReversibleHooks::Install("Ped", "IsPassenger", GetAddress(0xAB730), &Ped::IsPassenger);
        ReversibleHooks::Install("Ped", "GetVehicle", GetAddress(0xAB770), &Ped::GetVehicle);
        ReversibleHooks::Install("Ped", "ClearWeapons", GetAddress(0xAB780), &Ped::ClearWeapons);
        ReversibleHooks::Install("Ped", "RemoveWeaponWhenEnteringVehicle", GetAddress(0xAB880), &Ped::RemoveWeaponWhenEnteringVehicle);
        ReversibleHooks::Install("Ped", "GetCurrentWeaponSlot", GetAddress(0xAB8B0), &Ped::GetCurrentWeaponSlot);
        ReversibleHooks::Install("Ped", "CurrentWeaponHasAmmo", GetAddress(0xAB8D0), &Ped::CurrentWeaponHasAmmo);
        ReversibleHooks::Install("Ped", "GetDistanceToEntity", GetAddress(0xAB910), &Ped::GetDistanceToEntity);
        ReversibleHooks::Install("Ped", "GetVehicleSeatIndex", GetAddress(0xAB970), &Ped::GetVehicleSeatIndex);
        ReversibleHooks::Install("Ped", "PutIntoVehicle", GetAddress(0xABA00), &Ped::PutIntoVehicle);
        ReversibleHooks::Install("Ped", "EnterVehicle", GetAddress(0xABB80), &Ped::EnterVehicle);
        ReversibleHooks::Install("Ped", "ExitVehicle", GetAddress(0xABC50), &Ped::ExitVehicle);
        ReversibleHooks::Install("Ped", "WarpFromVehicle", GetAddress(0xABCE0), &Ped::WarpFromVehicle);
        ReversibleHooks::Install("Ped", "SetSpawnInfo", GetAddress(0xABEC0), &Ped::SetSpawnInfo);
        ReversibleHooks::Install("Ped", "SetControllable", GetAddress(0xABF00), &Ped::SetControllable);
        ReversibleHooks::Install("Ped", "GetDeathInfo", GetAddress(0xABFC0), &Ped::GetDeathInfo);
        ReversibleHooks::Install("Ped", "GetFloor", GetAddress(0xAC180), &Ped::GetFloor);
        ReversibleHooks::Install("Ped", "GetCurrentWeaponInfo", GetAddress(0xAC230), &Ped::GetCurrentWeaponInfo);
        ReversibleHooks::Install("Ped", "HandsUp", GetAddress(0xAC280), &Ped::HandsUp);
        ReversibleHooks::Install("Ped", "DoesHandsUp", GetAddress(0xAC2D0), &Ped::DoesHandsUp);
        ReversibleHooks::Install("Ped", "HoldObject", GetAddress(0xAC330), &Ped::HoldObject);
        ReversibleHooks::Install("Ped", "EnableJetpack", GetAddress(0xAC480), &Ped::EnableJetpack);
        ReversibleHooks::Install("Ped", "DisableJetpack", GetAddress(0xAC4D0), &Ped::DisableJetpack);
        ReversibleHooks::Install("Ped", "HasJetpack", GetAddress(0xAC530), &Ped::HasJetpack);
        ReversibleHooks::Install("Ped", "EnablePassengerDrivebyMode", GetAddress(0xAC700), &Ped::EnablePassengerDrivebyMode);
        ReversibleHooks::Install("Ped", "Extinguish", GetAddress(0xAC860), &Ped::Extinguish);
        ReversibleHooks::Install("Ped", "GetWeaponSlot", GetAddress(0xAC900), &Ped::GetWeaponSlot);
        ReversibleHooks::Install("Ped", "SetWalkStyle", GetAddress(0xAC940), &Ped::SetWalkStyle);
        ReversibleHooks::Install("Ped", "PerformAnimation", GetAddress(0xAC9A0), &Ped::PerformAnimation);
        ReversibleHooks::Install("Ped", "LinkToInterior", GetAddress(0xACAB0), &Ped::LinkToInterior);
        ReversibleHooks::Install("Ped", "DestroyParachute", GetAddress(0xACB50), &Ped::DestroyParachute);
        ReversibleHooks::Install("Ped", "OpenParachute", GetAddress(0xACC40), &Ped::OpenParachute);
        ReversibleHooks::Install("Ped", "ProcessParachuteEvent", GetAddress(0xACD90), &Ped::ProcessParachuteEvent);
        ReversibleHooks::Install("Ped", "IsOnGround", GetAddress(0xACFD0), &Ped::IsOnGround);
        ReversibleHooks::Install("Ped", "ResetDamageEntity", GetAddress(0xACFF0), &Ped::ResetDamageEntity);
        ReversibleHooks::Install("Ped", "RemoveWeaponModel", GetAddress(0xAD020), &Ped::RemoveWeaponModel);
        ReversibleHooks::Install("Ped", "GetAimZ", GetAddress(0xAD060), &Ped::GetAimZ);
        ReversibleHooks::Install("Ped", "SetAimZ", GetAddress(0xAD0A0), &Ped::SetAimZ);
        ReversibleHooks::Install("Ped", "GetContactEntity", GetAddress(0xAD110), &Ped::GetContactEntity);
        ReversibleHooks::Install("Ped", "GetContactVehicle", GetAddress(0xAD120), &Ped::GetContactVehicle);
        ReversibleHooks::Install("Ped", "GetStat", GetAddress(0xAD150), &Ped::GetStat);
        ReversibleHooks::Install("Ped", "PerformingCustomAnimation", GetAddress(0xAD170), &Ped::PerformingCustomAnimation);
        ReversibleHooks::Install("Ped", "StartDancing", GetAddress(0xAD240), &Ped::StartDancing);
        ReversibleHooks::Install("Ped", "StopDancing", GetAddress(0xAD290), &Ped::StopDancing);
        ReversibleHooks::Install("Ped", "DoesDancing", GetAddress(0xAD2D0), &Ped::DoesDancing);
        ReversibleHooks::Install("Ped", "DropStuff", GetAddress(0xAD370), &Ped::DropStuff);
        ReversibleHooks::Install("Ped", "GetStuff", GetAddress(0xAD400), &Ped::GetStuff);
        ReversibleHooks::Install("Ped", "ApplyStuff", GetAddress(0xAD410), &Ped::ApplyStuff);
        ReversibleHooks::Install("Ped", "ProcessDrunk", GetAddress(0xAD560), &Ped::ProcessDrunk);
        ReversibleHooks::Install("Ped", "GetDrunkLevel", GetAddress(0xAD710), &Ped::GetDrunkLevel);
        ReversibleHooks::Install("Ped", "SetDrunkLevel", GetAddress(0xAD720), &Ped::SetDrunkLevel);
        ReversibleHooks::Install("Ped", "DestroyCommandTask", GetAddress(0xAD790), &Ped::DestroyCommandTask);
        ReversibleHooks::Install("Ped", "EnableCellphone", GetAddress(0xAD7E0), &Ped::EnableCellphone);
        ReversibleHooks::Install("Ped", "UsingCellphone", GetAddress(0xAD810), &Ped::UsingCellphone);
        ReversibleHooks::Install("Ped", "SetFightingStyle", GetAddress(0xAD840), &Ped::SetFightingStyle);
        ReversibleHooks::Install("Ped", "StartUrinating", GetAddress(0xAD870), &Ped::StartUrinating);
        ReversibleHooks::Install("Ped", "StopUrinating", GetAddress(0xAD950), &Ped::StopUrinating);
        ReversibleHooks::Install("Ped", "DoesUrinating", GetAddress(0xAD9D0), &Ped::DoesUrinating);
        ReversibleHooks::Install("Ped", "LoadShoppingDataSubsection", GetAddress(0xADA70), &Ped::LoadShoppingDataSubsection);
        ReversibleHooks::Install("Ped", "GetAimedPed", GetAddress(0xAE6D0), &Ped::GetAimedPed);
        ReversibleHooks::Install("Ped", "SetKeys", GetAddress(0xAEAB0), &Ped::SetKeys);
        ReversibleHooks::Install("Ped", "GetKeys", GetAddress(0xAED40), &Ped::GetKeys);
        ReversibleHooks::Install("Ped", "CreateArrow", GetAddress(0xAEEA0), &Ped::CreateArrow);
        ReversibleHooks::Install("Ped", "SetModelIndex", GetAddress(0xAF6C0), &Ped::SetModelIndex);
        ReversibleHooks::Install("Ped", "Kill", GetAddress(0xAF740), &Ped::Kill);
        ReversibleHooks::Install("Ped", "SetWeaponAmmo", GetAddress(0xAF7F0), &Ped::SetWeaponAmmo);
        ReversibleHooks::Install("Ped", "ProcessDancing", GetAddress(0xAF820), &Ped::ProcessDancing);
        ReversibleHooks::Install("Ped", "GiveStuff", GetAddress(0xAFA40), &Ped::GiveStuff);
        ReversibleHooks::Install("Ped", "Destroy", GetAddress(0xB0710), &Ped::Destroy);
        ReversibleHooks::Install("Ped", "SetCameraMode", GetAddress(0x13F70), &Ped::SetCameraMode);
        ReversibleHooks::Install("Ped", "SetCameraExtZoomAndAspectRatio", GetAddress(0x13F90), &Ped::SetCameraExtZoomAndAspectRatio);
        ReversibleHooks::Install("Ped", "HasAccessory", GetAddress(0xAE5A0), &Ped::HasAccessory);
        ReversibleHooks::Install("Ped", "DeleteAccessory", GetAddress(0xAE5C0), &Ped::DeleteAccessory);
        ReversibleHooks::Install("Ped", "GetAccessoryState", GetAddress(0xAE620), &Ped::GetAccessoryState);
        ReversibleHooks::Install("Ped", "DeleteAllAccessories", GetAddress(0xB0220), &Ped::DeleteAllAccessories);
        ReversibleHooks::Install("Ped", "AddAccessory", GetAddress(0xB0280), &Ped::AddAccessory);
        ReversibleHooks::Install("Ped", "GetAccessory", GetAddress(0x13330), &Ped::GetAccessory);
        ReversibleHooks::Install("Ped", "GetCameraMode", GetAddress(0x2CB0), &Ped::GetCameraMode);
        ReversibleHooks::Install("Ped", "GetBonePosition", GetAddress(0xADBF0), &Ped::GetBonePosition);
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

    
    Ped();
    ~Ped();

    void ResetPointers();
    void SetInitialState();
    AimStuff::Aim* GetAim();
    char GetCurrentWeapon();
    GTAREF GetVehicleRef();
    void DeleteArrow();
    BOOL IsOnScreen();
    void SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP);
    float GetHealth();
    void SetHealth(float fValue);
    float GetArmour();
    void SetArmour(float fValue);
    int GetFlags();
    void SetFlags(int nValue);
    BOOL IsDead();
    char GetState();
    void SetState(char nValue);
    float GetRotation();
    void ForceRotation(float fValue);
    void SetRotation(float fValue);
    BOOL IsPassenger();
    ::CVehicle* GetVehicle();
    void ClearWeapons();
    void RemoveWeaponWhenEnteringVehicle();
    ::CWeapon* GetCurrentWeaponSlot();
    BOOL CurrentWeaponHasAmmo();
    float GetDistanceToEntity(const Entity* pEntity);
    int GetVehicleSeatIndex();
    void PutIntoVehicle(GTAREF vehicle, int nSeat);
    void EnterVehicle(GTAREF vehicle, BOOL bAsPassenger);
    void ExitVehicle();
    void WarpFromVehicle(CVector putAt);
    void SetSpawnInfo(const CVector* pPosition, float fRotation);
    void SetControllable(BOOL bEnable);
    char GetDeathInfo(ID* pKiller);
    ::CEntity* GetFloor();
    ::CWeaponInfo* GetCurrentWeaponInfo();
    void HandsUp();
    BOOL DoesHandsUp();
    void HoldObject(int nModel);
    void EnableJetpack();
    void DisableJetpack();
    BOOL HasJetpack();
    BOOL EnablePassengerDrivebyMode();
    void Extinguish();
    ::CWeapon* GetWeaponSlot(int nWeapon);
    void SetWalkStyle(const char* szName);
    void PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int loopa, int nLockX, int nLockY, int nLockF, int nTime);
    void LinkToInterior(char nId, BOOL bRefresh);
    void DestroyParachute();
    BOOL OpenParachute();
    void ProcessParachuteEvent(const char* szName);
    BOOL IsOnGround();
    void ResetDamageEntity();
    void RemoveWeaponModel(int nWeapon);
    float GetAimZ();
    void SetAimZ(float fValue);
    ::CEntity* GetContactEntity();
    ::CVehicle* GetContactVehicle();
    int GetStat();
    BOOL PerformingCustomAnimation();
    void StartDancing(int nStyle);
    void StopDancing();
    BOOL DoesDancing();
    void DropStuff();
    int GetStuff();
    BOOL ApplyStuff();
    void ProcessDrunk();
    int GetDrunkLevel();
    void SetDrunkLevel(int nValue);
    void DestroyCommandTask();
    void EnableCellphone(BOOL bEnable);
    BOOL UsingCellphone();
    void SetFightingStyle(int nStyle);
    void StartUrinating();
    void StopUrinating();
    BOOL DoesUrinating();
    void LoadShoppingDataSubsection(const char* szName);
    ::CPed* GetAimedPed();
    void SetKeys(short controllerState, short sLeftStickX, short sLeftStickY);
    short GetKeys(short* pLeftStickX, short* pLeftStickY);
    void CreateArrow(int nColor);
    void SetModelIndex(int nModel);
    void Kill();
    void SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo);
    void ProcessDancing();
    void GiveStuff(int nType);
    void Destroy();
    void SetCameraMode(char nMode);
    void SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio);
    BOOL HasAccessory();
    void DeleteAccessory(int nSlot);
    BOOL GetAccessoryState(int nSlot);
    void DeleteAllAccessories();
    void AddAccessory(int nSlot, const Accessory* pInfo);
    Object* GetAccessory(int nSlot);
    char GetCameraMode();
    void GetBonePosition(unsigned int boneId, CVector* outPosition);
};

END_PACK

#endif // PED_HPP_