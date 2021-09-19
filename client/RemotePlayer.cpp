#include "RemotePlayer.hpp"

RemotePlayer::RemotePlayer() {

}
void RemotePlayer::ProcessHead() {

    return;
}

void RemotePlayer::SetMarkerState(BOOL bState) {

    return;
}

void RemotePlayer::SetMarkerPosition(int x, int y, int z) {

    return;
}

BOOL RemotePlayer::SurfingOnVehicle() {

    return BOOL{};
}

BOOL RemotePlayer::SurfingOnObject() {

    return BOOL{};
}

void RemotePlayer::ProcessSurfing() {

    return;
}

void RemotePlayer::OnEnterVehicle() {

    return;
}

void RemotePlayer::OnExitVehicle() {

    return;
}

void RemotePlayer::ProcessSpecialAction() {

    return;
}

void RemotePlayer::UpdateOnfootSpeedAndPosition() {

    return;
}

void RemotePlayer::UpdateOnfootRotation() {

    return;
}

void RemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {

    return;
}

void RemotePlayer::UpdateIncarSpeedAndPosition() {

    return;
}

void RemotePlayer::UpdateIncarRotation() {

    return;
}

void RemotePlayer::SetIncarTargetSpeedAndPosition(Matrix* pMatrix, CVector* pPosition, CVector* pSpeed) {

    return;
}

void RemotePlayer::UpdateTrain(Matrix* pMatrix, CVector* pSpeed, float fSpeed) {

    return;
}

void RemotePlayer::ResetData() {

    return;
}

float RemotePlayer::GetDistanceToPlayer(RemotePlayer* pPlayer) {

    return float{};
}

float RemotePlayer::GetDistanceToLocalPlayer() {

    return float{};
}

D3DCOLOR RemotePlayer::GetColorAsRGBA() {

    return D3DCOLOR{};
}

D3DCOLOR RemotePlayer::GetColorAsARGB() {

    return D3DCOLOR{};
}

void RemotePlayer::EnterVehicle(ID nId, BOOL bPassenger) {

    return;
}

void RemotePlayer::ExitVehicle() {

    return;
}

void RemotePlayer::ChangeState(char nOld, char nNew) {

    return;
}

int RemotePlayer::GetStatus() {

    return int{};
}

void RemotePlayer::Process() {

    return;
}

void RemotePlayer::Remove() {

    return;
}

void RemotePlayer::Kill() {

    return;
}

void RemotePlayer::Chat(const char* szText) {

    return;
}

BOOL RemotePlayer::DoesExist() {

    return BOOL{};
}

