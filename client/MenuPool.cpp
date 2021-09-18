#include "MenuPool.hpp"

MAKE_RET(BOOL) MenuPool::Delete(NUMBER nId) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) MenuPool::Show(NUMBER nId) {

    return true;
}

MAKE_RET(void) MenuPool::Hide(NUMBER nId) {

    return true;
}

MAKE_RET(char*) MenuPool::GetTextPointer(const char* szName) {

    return kthook::return_value<char*>::make_true();
}

MAKE_RET(void) MenuPool::Process() {

    return true;
}

