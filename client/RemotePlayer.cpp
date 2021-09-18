#include "RemotePlayer.hpp"

MAKE_RET(void) RemotePlayer::ProcessHead() {

    return true;
}

MAKE_RET(void) RemotePlayer::SetMarkerState(BOOL bState) {

    return true;
}

MAKE_RET(void) RemotePlayer::SetMarkerPosition(int x, int y, int z) {

    return true;
}

MAKE_RET(BOOL) RemotePlayer::SurfingOnVehicle() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) RemotePlayer::SurfingOnObject() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) RemotePlayer::ProcessSurfing() {

    return true;
}

MAKE_RET(void) RemotePlayer::OnEnterVehicle() {

    return true;
}

MAKE_RET(void) RemotePlayer::OnExitVehicle() {

    return true;
}

MAKE_RET(void) RemotePlayer::ProcessSpecialAction() {

    return true;
}

MAKE_RET(void) RemotePlayer::UpdateOnfootSpeedAndPosition() {

    return true;
}

MAKE_RET(void) RemotePlayer::UpdateOnfootRotation() {

    return true;
}

MAKE_RET(void) RemotePlayer::SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed) {

    return true;
}

MAKE_RET(void) RemotePlayer::UpdateIncarSpeedAndPosition() {

    return true;
}

MAKE_RET(void) RemotePlayer::UpdateIncarRotation() {

    return true;
}

MAKE_RET(void) RemotePlayer::SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed) {

    return true;
}

MAKE_RET(void) RemotePlayer::UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed) {

    return true;
}

MAKE_RET(void) RemotePlayer::ResetData() {

    return true;
}

MAKE_RET(float) RemotePlayer::GetDistanceToPlayer(CRemotePlayer* pPlayer) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(float) RemotePlayer::GetDistanceToLocalPlayer() {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(D3DCOLOR) RemotePlayer::GetColorAsRGBA() {

    return kthook::return_value<D3DCOLOR>::make_true();
}

MAKE_RET(D3DCOLOR) RemotePlayer::GetColorAsARGB() {

    return kthook::return_value<D3DCOLOR>::make_true();
}

MAKE_RET(void) RemotePlayer::EnterVehicle(ID nId, BOOL bPassenger) {

    return true;
}

MAKE_RET(void) RemotePlayer::ExitVehicle() {

    return true;
}

MAKE_RET(void) RemotePlayer::ChangeState(char nOld, char nNew) {

    return true;
}

MAKE_RET(int) RemotePlayer::GetStatus() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(void) RemotePlayer::Process() {

    return true;
}

MAKE_RET(void) RemotePlayer::Remove() {

    return true;
}

MAKE_RET(void) RemotePlayer::Kill() {

    return true;
}

MAKE_RET(void) RemotePlayer::Chat(const char* szText) {

    return true;
}

MAKE_RET(BOOL) RemotePlayer::DoesExist() {

    return kthook::return_value<BOOL>::make_true();
}

