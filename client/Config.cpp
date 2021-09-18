#include "Config.hpp"

Config::Config(const char* szFile) {

}
MAKE_RET(void) Config::FindFirstFree() {

    return true;
}

MAKE_RET(int) Config::GetIndex(const char* szEntry) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(bool) Config::DoesExist(const char* szEntry) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(int) Config::CreateEntry(const char* szName) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(int) Config::GetIntValue(const char* szEntry) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(float) Config::GetFloatValue(const char* szEntry) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(BOOL) Config::Free(const char* szEntry) {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(int) Config::GetValueType(const char* szEntry) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(ConfigEntry*) Config::GetEntry(int nIndex) {

    return kthook::return_value<ConfigEntry*>::make_true();
}

MAKE_RET(int) Config::GetType(const char* szString) {

    return kthook::return_value<int>::make_true();
}

MAKE_RET(BOOL) Config::Save() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(void) Config::Write(const char* szEntry, char* szBuffer) {

    return true;
}

MAKE_RET(BOOL) Config::Load() {

    return kthook::return_value<BOOL>::make_true();
}

