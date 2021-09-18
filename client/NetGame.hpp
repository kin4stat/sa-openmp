#ifndef NETGAME_HPP_
#define NETGAME_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "PlayerPool.hpp"
#include "VehiclePool.hpp"
#include "GangZonePool.hpp"
#include "PickupPool.hpp"
#include "LabelPool.hpp"
#include "MenuPool.hpp"
#include "TextDrawPool.hpp"
#include "ActorPool.hpp"
#include "ObjectPool.hpp"

struct Packet;
struct NetworkID;
class RakClientInterface;

BEGIN_PACK

enum MarkersMode {
    MARKERS_MODE_OFF,
    MARKERS_MODE_GLOBAL,
    MARKERS_MODE_STREAMED
};

class NetGame {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("NetGame", "GetPickupPool", GetAddress(0x8170), &NetGame::GetPickupPool);
        ReversibleHooks::Install("NetGame", "GetMenuPool", GetAddress(0x8180), &NetGame::GetMenuPool);
        ReversibleHooks::Install("NetGame", "SetState", GetAddress(0x8190), &NetGame::SetState);
        ReversibleHooks::Install("NetGame", "InitializePools", GetAddress(0x81D0), &NetGame::InitializePools);
        ReversibleHooks::Install("NetGame", "InitialNotification", GetAddress(0x83F0), &NetGame::InitialNotification);
        ReversibleHooks::Install("NetGame", "InitializeGameLogic", GetAddress(0x8580), &NetGame::InitializeGameLogic);
        ReversibleHooks::Install("NetGame", "Connect", GetAddress(0x85D0), &NetGame::Connect);
        ReversibleHooks::Install("NetGame", "SpawnScreen", GetAddress(0x8640), &NetGame::SpawnScreen);
        ReversibleHooks::Install("NetGame", "Packet_RSAPublicKeyMismatch", GetAddress(0x89E0), &NetGame::Packet_RSAPublicKeyMismatch);
        ReversibleHooks::Install("NetGame", "Packet_ConnectionBanned", GetAddress(0x8A00), &NetGame::Packet_ConnectionBanned);
        ReversibleHooks::Install("NetGame", "Packet_ConnectionRequestAcepted", GetAddress(0x8A20), &NetGame::Packet_ConnectionRequestAcepted);
        ReversibleHooks::Install("NetGame", "Packet_NoFreeIncomingConnections", GetAddress(0x8A40), &NetGame::Packet_NoFreeIncomingConnections);
        ReversibleHooks::Install("NetGame", "Packet_DisconnectionNotification", GetAddress(0x8A70), &NetGame::Packet_DisconnectionNotification);
        ReversibleHooks::Install("NetGame", "Packet_InvalidPassword", GetAddress(0x8AB0), &NetGame::Packet_InvalidPassword);
        ReversibleHooks::Install("NetGame", "Packet_ConnectionAttemptFailed", GetAddress(0x8AF0), &NetGame::Packet_ConnectionAttemptFailed);
        ReversibleHooks::Install("NetGame", "UpdatePlayers", GetAddress(0x8BA0), &NetGame::UpdatePlayers);
        ReversibleHooks::Install("NetGame", "DeleteMarker", GetAddress(0x8C40), &NetGame::DeleteMarker);
        ReversibleHooks::Install("NetGame", "ResetPlayerPool", GetAddress(0x8C70), &NetGame::ResetPlayerPool);
        ReversibleHooks::Install("NetGame", "ResetVehiclePool", GetAddress(0x8D10), &NetGame::ResetVehiclePool);
        ReversibleHooks::Install("NetGame", "ResetTextDrawPool", GetAddress(0x8DB0), &NetGame::ResetTextDrawPool);
        ReversibleHooks::Install("NetGame", "ResetObjectPool", GetAddress(0x8E50), &NetGame::ResetObjectPool);
        ReversibleHooks::Install("NetGame", "ResetGangZonePool", GetAddress(0x8EF0), &NetGame::ResetGangZonePool);
        ReversibleHooks::Install("NetGame", "ResetPickupPool", GetAddress(0x8F90), &NetGame::ResetPickupPool);
        ReversibleHooks::Install("NetGame", "ResetMenuPool", GetAddress(0x8FF0), &NetGame::ResetMenuPool);
        ReversibleHooks::Install("NetGame", "ResetLabelPool", GetAddress(0x9080), &NetGame::ResetLabelPool);
        ReversibleHooks::Install("NetGame", "ResetActorPool", GetAddress(0x9120), &NetGame::ResetActorPool);
        ReversibleHooks::Install("NetGame", "Packet_UnoccupiedSync", GetAddress(0x96D0), &NetGame::Packet_UnoccupiedSync);
        ReversibleHooks::Install("NetGame", "Packet_BulletSync", GetAddress(0x97D0), &NetGame::Packet_BulletSync);
        ReversibleHooks::Install("NetGame", "Packet_AimSync", GetAddress(0x98D0), &NetGame::Packet_AimSync);
        ReversibleHooks::Install("NetGame", "Packet_PassengerSync", GetAddress(0x99C0), &NetGame::Packet_PassengerSync);
        ReversibleHooks::Install("NetGame", "Packet_TrailerSync", GetAddress(0x9AB0), &NetGame::Packet_TrailerSync);
        ReversibleHooks::Install("NetGame", "Packet_MarkersSync", GetAddress(0x9BA0), &NetGame::Packet_MarkersSync);
        ReversibleHooks::Install("NetGame", "Packet_AuthKey", GetAddress(0x9D90), &NetGame::Packet_AuthKey);
        ReversibleHooks::Install("NetGame", "ResetMarkers", GetAddress(0x9F50), &NetGame::ResetMarkers);
        ReversibleHooks::Install("NetGame", "CreateMarker", GetAddress(0x9F90), &NetGame::CreateMarker);
        ReversibleHooks::Install("NetGame", "ResetPools", GetAddress(0xA190), &NetGame::ResetPools);
        ReversibleHooks::Install("NetGame", "ShutdownForRestart", GetAddress(0xA1E0), &NetGame::ShutdownForRestart);
        ReversibleHooks::Install("NetGame", "Packet_PlayerSync", GetAddress(0xA3E0), &NetGame::Packet_PlayerSync);
        ReversibleHooks::Install("NetGame", "Packet_VehicleSync", GetAddress(0xA6B0), &NetGame::Packet_VehicleSync);
        ReversibleHooks::Install("NetGame", "Packet_ConnectionLost", GetAddress(0xA990), &NetGame::Packet_ConnectionLost);
        ReversibleHooks::Install("NetGame", "Packet_ConnectionSucceeded", GetAddress(0xAA20), &NetGame::Packet_ConnectionSucceeded);
        ReversibleHooks::Install("NetGame", "UpdateNetwork", GetAddress(0xAF20), &NetGame::UpdateNetwork);
        ReversibleHooks::Install("NetGame", "Process", GetAddress(0xB270), &NetGame::Process);
        ReversibleHooks::Install("NetGame", "ProcessGameStuff", GetAddress(0x87B0), &NetGame::ProcessGameStuff);
        ReversibleHooks::Install("NetGame", "GetPlayerPool", GetAddress(0x1160), &NetGame::GetPlayerPool);
        ReversibleHooks::Install("NetGame", "GetObjectPool", GetAddress(0x2DF0), &NetGame::GetObjectPool);
        ReversibleHooks::Install("NetGame", "GetActorPool", GetAddress(0x2E00), &NetGame::GetActorPool);
        ReversibleHooks::Install("NetGame", "GetState", GetAddress(0x2E10), &NetGame::GetState);
        ReversibleHooks::Install("NetGame", "LanMode", GetAddress(0x2E20), &NetGame::LanMode);
        ReversibleHooks::Install("NetGame", "GetVehiclePool", GetAddress(0x1170), &NetGame::GetVehiclePool);
        ReversibleHooks::Install("NetGame", "GetRakClient", GetAddress(0x1A40), &NetGame::GetRakClient);
        ReversibleHooks::Install("NetGame", "GetCounter", GetAddress(0x8570), &NetGame::GetCounter);
    }


    enum GameMode {
        GAME_MODE_WAITCONNECT = 0x1,
        GAME_MODE_CONNECTING = 0x2,
        GAME_MODE_CONNECTED = 0x5,
        GAME_MODE_WAITJOIN = 0x6,
        GAME_MODE_RESTARTING = 0xB
    };
    enum {
        NETMODE_STATS_UPDATE_DELAY = 1000,
        NETMODE_INCAR_SENDRATE = 30,  // passenger/trailer/incar/unoccupied
        NETMODE_ONFOOT_SENDRATE = 30, // onfoot/unoccupied
        NETMODE_FIRING_SENDRATE = 30,
        LANMODE_INCAR_SENDRATE = 15,
        LANMODE_ONFOOT_SENDRATE = 15,
        NETMODE_SEND_MULTIPLIER = 2,
        NETMODE_AIM_UPDATE_DELAY = 500,
        NETMODE_HEAD_UPDATE_DELAY = 1000,
        NETMODE_TARGET_UPDATE_DELAY = 100,
        NETMODE_PLAYERS_UPDATE_DELAY = 3000,
    };

    struct Pools {
        MenuPool*     m_pMenu;
        ActorPool*    m_pActor;
        PlayerPool*   m_pPlayer;
        VehiclePool*  m_pVehicle;
        PickupPool*   m_pPickup;
        ObjectPool*   m_pObject;
        GangZonePool* m_pGangZone;
        LabelPool*    m_pLabel;
        TextDrawPool* m_pTextDraw;
    };

    struct Settings {
        bool          m_bUseCJWalk;
        unsigned int  m_nDeadDropsMoney;
        float         m_fWorldBoundaries[4];
        bool          m_bAllowWeapons;
        float         m_fGravity;
        bool          m_bEnterExit;
        BOOL          m_bVehicleFriendlyFire;
        bool          m_bHoldTime;
        bool          m_bInstagib;
        bool          m_bZoneNames;
        bool          m_bFriendlyFire;
        BOOL          m_bClassesAvailable;
        float         m_fNameTagsDrawDist;
        bool          m_bManualVehicleEngineAndLight;
        unsigned char m_nWorldTimeHour;
        unsigned char m_nWorldTimeMinute;
        unsigned char m_nWeather;
        bool          m_bNoNametagsBehindWalls;
        int           m_nPlayerMarkersMode;
        float         m_fChatRadius;
        bool          m_bNameTags;
        bool          m_bLtdChatRadius;
    };

    char                pad_0[44];
    RakClientInterface* m_pRakClient;
    char                m_szHostAddress[257];
    char                m_szHostname[257];
    bool                m_bDisableCollision;
    bool                m_bUpdateCameraTarget;
    bool                m_bNametagStatus;
    int                 m_nPort;
    BOOL                m_bLanMode;
    GTAREF              m_aMapIcons[100];
    int                 m_nGameState;
    TICK                m_lastConnectAttempt;
    Settings*           m_pSettings;
    char                pad_2[5];
    Pools*              m_pPools;

    static TICK& RefLastPlayersUpdateRequest();

    
    NetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass);
    ~NetGame();

    PickupPool* GetPickupPool();
    MenuPool* GetMenuPool();
    void SetState(int nValue);
    void InitializePools();
    void InitialNotification();
    void InitializeGameLogic();
    void Connect();
    void SpawnScreen();
    void Packet_RSAPublicKeyMismatch(Packet* pPacket);
    void Packet_ConnectionBanned(Packet* pPacket);
    void Packet_ConnectionRequestAcepted(Packet* pPacket);
    void Packet_NoFreeIncomingConnections(Packet* pPacket);
    void Packet_DisconnectionNotification(Packet* pPacket);
    void Packet_InvalidPassword(Packet* pPacket);
    void Packet_ConnectionAttemptFailed(Packet* pPacket);
    void UpdatePlayers();
    void DeleteMarker(NUMBER nIndex);
    void ResetPlayerPool();
    void ResetVehiclePool();
    void ResetTextDrawPool();
    void ResetObjectPool();
    void ResetGangZonePool();
    void ResetPickupPool();
    void ResetMenuPool();
    void ResetLabelPool();
    void ResetActorPool();
    void Packet_UnoccupiedSync(Packet* pPacket);
    void Packet_BulletSync(Packet* pPacket);
    void Packet_AimSync(Packet* pPacket);
    void Packet_PassengerSync(Packet* pPacket);
    void Packet_TrailerSync(Packet* pPacket);
    void Packet_MarkersSync(Packet* pPacket);
    void Packet_AuthKey(Packet* pPacket);
    void ResetMarkers();
    void CreateMarker(NUMBER nIndex, Vector position, char nIcon, int nColor, int nType);
    void ResetPools();
    void ShutdownForRestart();
    void Packet_PlayerSync(Packet* pPacket);
    void Packet_VehicleSync(Packet* pPacket);
    void Packet_ConnectionLost(Packet* pPacket);
    void Packet_ConnectionSucceeded(Packet* pPacket);
    void UpdateNetwork();
    void Process();
    void ProcessGameStuff();
    PlayerPool* GetPlayerPool();
    ObjectPool* GetObjectPool();
    ActorPool* GetActorPool();
    int GetState();
    BOOL LanMode();
    VehiclePool* GetVehiclePool();
    RakClientInterface* GetRakClient();
    __int64 GetCounter();
};

END_PACK

#endif // NETGAME_HPP_