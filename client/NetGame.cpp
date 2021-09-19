#include "NetGame.hpp"

NetGame::NetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass) {

}
PickupPool* NetGame::GetPickupPool() {

    return nullptr;
}

MenuPool* NetGame::GetMenuPool() {

    return nullptr;
}

void NetGame::SetState(int nValue) {

    return;
}

void NetGame::InitializePools() {

    return;
}

void NetGame::InitialNotification() {

    return;
}

void NetGame::InitializeGameLogic() {

    return;
}

void NetGame::Connect() {

    return;
}

void NetGame::SpawnScreen() {

    return;
}

void NetGame::Packet_RSAPublicKeyMismatch(Packet* pPacket) {

    return;
}

void NetGame::Packet_ConnectionBanned(Packet* pPacket) {

    return;
}

void NetGame::Packet_ConnectionRequestAcepted(Packet* pPacket) {

    return;
}

void NetGame::Packet_NoFreeIncomingConnections(Packet* pPacket) {

    return;
}

void NetGame::Packet_DisconnectionNotification(Packet* pPacket) {

    return;
}

void NetGame::Packet_InvalidPassword(Packet* pPacket) {

    return;
}

void NetGame::Packet_ConnectionAttemptFailed(Packet* pPacket) {

    return;
}

void NetGame::UpdatePlayers() {

    return;
}

void NetGame::DeleteMarker(NUMBER nIndex) {

    return;
}

void NetGame::ResetPlayerPool() {

    return;
}

void NetGame::ResetVehiclePool() {

    return;
}

void NetGame::ResetTextDrawPool() {

    return;
}

void NetGame::ResetObjectPool() {

    return;
}

void NetGame::ResetGangZonePool() {

    return;
}

void NetGame::ResetPickupPool() {

    return;
}

void NetGame::ResetMenuPool() {

    return;
}

void NetGame::ResetLabelPool() {

    return;
}

void NetGame::ResetActorPool() {

    return;
}

void NetGame::Packet_UnoccupiedSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_BulletSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_AimSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_PassengerSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_TrailerSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_MarkersSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_AuthKey(Packet* pPacket) {

    return;
}

void NetGame::ResetMarkers() {

    return;
}

void NetGame::CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType) {

    return;
}

void NetGame::ResetPools() {

    return;
}

void NetGame::ShutdownForRestart() {

    return;
}

void NetGame::Packet_PlayerSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_VehicleSync(Packet* pPacket) {

    return;
}

void NetGame::Packet_ConnectionLost(Packet* pPacket) {

    return;
}

void NetGame::Packet_ConnectionSucceeded(Packet* pPacket) {

    return;
}

void NetGame::UpdateNetwork() {

    return;
}

void NetGame::Process() {

    return;
}

void NetGame::ProcessGameStuff() {

    return;
}

PlayerPool* NetGame::GetPlayerPool() {

    return nullptr;
}

ObjectPool* NetGame::GetObjectPool() {

    return nullptr;
}

ActorPool* NetGame::GetActorPool() {

    return nullptr;
}

int NetGame::GetState() {

    return int{};
}

BOOL NetGame::LanMode() {

    return BOOL{};
}

VehiclePool* NetGame::GetVehiclePool() {

    return nullptr;
}

RakClientInterface* NetGame::GetRakClient() {

    return nullptr;
}

__int64 NetGame::GetCounter() {

    return __int64{};
}

