#include "Config.hpp"

Config::Config(const char* szFile) {

}
void Config::FindFirstFree() {

    return;
}

int Config::GetIndex(const char* szEntry) {

    return int{};
}

bool Config::DoesExist(const char* szEntry) {

    return bool{};
}

int Config::CreateEntry(const char* szName) {

    return int{};
}

int Config::GetIntValue(const char* szEntry) {

    return int{};
}

float Config::GetFloatValue(const char* szEntry) {

    return float{};
}

BOOL Config::Free(const char* szEntry) {

    return BOOL{};
}

int Config::GetValueType(const char* szEntry) {

    return int{};
}

Config::ConfigEntry* Config::GetEntry(int nIndex) {

    return nullptr;
}

int Config::GetType(const char* szString) {

    return int{};
}

BOOL Config::Save() {

    return BOOL{};
}

void Config::Write(const char* szEntry, char* szBuffer) {

    return;
}

BOOL Config::Load() {

    return BOOL{};
}

