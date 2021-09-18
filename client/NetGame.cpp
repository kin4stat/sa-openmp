#include "NetGame.hpp"

NetGame::NetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {

}
MAKE_RET(CPickupPool*) NetGame::GetPickupPool() {

    return kthook::return_value<CPickupPool*>::make_true();
}

MAKE_RET(CMenuPool*) NetGame::GetMenuPool() {

    return kthook::return_value<CMenuPool*>::make_true();
}

MAKE_RET(void) NetGame::SetState(int nValue) {

    return true;
}

MAKE_RET(void) NetGame::InitializePools() {

    return true;
}

MAKE_RET(void) NetGame::InitialNotification() {

    return true;
}

MAKE_RET(void) NetGame::InitializeGameLogic() {

    return true;
}

MAKE_RET(void) NetGame::Connect() {

    return true;
}

MAKE_RET(void) NetGame::SpawnScreen() {

    return true;
}

MAKE_RET(void) NetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_ConnectionBanned(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_DisconnectionNotification(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_InvalidPassword(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::UpdatePlayers() {

    return true;
}

MAKE_RET(void) NetGame::DeleteMarker(NUMBER nIndex) {

    return true;
}

MAKE_RET(void) NetGame::ResetPlayerPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetVehiclePool() {

    return true;
}

MAKE_RET(void) NetGame::ResetTextDrawPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetObjectPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetGangZonePool() {

    return true;
}

MAKE_RET(void) NetGame::ResetPickupPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetMenuPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetLabelPool() {

    return true;
}

MAKE_RET(void) NetGame::ResetActorPool() {

    return true;
}

MAKE_RET(void) NetGame::Packet_UnoccupiedSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_BulletSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_AimSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_PassengerSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_TrailerSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_MarkersSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_AuthKey(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::ResetMarkers() {

    return true;
}

MAKE_RET(void) NetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {

    return true;
}

MAKE_RET(void) NetGame::ResetPools() {

    return true;
}

MAKE_RET(void) NetGame::ShutdownForRestart() {

    return true;
}

MAKE_RET(void) NetGame::Packet_PlayerSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_VehicleSync(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_ConnectionLost(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::Packet_ConnectionSucceeded(Packet* pPacket) {

    return true;
}

MAKE_RET(void) NetGame::UpdateNetwork() {

    return true;
}

MAKE_RET(void) NetGame::Process() {

    return true;
}

MAKE_RET(void) NetGame::ProcessGameStuff() {

    return true;
}

MAKE_RET(CPlayerPool*) NetGame::GetPlayerPool() {

    return kthook::return_value<CPlayerPool*>::make_true();
}

MAKE_RET(CObjectPool*) NetGame::GetObjectPool() {

    return kthook::return_value<CObjectPool*>::make_true();
}

MAKE_RET(CActorPool*) NetGame::GetActorPool() {

    return kthook::return_value<CActorPool*>::make_true();
}

MAKE_RET(int) NetGame::GetState() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) NetGame::LanMode() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(CVehiclePool*) NetGame::GetVehiclePool() {

    return kthook::return_value<CVehiclePool*>::make_true();
}

MAKE_RET(RakClientInterface*) NetGame::GetRakClient() {

    return kthook::return_value<RakClientInterface*>::make_true();
}

MAKE_RET(__int64) NetGame::GetCounter() {

    return kthook::return_value<__int64>::make_true();
}

