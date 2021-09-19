#include "Game.hpp"

Game::Game() {

}
CPed* Game::GetPlayerPed() {

    return nullptr;
}

float Game::FindGroundZ(CVector vPoint) {

    return float{};
}

void Game::SetCursorMode(int nMode, BOOL bImmediatelyHideCursor) {

    return;
}

void Game::InitGame() {

    return;
}

void Game::StartGame() {

    return;
}

BOOL Game::IsMenuVisible() {

    return BOOL{};
}

BOOL Game::IsStarted() {

    return BOOL{};
}

void Game::LoadRequestedModels() {

    return;
}

BOOL Game::IsModelAvailable(int nModel) {

    return BOOL{};
}

void Game::SetWorldTime(char nHour, char nMinute) {

    return;
}

void Game::GetWorldTime(char* nHour, char* nMinute) {

    return;
}

void Game::LetTimeGo(bool blet) {

    return;
}

void Game::SetWorldWeather(char nWeather) {

    return;
}

void Game::SetFrameLimiter(int nValue) {

    return;
}

void Game::SetMaxStats() {

    return;
}

void Game::DisableTrainTraffic() {

    return;
}

void Game::RefreshRenderer(float fX, float fY) {

    return;
}

void Game::RequestAnimation(const char* szFile) {

    return;
}

BOOL Game::IsAnimationLoaded(const char* szFile) {

    return BOOL{};
}

void Game::ReleaseAnimation(const char* szFile) {

    return;
}

void Game::DisplayGameText(const char* szText, int nType, int nSize) {

    return;
}

void Game::DeleteRacingCheckpoint() {

    return;
}

GTAREF Game::CreateMarker(int nIcon, CVector vPosition, int nColor, int nType) {

    return GTAREF{};
}

void Game::DeleteMarker(GTAREF handle) {

    return;
}

char Game::GetCurrentInterior() {

    return char{};
}

void Game::UpdateFarClippingPlane() {

    return;
}

void Game::IncreasePlayerMoney(int nInc) {

    return;
}

int Game::GetPlayerMoney() {

    return int{};
}

void Game::CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle) {

    return;
}

GTAREF Game::CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition) {

    return GTAREF{};
}

IDirect3DDevice9* Game::GetDevice() {

    return nullptr;
}

void Game::Restart() {

    return;
}

::CWeaponInfo* Game::GetWeaponInfo(int nWeapon, int nSkill) {

    return nullptr;
}

void Game::SetWorldGravity(float fValue) {

    return;
}

void Game::SetWantedLevel(char nLevel) {

    return;
}

void Game::SetNumberOfIntroTextLinesThisFrame(unsigned short nValue) {

    return;
}

void Game::DrawGangZone(float* pPos, char nColor) {

    return;
}

void Game::EnableZoneDisplaying(bool bEnable) {

    return;
}

void Game::EnableStuntBonus(bool bEnable) {

    return;
}

void Game::LoadScene(const char* szFile) {

    return;
}

int Game::GetUsedMemory() {

    return int{};
}

int Game::GetStreamingMemory() {

    return int{};
}

void Game::SetRequiredVehicleModels(unsigned char* pModelCount) {

    return;
}

int Game::GetTimer() {

    return int{};
}

void Game::LoadAnimationsAndModels() {

    return;
}

void Game::LoadCollisionFile(const char* szFile) {

    return;
}

void Game::LoadCullZone(const char* szLine) {

    return;
}

BOOL Game::UsingGamepad() {

    return BOOL{};
}

void Game::DisableAutoAiming() {

    return;
}

void Game::EnableHUD(BOOL bEnable) {

    return;
}

void Game::SetCheckpoint(CVector* pPos, CVector* pSize) {

    return;
}

void Game::CreateRacingCheckpoint() {

    return;
}

void Game::ProcessCheckpoints() {

    return;
}

void Game::ResetMoney() {

    return;
}

void Game::SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize) {

    return;
}

void Game::EnableRadar(BOOL bEnable) {

    return;
}

void* Game::GetWindowHandle() {

    return nullptr;
}

Audio* Game::GetAudio() {

    return nullptr;
}

Camera* Game::GetCamera() {

    return nullptr;
}

BOOL Game::DoesHeadMoves() {

    return BOOL{};
}

void Game::EnableClock(bool bEnable) {

    return;
}

void Game::Sleep(int elapsed, int fpsLimit) {

    return;
}

BOOL Game::RemovePed(CPed* pPed) {

    return BOOL{};
}

Vehicle* Game::CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren) {

    return nullptr;
}

void Game::ProcessInputEnabling() {

    return;
}

void Game::ProcessFrameLimiter() {

    return;
}

