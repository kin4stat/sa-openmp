#include "PlayerPool.hpp"

MAKE_RET(void) PlayerPool::UpdateLargestId() {

    return true;
}

MAKE_RET(void) PlayerPool::Process() {

    return true;
}

MAKE_RET(void) PlayerPool::Deactivate() {

    return true;
}

MAKE_RET(void) PlayerPool::ForceCollision() {

    return true;
}

MAKE_RET(void) PlayerPool::RestoreCollision() {

    return true;
}

MAKE_RET(BOOL) PlayerPool::Create(ID nId, const char* szName, BOOL bIsNPC) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(CRemotePlayer*) PlayerPool::GetPlayer(ID nId) {

    return kthook::return_value<CRemotePlayer*>::make_true();
}

MAKE_RET(BOOL) PlayerPool::IsDisconnected(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) PlayerPool::IsConnected(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) PlayerPool::SetLocalPlayerName(const char* szName) {

    return true;
}

MAKE_RET(void) PlayerPool::SetAt(ID nId, CPlayerInfo* pObject) {

    return true;
}

MAKE_RET(int) PlayerPool::GetScore(ID nId) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) PlayerPool::GetPing(ID nId) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) PlayerPool::GetLocalPlayerPing() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) PlayerPool::GetLocalPlayerScore() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(CLocalPlayer*) PlayerPool::GetLocalPlayer() {

    return kthook::return_value<CLocalPlayer*>::make_true();
}

