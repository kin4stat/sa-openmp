#include "Game.hpp"

MAKE_RET(CPed*) Game::GetPlayerPed() {

    return kthook::return_value<CPed*>::make_true();
}

MAKE_RET(float) Game::FindGroundZ(CVector vPoint) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Game::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {

    return true;
}

MAKE_RET(void) Game::InitGame() {

    return true;
}

MAKE_RET(void) Game::StartGame() {

    return true;
}

MAKE_RET(BOOL) Game::IsMenuVisible() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) Game::IsStarted() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Game::LoadRequestedModels() {

    return true;
}

MAKE_RET(BOOL) Game::IsModelAvailable(int nModel) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Game::SetWorldTime(char nHour, char nMinute) {

    return true;
}

MAKE_RET(void) Game::GetWorldTime(char* nHour, char* nMinute) {

    return true;
}

MAKE_RET(void) Game::LetTimeGo(bool blet) {

    return true;
}

MAKE_RET(void) Game::SetWorldWeather(char nWeather) {

    return true;
}

MAKE_RET(void) Game::SetFrameLimiter(int nValue) {

    return true;
}

MAKE_RET(void) Game::SetMaxStats() {

    return true;
}

MAKE_RET(void) Game::DisableTrainTraffic() {

    return true;
}

MAKE_RET(void) Game::RefreshRenderer(float fX, float fY) {

    return true;
}

MAKE_RET(void) Game::RequestAnimation(const char* szFile) {

    return true;
}

MAKE_RET(BOOL) Game::IsAnimationLoaded(const char* szFile) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Game::ReleaseAnimation(const char* szFile) {

    return true;
}

MAKE_RET(void) Game::DisplayGameText(const char* szText, int nType, int nSize) {

    return true;
}

MAKE_RET(void) Game::DeleteRacingCheckpoint() {

    return true;
}

MAKE_RET(GTAREF) Game::CreateMarker(int nIcon, CVector vPosition, int nColor, int nType) {

    return kthook::return_value<GTAREF>::make_true();
}

MAKE_RET(void) Game::DeleteMarker(GTAREF handle) {

    return true;
}

MAKE_RET(char) Game::GetCurrentInterior() {

    return kthook::return_value<char>::make_true();
}

MAKE_RET(void) Game::UpdateFarClippingPlane() {

    return true;
}

MAKE_RET(void) Game::IncreasePlayerMoney(int nInc) {

    return true;
}

MAKE_RET(int) Game::GetPlayerMoney() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Game::CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle) {

    return true;
}

MAKE_RET(GTAREF) Game::CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition) {

    return kthook::return_value<GTAREF>::make_true();
}

MAKE_RET(IDirect3DDevice9*) Game::GetDevice() {

    return kthook::return_value<IDirect3DDevice9*>::make_true();
}

MAKE_RET(void) Game::Restart() {

    return true;
}

MAKE_RET(::CWeaponInfo*) Game::GetWeaponInfo(int nWeapon, int nSkill) {

    return kthook::return_value<::CWeaponInfo*>::make_true();
}

MAKE_RET(void) Game::SetWorldGravity(float fValue) {

    return true;
}

MAKE_RET(void) Game::SetWantedLevel(char nLevel) {

    return true;
}

MAKE_RET(void) Game::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {

    return true;
}

MAKE_RET(void) Game::DrawGangZone(float* pPos, char nColor) {

    return true;
}

MAKE_RET(void) Game::EnableZoneDisplaying(bool bEnable) {

    return true;
}

MAKE_RET(void) Game::EnableStuntBonus(bool bEnable) {

    return true;
}

MAKE_RET(void) Game::LoadScene(const char* szFile) {

    return true;
}

MAKE_RET(int) Game::GetUsedMemory() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) Game::GetStreamingMemory() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Game::SetRequiredVehicleModels(unsigned char* pModelCount) {

    return true;
}

MAKE_RET(int) Game::GetTimer() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) Game::LoadAnimationsAndModels() {

    return true;
}

MAKE_RET(void) Game::LoadCollisionFile(const char* szFile) {

    return true;
}

MAKE_RET(void) Game::LoadCullZone(const char* szLine) {

    return true;
}

MAKE_RET(BOOL) Game::UsingGamepad() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Game::DisableAutoAiming() {

    return true;
}

MAKE_RET(void) Game::EnableHUD(BOOL bEnable) {

    return true;
}

MAKE_RET(void) Game::SetCheckpoint(CVector* pPos, CVector* pSize) {

    return true;
}

MAKE_RET(void) Game::CreateRacingCheckpoint() {

    return true;
}

MAKE_RET(void) Game::ProcessCheckpoints() {

    return true;
}

MAKE_RET(void) Game::ResetMoney() {

    return true;
}

MAKE_RET(void) Game::SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize) {

    return true;
}

MAKE_RET(void) Game::EnableRadar(BOOL bEnable) {

    return true;
}

MAKE_RET(void*) Game::GetWindowHandle() {

    return kthook::return_value<void*>::make_true();
}

MAKE_RET(CAudio*) Game::GetAudio() {

    return kthook::return_value<CAudio*>::make_true();
}

MAKE_RET(CCamera*) Game::GetCamera() {

    return kthook::return_value<CCamera*>::make_true();
}

MAKE_RET(BOOL) Game::DoesHeadMoves() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Game::EnableClock(bool bEnable) {

    return true;
}

MAKE_RET(void) Game::Sleep(int elapsed, int fpsLimit) {

    return true;
}

MAKE_RET(BOOL) Game::RemovePed(CPed* pPed) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(CVehicle*) Game::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {

    return kthook::return_value<CVehicle*>::make_true();
}

MAKE_RET(void) Game::ProcessInputEnabling() {

    return true;
}

MAKE_RET(void) Game::ProcessFrameLimiter() {

    return true;
}

