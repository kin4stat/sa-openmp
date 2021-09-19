#include "LocalPlayer.hpp"

LocalPlayer::LocalPlayer() {

}
Ped* LocalPlayer::GetPed() {

    return nullptr;
}

void LocalPlayer::ResetData() {

    return;
}

void LocalPlayer::ProcessHead() {

    return;
}

void LocalPlayer::SetSpecialAction(char nId) {

    return;
}

char LocalPlayer::GetSpecialAction() {

    return char{};
}

void LocalPlayer::UpdateSurfing() {

    return;
}

void LocalPlayer::SetSurfing(Vehicle* pVehicle, BOOL bStuck) {

    return;
}

void LocalPlayer::ProcessSurfing() {

    return;
}

BOOL LocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {

    return BOOL{};
}

int LocalPlayer::GetIncarSendRate() {

    return int{};
}

int LocalPlayer::GetOnfootSendRate() {

    return int{};
}

int LocalPlayer::GetUnoccupiedSendRate() {

    return int{};
}

void LocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {

    return;
}

BOOL LocalPlayer::Spawn() {

    return BOOL{};
}

D3DCOLOR LocalPlayer::GetColorAsRGBA() {

    return D3DCOLOR{};
}

D3DCOLOR LocalPlayer::GetColorAsARGB() {

    return D3DCOLOR{};
}

void LocalPlayer::ProcessOnfootWorldBounds() {

    return;
}

void LocalPlayer::ProcessIncarWorldBounds() {

    return;
}

void LocalPlayer::RequestSpawn() {

    return;
}

void LocalPlayer::PrepareForClassSelection() {

    return;
}

void LocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {

    return;
}

void LocalPlayer::EnableSpectating(BOOL bEnable) {

    return;
}

void LocalPlayer::SpectateForVehicle(ID nId) {

    return;
}

void LocalPlayer::SpectateForPlayer(ID nId) {

    return;
}

BOOL LocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {

    return BOOL{};
}

BOOL LocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {

    return BOOL{};
}

bool LocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {

    return bool{};
}

void LocalPlayer::UpdateCameraTarget() {

    return;
}

void LocalPlayer::DrawCameraTargetLabel() {

    return;
}

void LocalPlayer::SendOnfootData() {

    return;
}

void LocalPlayer::SendAimData() {

    return;
}

void LocalPlayer::SendTrailerData(ID nTrailer) {

    return;
}

void LocalPlayer::SendPassengerData() {

    return;
}

void LocalPlayer::WastedNotification() {

    return;
}

void LocalPlayer::RequestClass(int nId) {

    return;
}

void LocalPlayer::ChangeInterior(char nId) {

    return;
}

void LocalPlayer::Chat(const char* szText) {

    return;
}

void LocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {

    return;
}

void LocalPlayer::ExitVehicle(int nVehicle) {

    return;
}

void LocalPlayer::SendStats() {

    return;
}

void LocalPlayer::UpdateVehicleDamage(ID nVehicle) {

    return;
}

void LocalPlayer::NextClass() {

    return;
}

void LocalPlayer::PrevClass() {

    return;
}

void LocalPlayer::ProcessClassSelection() {

    return;
}

void LocalPlayer::UpdateWeapons() {

    return;
}

void LocalPlayer::ProcessSpectating() {

    return;
}

void LocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {

    return;
}

void LocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {

    return;
}

bool LocalPlayer::ProcessUnoccupiedSync(ID nVehicle, Vehicle* pVehicle) {

    return bool{};
}

void LocalPlayer::EnterVehicleAsPassenger() {

    return;
}

void LocalPlayer::SendIncarData() {

    return;
}

void LocalPlayer::Process() {

    return;
}

