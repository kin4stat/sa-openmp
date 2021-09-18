#include "ActorPool.hpp"

MAKE_RET(CActor*) ActorPool::Get(ID nId) {

    return kthook::return_value<CActor*>::make_true();
}

MAKE_RET(BOOL) ActorPool::DoesExist(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) ActorPool::UpdateLargestId() {

    return true;
}

MAKE_RET(BOOL) ActorPool::Delete(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) ActorPool::Create(ActorInfo* pInfo) {

    return kthook::return_value<BOOL>::make_true();
}

