#include "LocalPlayer.hpp"

MAKE_RET(CPed*) LocalPlayer::GetPed() {

    return kthook::return_value<CPed*>::make_true();
}

MAKE_RET(void) LocalPlayer::ResetData() {

    return true;
}

MAKE_RET(void) LocalPlayer::ProcessHead() {

    return true;
}

MAKE_RET(void) LocalPlayer::SetSpecialAction(char nId) {

    return true;
}

MAKE_RET(char) LocalPlayer::GetSpecialAction() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) LocalPlayer::UpdateSurfing() {

    return true;
}

MAKE_RET(void) LocalPlayer::SetSurfing(CVehicle* pVehicle, BOOL bStuck) {

    return true;
}

MAKE_RET(void) LocalPlayer::ProcessSurfing() {

    return true;
}

MAKE_RET(BOOL) LocalPlayer::NeedsToUpdate(const void* pOld, const void* pNew, unsigned int nLen) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(int) LocalPlayer::GetIncarSendRate() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) LocalPlayer::GetOnfootSendRate() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) LocalPlayer::GetUnoccupiedSendRate() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) LocalPlayer::SetSpawnInfo(const SpawnInfo* pInfo) {

    return true;
}

MAKE_RET(BOOL) LocalPlayer::Spawn() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(D3DCOLOR) LocalPlayer::GetColorAsRGBA() {

    return kthook::return_value<D3DCOLOR>::make_true();
}

MAKE_RET(D3DCOLOR) LocalPlayer::GetColorAsARGB() {

    return kthook::return_value<D3DCOLOR>::make_true();
}

MAKE_RET(void) LocalPlayer::ProcessOnfootWorldBounds() {

    return true;
}

MAKE_RET(void) LocalPlayer::ProcessIncarWorldBounds() {

    return true;
}

MAKE_RET(void) LocalPlayer::RequestSpawn() {

    return true;
}

MAKE_RET(void) LocalPlayer::PrepareForClassSelection() {

    return true;
}

MAKE_RET(void) LocalPlayer::PrepareForClassSelection_Outcome(BOOL bOutcome) {

    return true;
}

MAKE_RET(void) LocalPlayer::EnableSpectating(BOOL bEnable) {

    return true;
}

MAKE_RET(void) LocalPlayer::SpectateForVehicle(ID nId) {

    return true;
}

MAKE_RET(void) LocalPlayer::SpectateForPlayer(ID nId) {

    return true;
}

MAKE_RET(BOOL) LocalPlayer::NeedsToSendOnfootData(short controllerState, short sLeftStickX, short sLeftStickY) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) LocalPlayer::NeedsToSendIncarData(short controllerState, short sLeftStickX, short sLeftStickY) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(bool) LocalPlayer::DefineCameraTarget(CameraTarget* pInfo) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(void) LocalPlayer::UpdateCameraTarget() {

    return true;
}

MAKE_RET(void) LocalPlayer::DrawCameraTargetLabel() {

    return true;
}

MAKE_RET(void) LocalPlayer::SendOnfootData() {

    return true;
}

MAKE_RET(void) LocalPlayer::SendAimData() {

    return true;
}

MAKE_RET(void) LocalPlayer::SendTrailerData(ID nTrailer) {

    return true;
}

MAKE_RET(void) LocalPlayer::SendPassengerData() {

    return true;
}

MAKE_RET(void) LocalPlayer::WastedNotification() {

    return true;
}

MAKE_RET(void) LocalPlayer::RequestClass(int nId) {

    return true;
}

MAKE_RET(void) LocalPlayer::ChangeInterior(char nId) {

    return true;
}

MAKE_RET(void) LocalPlayer::Chat(const char* szText) {

    return true;
}

MAKE_RET(void) LocalPlayer::EnterVehicle(int nVehicle, BOOL bPassenger) {

    return true;
}

MAKE_RET(void) LocalPlayer::ExitVehicle(int nVehicle) {

    return true;
}

MAKE_RET(void) LocalPlayer::SendStats() {

    return true;
}

MAKE_RET(void) LocalPlayer::UpdateVehicleDamage(ID nVehicle) {

    return true;
}

MAKE_RET(void) LocalPlayer::NextClass() {

    return true;
}

MAKE_RET(void) LocalPlayer::PrevClass() {

    return true;
}

MAKE_RET(void) LocalPlayer::ProcessClassSelection() {

    return true;
}

MAKE_RET(void) LocalPlayer::UpdateWeapons() {

    return true;
}

MAKE_RET(void) LocalPlayer::ProcessSpectating() {

    return true;
}

MAKE_RET(void) LocalPlayer::SendTakeDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {

    return true;
}

MAKE_RET(void) LocalPlayer::SendGiveDamage(int nId, float fDamage, int nWeapon, int nBodyPart) {

    return true;
}

MAKE_RET(bool) LocalPlayer::ProcessUnoccupiedSync(ID nVehicle, CVehicle* pVehicle) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(void) LocalPlayer::EnterVehicleAsPassenger() {

    return true;
}

MAKE_RET(void) LocalPlayer::SendIncarData() {

    return true;
}

MAKE_RET(void) LocalPlayer::Process() {

    return true;
}

