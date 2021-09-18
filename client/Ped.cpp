#include "Ped.hpp"

Ped::Ped(int nPlayerNumber, int nModel, CVector position, float fRotation) {

}
MAKE_RET(void) Ped::ResetPointers() {

    return true;
}

MAKE_RET(void) Ped::SetInitialState() {

    return true;
}

MAKE_RET(AimStuff::Aim*) Ped::GetAim() {

    return kthook::return_value<AimStuff::Aim*>::make_true();
}

MAKE_RET(char) Ped::GetCurrentWeapon() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(GTAREF) Ped::GetVehicleRef() {

    return kthook::return_value<GTAREF>::make_true();
}

MAKE_RET(void) Ped::DeleteArrow() {

    return true;
}

MAKE_RET(BOOL) Ped::IsOnScreen() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {

    return true;
}

MAKE_RET(float) Ped::GetHealth() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Ped::SetHealth(float fValue) {

    return true;
}

MAKE_RET(float) Ped::GetArmour() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Ped::SetArmour(float fValue) {

    return true;
}

MAKE_RET(int) Ped::GetFlags() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Ped::SetFlags(int nValue) {

    return true;
}

MAKE_RET(BOOL) Ped::IsDead() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(char) Ped::GetState() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Ped::SetState(char nValue) {

    return true;
}

MAKE_RET(float) Ped::GetRotation() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Ped::ForceRotation(float fValue) {

    return true;
}

MAKE_RET(void) Ped::SetRotation(float fValue) {

    return true;
}

MAKE_RET(BOOL) Ped::IsPassenger() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(::CVehicle*) Ped::GetVehicle() {

    return kthook::return_value<::CVehicle*>::make_true();
}

MAKE_RET(void) Ped::ClearWeapons() {

    return true;
}

MAKE_RET(void) Ped::RemoveWeaponWhenEnteringVehicle() {

    return true;
}

MAKE_RET(::CWeapon*) Ped::GetCurrentWeaponSlot() {

    return kthook::return_value<::CWeapon*>::make_true();
}

MAKE_RET(BOOL) Ped::CurrentWeaponHasAmmo() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(float) Ped::GetDistanceToEntity(const CEntity* pEntity) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(int) Ped::GetVehicleSeatIndex() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Ped::PutIntoVehicle(GTAREF vehicle, int nSeat) {

    return true;
}

MAKE_RET(void) Ped::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {

    return true;
}

MAKE_RET(void) Ped::ExitVehicle() {

    return true;
}

MAKE_RET(void) Ped::WarpFromVehicle(CVector putAt) {

    return true;
}

MAKE_RET(void) Ped::SetSpawnInfo(const CVector* pPosition, float fRotation) {

    return true;
}

MAKE_RET(void) Ped::SetControllable(BOOL bEnable) {

    return true;
}

MAKE_RET(char) Ped::GetDeathInfo(ID* pKiller) {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(::CEntity*) Ped::GetFloor() {

    return kthook::return_value<::CEntity*>::make_true();
}

MAKE_RET(::CWeaponInfo*) Ped::GetCurrentWeaponInfo() {

    return kthook::return_value<::CWeaponInfo*>::make_true();
}

MAKE_RET(void) Ped::HandsUp() {

    return true;
}

MAKE_RET(BOOL) Ped::DoesHandsUp() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::HoldObject(int nModel) {

    return true;
}

MAKE_RET(void) Ped::EnableJetpack() {

    return true;
}

MAKE_RET(void) Ped::DisableJetpack() {

    return true;
}

MAKE_RET(BOOL) Ped::HasJetpack() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Ped::EnablePassengerDrivebyMode() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::Extinguish() {

    return true;
}

MAKE_RET(::CWeapon*) Ped::GetWeaponSlot(int nWeapon) {

    return kthook::return_value<::CWeapon*>::make_true();
}

MAKE_RET(void) Ped::SetWalkStyle(const char* szName) {

    return true;
}

MAKE_RET(void) Ped::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int loopa, int nLockX, int nLockY, int nLockF, int nTime) {

    return true;
}

MAKE_RET(void) Ped::LinkToInterior(char nId, BOOL bRefresh) {

    return true;
}

MAKE_RET(void) Ped::DestroyParachute() {

    return true;
}

MAKE_RET(BOOL) Ped::OpenParachute() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::ProcessParachuteEvent(const char* szName) {

    return true;
}

MAKE_RET(BOOL) Ped::IsOnGround() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::ResetDamageEntity() {

    return true;
}

MAKE_RET(void) Ped::RemoveWeaponModel(int nWeapon) {

    return true;
}

MAKE_RET(float) Ped::GetAimZ() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Ped::SetAimZ(float fValue) {

    return true;
}

MAKE_RET(::CEntity*) Ped::GetContactEntity() {

    return kthook::return_value<::CEntity*>::make_true();
}

MAKE_RET(::CVehicle*) Ped::GetContactVehicle() {

    return kthook::return_value<::CVehicle*>::make_true();
}

MAKE_RET(int) Ped::GetStat() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) Ped::PerformingCustomAnimation() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::StartDancing(int nStyle) {

    return true;
}

MAKE_RET(void) Ped::StopDancing() {

    return true;
}

MAKE_RET(BOOL) Ped::DoesDancing() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::DropStuff() {

    return true;
}

MAKE_RET(int) Ped::GetStuff() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) Ped::ApplyStuff() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::ProcessDrunk() {

    return true;
}

MAKE_RET(int) Ped::GetDrunkLevel() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Ped::SetDrunkLevel(int nValue) {

    return true;
}

MAKE_RET(void) Ped::DestroyCommandTask() {

    return true;
}

MAKE_RET(void) Ped::EnableCellphone(BOOL bEnable) {

    return true;
}

MAKE_RET(BOOL) Ped::UsingCellphone() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::SetFightingStyle(int nStyle) {

    return true;
}

MAKE_RET(void) Ped::StartUrinating() {

    return true;
}

MAKE_RET(void) Ped::StopUrinating() {

    return true;
}

MAKE_RET(BOOL) Ped::DoesUrinating() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::LoadShoppingDataSubsection(const char* szName) {

    return true;
}

MAKE_RET(::CPed*) Ped::GetAimedPed() {

    return kthook::return_value<::CPed*>::make_true();
}

MAKE_RET(void) Ped::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {

    return true;
}

MAKE_RET(short) Ped::GetKeys(short* pLeftStickX, short* pLeftStickY) {

    return kthook::return_value<short>::make_true();
}

MAKE_RET(void) Ped::CreateArrow(int nColor) {

    return true;
}

MAKE_RET(void) Ped::SetModelIndex(int nModel) {

    return true;
}

MAKE_RET(void) Ped::Kill() {

    return true;
}

MAKE_RET(void) Ped::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {

    return true;
}

MAKE_RET(void) Ped::ProcessDancing() {

    return true;
}

MAKE_RET(void) Ped::GiveStuff(int nType) {

    return true;
}

MAKE_RET(void) Ped::Destroy() {

    return true;
}

MAKE_RET(void) Ped::SetCameraMode(char nMode) {

    return true;
}

MAKE_RET(void) Ped::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {

    return true;
}

MAKE_RET(BOOL) Ped::HasAccessory() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::DeleteAccessory(int nSlot) {

    return true;
}

MAKE_RET(BOOL) Ped::GetAccessoryState(int nSlot) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Ped::DeleteAllAccessories() {

    return true;
}

MAKE_RET(void) Ped::AddAccessory(int nSlot, const Accessory* pInfo) {

    return true;
}

MAKE_RET(CObject*) Ped::GetAccessory(int nSlot) {

    return kthook::return_value<CObject*>::make_true();
}

MAKE_RET(char) Ped::GetCameraMode() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Ped::GetBonePosition(unsigned int boneId, CVector* outPosition) {

    return true;
}

