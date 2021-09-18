#ifndef CONFIG_HPP_
#define CONFIG_HPP_

#include "common.hpp"

BEGIN_PACK

class Config {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Config", "FindFirstFree", GetAddress(0x654D0), &Config::FindFirstFree);
        ReversibleHooks::Install("Config", "GetIndex", GetAddress(0x65520), &Config::GetIndex);
        ReversibleHooks::Install("Config", "DoesExist", GetAddress(0x655C0), &Config::DoesExist);
        ReversibleHooks::Install("Config", "CreateEntry", GetAddress(0x655E0), &Config::CreateEntry);
        ReversibleHooks::Install("Config", "GetIntValue", GetAddress(0x656A0), &Config::GetIntValue);
        ReversibleHooks::Install("Config", "GetFloatValue", GetAddress(0x65700), &Config::GetFloatValue);
        ReversibleHooks::Install("Config", "Free", GetAddress(0x65730), &Config::Free);
        ReversibleHooks::Install("Config", "GetValueType", GetAddress(0x65790), &Config::GetValueType);
        ReversibleHooks::Install("Config", "GetEntry", GetAddress(0x657C0), &Config::GetEntry);
        ReversibleHooks::Install("Config", "GetType", GetAddress(0x657F0), &Config::GetType);
        ReversibleHooks::Install("Config", "Save", GetAddress(0x65860), &Config::Save);
        ReversibleHooks::Install("Config", "Write", GetAddress(0x65A70), &Config::Write);
        ReversibleHooks::Install("Config", "Load", GetAddress(0x65B00), &Config::Load);
    }


    enum {
        MAX_ENTRIES = 512,
        MAX_ENTRY_NAME = 40,
    };
    enum ValueType {
        VALUE_TYPE_NONE,
        VALUE_TYPE_INT,
        VALUE_TYPE_STRING,
        VALUE_TYPE_FLOAT
    };

    struct ConfigEntry {
        char  m_szName[MAX_ENTRY_NAME + 1];
        BOOL  m_bReadOnly; // maybe
        int   m_nType;
        int   m_nValue;
        float m_fValue;
        char* m_szValue;
    };

    ConfigEntry m_entry[MAX_ENTRIES];
    BOOL        m_bNotEmpty[MAX_ENTRIES]; // map
    char        m_szFilename[261];
    int         m_nFirstFree;

    
    Config(const char* szFile);
    ~Config();

    void FindFirstFree();
    int GetIndex(const char* szEntry);
    bool DoesExist(const char* szEntry);
    int CreateEntry(const char* szName);
    int GetIntValue(const char* szEntry);
    float GetFloatValue(const char* szEntry);
    BOOL Free(const char* szEntry);
    int GetValueType(const char* szEntry);
    ConfigEntry* GetEntry(int nIndex);
    int GetType(const char* szString);
    BOOL Save();
    void Write(const char* szEntry, char* szBuffer);
    BOOL Load();
};

END_PACK

#endif // CONFIG_HPP_