#ifndef PLAYERINFO_HPP_
#define PLAYERINFO_HPP_

#include "common.hpp"

BEGIN_PACK

class PlayerInfo {
public:
    static void InjectHooks() {
    }


    CRemotePlayer* m_pPlayer;
    int            m_nPing;
#ifndef _DEBUG
private:
    int __aling;

public:
#endif
    std::string m_szNick;
    int         m_nScore;
    BOOL        m_bIsNPC;

    
    PlayerInfo(const char* szName, BOOL bIsNPC);
    ~PlayerInfo();

};

END_PACK

#endif // PLAYERINFO_HPP_