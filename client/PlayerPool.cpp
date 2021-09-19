#include "PlayerPool.hpp"

PlayerPool::PlayerPool() {

}
void PlayerPool::UpdateLargestId() {

    return;
}

void PlayerPool::Process() {

    return;
}

void PlayerPool::Deactivate() {

    return;
}

void PlayerPool::ForceCollision() {

    return;
}

void PlayerPool::RestoreCollision() {

    return;
}

BOOL PlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {

    return BOOL{};
}

RemotePlayer* PlayerPool::GetPlayer(ID nId) {

    return nullptr;
}

BOOL PlayerPool::IsDisconnected(ID nId) {

    return BOOL{};
}

BOOL PlayerPool::IsConnected(ID nId) {

    return BOOL{};
}

void PlayerPool::SetLocalPlayerName(const char* szName) {

    return;
}

void PlayerPool::SetAt(ID nId, PlayerInfo* pObject) {

    return;
}

int PlayerPool::GetScore(ID nId) {

    return int{};
}

int PlayerPool::GetPing(ID nId) {

    return int{};
}

int PlayerPool::GetLocalPlayerPing() {

    return int{};
}

int PlayerPool::GetLocalPlayerScore() {

    return int{};
}

LocalPlayer* PlayerPool::GetLocalPlayer() {

    return nullptr;
}

