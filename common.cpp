#include "common.hpp"
#include <Windows.h>

unsigned long GetBase() {
    static auto handle = reinterpret_cast<unsigned long>(GetModuleHandleA("samp.dll"));
    return handle;
}