#ifndef CONFIG_HPP_
#define CONFIG_HPP_

#include "common.hpp"

BEGIN_PACK

class Config {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&FindFirstFree)> FindFirstFree_hook{ GetAddress(0x654D0) }; FindFirstFree_hook.before.connect(FindFirstFree);
        static kthook::kthook_t<decltype(&GetIndex)> GetIndex_hook{ GetAddress(0x65520) }; GetIndex_hook.before.connect(GetIndex);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0x655C0) }; DoesExist_hook.before.connect(DoesExist);
        static kthook::kthook_t<decltype(&CreateEntry)> CreateEntry_hook{ GetAddress(0x655E0) }; CreateEntry_hook.before.connect(CreateEntry);
        static kthook::kthook_t<decltype(&GetIntValue)> GetIntValue_hook{ GetAddress(0x656A0) }; GetIntValue_hook.before.connect(GetIntValue);
        static kthook::kthook_t<decltype(&GetFloatValue)> GetFloatValue_hook{ GetAddress(0x65700) }; GetFloatValue_hook.before.connect(GetFloatValue);
        static kthook::kthook_t<decltype(&Free)> Free_hook{ GetAddress(0x65730) }; Free_hook.before.connect(Free);
        static kthook::kthook_t<decltype(&GetValueType)> GetValueType_hook{ GetAddress(0x65790) }; GetValueType_hook.before.connect(GetValueType);
        static kthook::kthook_t<decltype(&GetEntry)> GetEntry_hook{ GetAddress(0x657C0) }; GetEntry_hook.before.connect(GetEntry);
        static kthook::kthook_t<decltype(&GetType)> GetType_hook{ GetAddress(0x657F0) }; GetType_hook.before.connect(GetType);
        static kthook::kthook_t<decltype(&Save)> Save_hook{ GetAddress(0x65860) }; Save_hook.before.connect(Save);
        static kthook::kthook_t<decltype(&Write)> Write_hook{ GetAddress(0x65A70) }; Write_hook.before.connect(Write);
        static kthook::kthook_t<decltype(&Load)> Load_hook{ GetAddress(0x65B00) }; Load_hook.before.connect(Load);
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

    MAKE_RET(void) FindFirstFree();
    MAKE_RET(int) GetIndex(const char* szEntry);
    MAKE_RET(bool) DoesExist(const char* szEntry);
    MAKE_RET(int) CreateEntry(const char* szName);
    MAKE_RET(int) GetIntValue(const char* szEntry);
    MAKE_RET(float) GetFloatValue(const char* szEntry);
    MAKE_RET(BOOL) Free(const char* szEntry);
    MAKE_RET(int) GetValueType(const char* szEntry);
    MAKE_RET(ConfigEntry*) GetEntry(int nIndex);
    MAKE_RET(int) GetType(const char* szString);
    MAKE_RET(BOOL) Save();
    MAKE_RET(void) Write(const char* szEntry, char* szBuffer);
    MAKE_RET(BOOL) Load();
};

END_PACK

#endif // CONFIG_HPP_