#ifndef PLAYERPOOL_HPP_
#define PLAYERPOOL_HPP_

#include "common.hpp"
#include "PlayerInfo.hpp"
#include "LocalPlayer.hpp"

BEGIN_PACK

class PlayerPool {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("PlayerPool", "UpdateLargestId", GetAddress(0x13400), &PlayerPool::UpdateLargestId);
        ReversibleHooks::Install("PlayerPool", "Process", GetAddress(0x13470), &PlayerPool::Process);
        ReversibleHooks::Install("PlayerPool", "Deactivate", GetAddress(0x13790), &PlayerPool::Deactivate);
        ReversibleHooks::Install("PlayerPool", "ForceCollision", GetAddress(0x138C0), &PlayerPool::ForceCollision);
        ReversibleHooks::Install("PlayerPool", "RestoreCollision", GetAddress(0x13930), &PlayerPool::RestoreCollision);
        ReversibleHooks::Install("PlayerPool", "Create", GetAddress(0x13E80), &PlayerPool::Create);
        ReversibleHooks::Install("PlayerPool", "GetPlayer", GetAddress(0x10F0), &PlayerPool::GetPlayer);
        ReversibleHooks::Install("PlayerPool", "IsDisconnected", GetAddress(0x10D0), &PlayerPool::IsDisconnected);
        ReversibleHooks::Install("PlayerPool", "IsConnected", GetAddress(0x10B0), &PlayerPool::IsConnected);
        ReversibleHooks::Install("PlayerPool", "SetLocalPlayerName", GetAddress(0xB5C0), &PlayerPool::SetLocalPlayerName);
        ReversibleHooks::Install("PlayerPool", "SetAt", GetAddress(0x133E0), &PlayerPool::SetAt);
        ReversibleHooks::Install("PlayerPool", "GetScore", GetAddress(0x6E0E0), &PlayerPool::GetScore);
        ReversibleHooks::Install("PlayerPool", "GetPing", GetAddress(0x6E110), &PlayerPool::GetPing);
        ReversibleHooks::Install("PlayerPool", "GetLocalPlayerPing", GetAddress(0x6E150), &PlayerPool::GetLocalPlayerPing);
        ReversibleHooks::Install("PlayerPool", "GetLocalPlayerScore", GetAddress(0x6E140), &PlayerPool::GetLocalPlayerScore);
        ReversibleHooks::Install("PlayerPool", "GetLocalPlayer", GetAddress(0x1A30), &PlayerPool::GetLocalPlayer);
    }


    enum { MAX_PLAYERS = 1004 };

    int          m_nLargestId;
    PlayerInfo* m_pObject[MAX_PLAYERS];
    BOOL         m_bNotEmpty[MAX_PLAYERS];
    BOOL         m_bPrevCollisionFlag[MAX_PLAYERS];

    struct {
        int m_nPing;
        int m_nScore;
        ID  m_nId;
#ifndef _DEBUG
    private:
        int __align;

    public:
#endif
        std::string   m_szName;
        LocalPlayer* m_pObject;
    } m_localInfo;

    
    PlayerPool();
    ~PlayerPool();

    void UpdateLargestId();
    void Process();
    void Deactivate();
    void ForceCollision();
    void RestoreCollision();
    BOOL Create(ID nId, const char* szName, BOOL bIsNPC);
    RemotePlayer* GetPlayer(ID nId);
    BOOL IsDisconnected(ID nId);
    BOOL IsConnected(ID nId);
    void SetLocalPlayerName(const char* szName);
    void SetAt(ID nId, PlayerInfo* pObject);
    int GetScore(ID nId);
    int GetPing(ID nId);
    int GetLocalPlayerPing();
    int GetLocalPlayerScore();
    LocalPlayer* GetLocalPlayer();
};

END_PACK

#endif // PLAYERPOOL_HPP_