#include "LabelPool.hpp"

MAKE_RET(BOOL) LabelPool::Delete(ID nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) LabelPool::Draw() {

    return true;
}

