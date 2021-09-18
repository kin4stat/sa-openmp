#include "ObjectPool.hpp"

MAKE_RET(void) ObjectPool::UpdateLargestId() {

    return true;
}

MAKE_RET(int) ObjectPool::GetCount() {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) ObjectPool::Delete(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(BOOL) ObjectPool::Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) ObjectPool::Process() {

    return true;
}

MAKE_RET(void) ObjectPool::ConstructMaterials() {

    return true;
}

MAKE_RET(void) ObjectPool::ShutdownMaterials() {

    return true;
}

MAKE_RET(void) ObjectPool::Draw() {

    return true;
}

MAKE_RET(void) ObjectPool::DrawLast() {

    return true;
}

MAKE_RET(CObject*) ObjectPool::Get(ID nId) {

    return kthook::return_value<CObject*>::make_true();
}

