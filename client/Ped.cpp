#include "Ped.hpp"

Ped::Ped() {

}
void Ped::ResetPointers() {

    return;
}

void Ped::SetInitialState() {

    return;
}

AimStuff::Aim* Ped::GetAim() {

    return nullptr;
}

char Ped::GetCurrentWeapon() {

    return char{};
}

GTAREF Ped::GetVehicleRef() {

    return GTAREF{};
}

void Ped::DeleteArrow() {

    return;
}

BOOL Ped::IsOnScreen() {

    return BOOL{};
}

void Ped::SetImmunities(BOOL BP, BOOL FP, BOOL EP, BOOL CP, BOOL MP) {

    return;
}

float Ped::GetHealth() {

    return float{};
}

void Ped::SetHealth(float fValue) {

    return;
}

float Ped::GetArmour() {

    return float{};
}

void Ped::SetArmour(float fValue) {

    return;
}

int Ped::GetFlags() {

    return int{};
}

void Ped::SetFlags(int nValue) {

    return;
}

BOOL Ped::IsDead() {

    return BOOL{};
}

char Ped::GetState() {

    return char{};
}

void Ped::SetState(char nValue) {

    return;
}

float Ped::GetRotation() {

    return float{};
}

void Ped::ForceRotation(float fValue) {

    return;
}

void Ped::SetRotation(float fValue) {

    return;
}

BOOL Ped::IsPassenger() {

    return BOOL{};
}

::CVehicle* Ped::GetVehicle() {

    return nullptr;
}

void Ped::ClearWeapons() {

    return;
}

void Ped::RemoveWeaponWhenEnteringVehicle() {

    return;
}

::CWeapon* Ped::GetCurrentWeaponSlot() {

    return nullptr;
}

BOOL Ped::CurrentWeaponHasAmmo() {

    return BOOL{};
}

float Ped::GetDistanceToEntity(const Entity* pEntity) {

    return float{};
}

int Ped::GetVehicleSeatIndex() {

    return int{};
}

void Ped::PutIntoVehicle(GTAREF vehicle, int nSeat) {

    return;
}

void Ped::EnterVehicle(GTAREF vehicle, BOOL bAsPassenger) {

    return;
}

void Ped::ExitVehicle() {

    return;
}

void Ped::WarpFromVehicle(CVector putAt) {

    return;
}

void Ped::SetSpawnInfo(const CVector* pPosition, float fRotation) {

    return;
}

void Ped::SetControllable(BOOL bEnable) {

    return;
}

char Ped::GetDeathInfo(ID* pKiller) {

    return char{};
}

::CEntity* Ped::GetFloor() {

    return nullptr;
}

::CWeaponInfo* Ped::GetCurrentWeaponInfo() {

    return nullptr;
}

void Ped::HandsUp() {

    return;
}

BOOL Ped::DoesHandsUp() {

    return BOOL{};
}

void Ped::HoldObject(int nModel) {

    return;
}

void Ped::EnableJetpack() {

    return;
}

void Ped::DisableJetpack() {

    return;
}

BOOL Ped::HasJetpack() {

    return BOOL{};
}

BOOL Ped::EnablePassengerDrivebyMode() {

    return BOOL{};
}

void Ped::Extinguish() {

    return;
}

::CWeapon* Ped::GetWeaponSlot(int nWeapon) {

    return nullptr;
}

void Ped::SetWalkStyle(const char* szName) {

    return;
}

void Ped::PerformAnimation(const char* szName, const char* szFile, float fFramedelta, int loopa, int nLockX, int nLockY, int nLockF, int nTime) {

    return;
}

void Ped::LinkToInterior(char nId, BOOL bRefresh) {

    return;
}

void Ped::DestroyParachute() {

    return;
}

BOOL Ped::OpenParachute() {

    return BOOL{};
}

void Ped::ProcessParachuteEvent(const char* szName) {

    return;
}

BOOL Ped::IsOnGround() {

    return BOOL{};
}

void Ped::ResetDamageEntity() {

    return;
}

void Ped::RemoveWeaponModel(int nWeapon) {

    return;
}

float Ped::GetAimZ() {

    return float{};
}

void Ped::SetAimZ(float fValue) {

    return;
}

::CEntity* Ped::GetContactEntity() {

    return nullptr;
}

::CVehicle* Ped::GetContactVehicle() {

    return nullptr;
}

int Ped::GetStat() {

    return int{};
}

BOOL Ped::PerformingCustomAnimation() {

    return BOOL{};
}

void Ped::StartDancing(int nStyle) {

    return;
}

void Ped::StopDancing() {

    return;
}

BOOL Ped::DoesDancing() {

    return BOOL{};
}

void Ped::DropStuff() {

    return;
}

int Ped::GetStuff() {

    return int{};
}

BOOL Ped::ApplyStuff() {

    return BOOL{};
}

void Ped::ProcessDrunk() {

    return;
}

int Ped::GetDrunkLevel() {

    return int{};
}

void Ped::SetDrunkLevel(int nValue) {

    return;
}

void Ped::DestroyCommandTask() {

    return;
}

void Ped::EnableCellphone(BOOL bEnable) {

    return;
}

BOOL Ped::UsingCellphone() {

    return BOOL{};
}

void Ped::SetFightingStyle(int nStyle) {

    return;
}

void Ped::StartUrinating() {

    return;
}

void Ped::StopUrinating() {

    return;
}

BOOL Ped::DoesUrinating() {

    return BOOL{};
}

void Ped::LoadShoppingDataSubsection(const char* szName) {

    return;
}

::CPed* Ped::GetAimedPed() {

    return nullptr;
}

void Ped::SetKeys(short controllerState, short sLeftStickX, short sLeftStickY) {

    return;
}

short Ped::GetKeys(short* pLeftStickX, short* pLeftStickY) {

    return short{};
}

void Ped::CreateArrow(int nColor) {

    return;
}

void Ped::SetModelIndex(int nModel) {

    return;
}

void Ped::Kill() {

    return;
}

void Ped::SetWeaponAmmo(unsigned char nWeapon, unsigned short nAmmo) {

    return;
}

void Ped::ProcessDancing() {

    return;
}

void Ped::GiveStuff(int nType) {

    return;
}

void Ped::Destroy() {

    return;
}

void Ped::SetCameraMode(char nMode) {

    return;
}

void Ped::SetCameraExtZoomAndAspectRatio(float fExtZoom, float fAspectRatio) {

    return;
}

BOOL Ped::HasAccessory() {

    return BOOL{};
}

void Ped::DeleteAccessory(int nSlot) {

    return;
}

BOOL Ped::GetAccessoryState(int nSlot) {

    return BOOL{};
}

void Ped::DeleteAllAccessories() {

    return;
}

void Ped::AddAccessory(int nSlot, const Accessory* pInfo) {

    return;
}

Object* Ped::GetAccessory(int nSlot) {

    return nullptr;
}

char Ped::GetCameraMode() {

    return char{};
}

void Ped::GetBonePosition(unsigned int boneId, CVector* outPosition) {

    return;
}

