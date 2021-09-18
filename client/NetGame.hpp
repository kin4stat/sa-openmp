#ifndef NETGAME_HPP_
#define NETGAME_HPP_

#include "common.hpp"

BEGIN_PACK

class NetGame {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetPickupPool)> GetPickupPool_hook{ GetAddress(0x8170) }; GetPickupPool_hook.before.connect(GetPickupPool);
        static kthook::kthook_t<decltype(&GetMenuPool)> GetMenuPool_hook{ GetAddress(0x8180) }; GetMenuPool_hook.before.connect(GetMenuPool);
        static kthook::kthook_t<decltype(&SetState)> SetState_hook{ GetAddress(0x8190) }; SetState_hook.before.connect(SetState);
        static kthook::kthook_t<decltype(&InitializePools)> InitializePools_hook{ GetAddress(0x81D0) }; InitializePools_hook.before.connect(InitializePools);
        static kthook::kthook_t<decltype(&InitialNotification)> InitialNotification_hook{ GetAddress(0x83F0) }; InitialNotification_hook.before.connect(InitialNotification);
        static kthook::kthook_t<decltype(&InitializeGameLogic)> InitializeGameLogic_hook{ GetAddress(0x8580) }; InitializeGameLogic_hook.before.connect(InitializeGameLogic);
        static kthook::kthook_t<decltype(&Connect)> Connect_hook{ GetAddress(0x85D0) }; Connect_hook.before.connect(Connect);
        static kthook::kthook_t<decltype(&SpawnScreen)> SpawnScreen_hook{ GetAddress(0x8640) }; SpawnScreen_hook.before.connect(SpawnScreen);
        static kthook::kthook_t<decltype(&Packet_RSAPublicKeyMismatch)> Packet_RSAPublicKeyMismatch_hook{ GetAddress(0x89E0) }; Packet_RSAPublicKeyMismatch_hook.before.connect(Packet_RSAPublicKeyMismatch);
        static kthook::kthook_t<decltype(&Packet_ConnectionBanned)> Packet_ConnectionBanned_hook{ GetAddress(0x8A00) }; Packet_ConnectionBanned_hook.before.connect(Packet_ConnectionBanned);
        static kthook::kthook_t<decltype(&Packet_ConnectionRequestAcepted)> Packet_ConnectionRequestAcepted_hook{ GetAddress(0x8A20) }; Packet_ConnectionRequestAcepted_hook.before.connect(Packet_ConnectionRequestAcepted);
        static kthook::kthook_t<decltype(&Packet_NoFreeIncomingConnections)> Packet_NoFreeIncomingConnections_hook{ GetAddress(0x8A40) }; Packet_NoFreeIncomingConnections_hook.before.connect(Packet_NoFreeIncomingConnections);
        static kthook::kthook_t<decltype(&Packet_DisconnectionNotification)> Packet_DisconnectionNotification_hook{ GetAddress(0x8A70) }; Packet_DisconnectionNotification_hook.before.connect(Packet_DisconnectionNotification);
        static kthook::kthook_t<decltype(&Packet_InvalidPassword)> Packet_InvalidPassword_hook{ GetAddress(0x8AB0) }; Packet_InvalidPassword_hook.before.connect(Packet_InvalidPassword);
        static kthook::kthook_t<decltype(&Packet_ConnectionAttemptFailed)> Packet_ConnectionAttemptFailed_hook{ GetAddress(0x8AF0) }; Packet_ConnectionAttemptFailed_hook.before.connect(Packet_ConnectionAttemptFailed);
        static kthook::kthook_t<decltype(&UpdatePlayers)> UpdatePlayers_hook{ GetAddress(0x8BA0) }; UpdatePlayers_hook.before.connect(UpdatePlayers);
        static kthook::kthook_t<decltype(&DeleteMarker)> DeleteMarker_hook{ GetAddress(0x8C40) }; DeleteMarker_hook.before.connect(DeleteMarker);
        static kthook::kthook_t<decltype(&ResetPlayerPool)> ResetPlayerPool_hook{ GetAddress(0x8C70) }; ResetPlayerPool_hook.before.connect(ResetPlayerPool);
        static kthook::kthook_t<decltype(&ResetVehiclePool)> ResetVehiclePool_hook{ GetAddress(0x8D10) }; ResetVehiclePool_hook.before.connect(ResetVehiclePool);
        static kthook::kthook_t<decltype(&ResetTextDrawPool)> ResetTextDrawPool_hook{ GetAddress(0x8DB0) }; ResetTextDrawPool_hook.before.connect(ResetTextDrawPool);
        static kthook::kthook_t<decltype(&ResetObjectPool)> ResetObjectPool_hook{ GetAddress(0x8E50) }; ResetObjectPool_hook.before.connect(ResetObjectPool);
        static kthook::kthook_t<decltype(&ResetGangZonePool)> ResetGangZonePool_hook{ GetAddress(0x8EF0) }; ResetGangZonePool_hook.before.connect(ResetGangZonePool);
        static kthook::kthook_t<decltype(&ResetPickupPool)> ResetPickupPool_hook{ GetAddress(0x8F90) }; ResetPickupPool_hook.before.connect(ResetPickupPool);
        static kthook::kthook_t<decltype(&ResetMenuPool)> ResetMenuPool_hook{ GetAddress(0x8FF0) }; ResetMenuPool_hook.before.connect(ResetMenuPool);
        static kthook::kthook_t<decltype(&ResetLabelPool)> ResetLabelPool_hook{ GetAddress(0x9080) }; ResetLabelPool_hook.before.connect(ResetLabelPool);
        static kthook::kthook_t<decltype(&ResetActorPool)> ResetActorPool_hook{ GetAddress(0x9120) }; ResetActorPool_hook.before.connect(ResetActorPool);
        static kthook::kthook_t<decltype(&Packet_UnoccupiedSync)> Packet_UnoccupiedSync_hook{ GetAddress(0x96D0) }; Packet_UnoccupiedSync_hook.before.connect(Packet_UnoccupiedSync);
        static kthook::kthook_t<decltype(&Packet_BulletSync)> Packet_BulletSync_hook{ GetAddress(0x97D0) }; Packet_BulletSync_hook.before.connect(Packet_BulletSync);
        static kthook::kthook_t<decltype(&Packet_AimSync)> Packet_AimSync_hook{ GetAddress(0x98D0) }; Packet_AimSync_hook.before.connect(Packet_AimSync);
        static kthook::kthook_t<decltype(&Packet_PassengerSync)> Packet_PassengerSync_hook{ GetAddress(0x99C0) }; Packet_PassengerSync_hook.before.connect(Packet_PassengerSync);
        static kthook::kthook_t<decltype(&Packet_TrailerSync)> Packet_TrailerSync_hook{ GetAddress(0x9AB0) }; Packet_TrailerSync_hook.before.connect(Packet_TrailerSync);
        static kthook::kthook_t<decltype(&Packet_MarkersSync)> Packet_MarkersSync_hook{ GetAddress(0x9BA0) }; Packet_MarkersSync_hook.before.connect(Packet_MarkersSync);
        static kthook::kthook_t<decltype(&Packet_AuthKey)> Packet_AuthKey_hook{ GetAddress(0x9D90) }; Packet_AuthKey_hook.before.connect(Packet_AuthKey);
        static kthook::kthook_t<decltype(&ResetMarkers)> ResetMarkers_hook{ GetAddress(0x9F50) }; ResetMarkers_hook.before.connect(ResetMarkers);
        static kthook::kthook_t<decltype(&CreateMarker)> CreateMarker_hook{ GetAddress(0x9F90) }; CreateMarker_hook.before.connect(CreateMarker);
        static kthook::kthook_t<decltype(&ResetPools)> ResetPools_hook{ GetAddress(0xA190) }; ResetPools_hook.before.connect(ResetPools);
        static kthook::kthook_t<decltype(&ShutdownForRestart)> ShutdownForRestart_hook{ GetAddress(0xA1E0) }; ShutdownForRestart_hook.before.connect(ShutdownForRestart);
        static kthook::kthook_t<decltype(&Packet_PlayerSync)> Packet_PlayerSync_hook{ GetAddress(0xA3E0) }; Packet_PlayerSync_hook.before.connect(Packet_PlayerSync);
        static kthook::kthook_t<decltype(&Packet_VehicleSync)> Packet_VehicleSync_hook{ GetAddress(0xA6B0) }; Packet_VehicleSync_hook.before.connect(Packet_VehicleSync);
        static kthook::kthook_t<decltype(&Packet_ConnectionLost)> Packet_ConnectionLost_hook{ GetAddress(0xA990) }; Packet_ConnectionLost_hook.before.connect(Packet_ConnectionLost);
        static kthook::kthook_t<decltype(&Packet_ConnectionSucceeded)> Packet_ConnectionSucceeded_hook{ GetAddress(0xAA20) }; Packet_ConnectionSucceeded_hook.before.connect(Packet_ConnectionSucceeded);
        static kthook::kthook_t<decltype(&UpdateNetwork)> UpdateNetwork_hook{ GetAddress(0xAF20) }; UpdateNetwork_hook.before.connect(UpdateNetwork);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0xB270) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&ProcessGameStuff)> ProcessGameStuff_hook{ GetAddress(0x87B0) }; ProcessGameStuff_hook.before.connect(ProcessGameStuff);
        static kthook::kthook_t<decltype(&GetPlayerPool)> GetPlayerPool_hook{ GetAddress(0x1160) }; GetPlayerPool_hook.before.connect(GetPlayerPool);
        static kthook::kthook_t<decltype(&GetObjectPool)> GetObjectPool_hook{ GetAddress(0x2DF0) }; GetObjectPool_hook.before.connect(GetObjectPool);
        static kthook::kthook_t<decltype(&GetActorPool)> GetActorPool_hook{ GetAddress(0x2E00) }; GetActorPool_hook.before.connect(GetActorPool);
        static kthook::kthook_t<decltype(&GetState)> GetState_hook{ GetAddress(0x2E10) }; GetState_hook.before.connect(GetState);
        static kthook::kthook_t<decltype(&LanMode)> LanMode_hook{ GetAddress(0x2E20) }; LanMode_hook.before.connect(LanMode);
        static kthook::kthook_t<decltype(&GetVehiclePool)> GetVehiclePool_hook{ GetAddress(0x1170) }; GetVehiclePool_hook.before.connect(GetVehiclePool);
        static kthook::kthook_t<decltype(&GetRakClient)> GetRakClient_hook{ GetAddress(0x1A40) }; GetRakClient_hook.before.connect(GetRakClient);
        static kthook::kthook_t<decltype(&GetCounter)> GetCounter_hook{ GetAddress(0x8570) }; GetCounter_hook.before.connect(GetCounter);
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
        CMenuPool*     m_pMenu;
        CActorPool*    m_pActor;
        CPlayerPool*   m_pPlayer;
        CVehiclePool*  m_pVehicle;
        CPickupPool*   m_pPickup;
        CObjectPool*   m_pObject;
        CGangZonePool* m_pGangZone;
        CLabelPool*    m_pLabel;
        CTextDrawPool* m_pTextDraw;
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

    static SAMPAPI_VAR TICK& RefLastPlayersUpdateRequest();

    
    NetGame(const char* szHostAddress, int nPort, const char* szNick, const char* szPass);
    ~NetGame();

    MAKE_RET(CPickupPool*) GetPickupPool();
    MAKE_RET(CMenuPool*) GetMenuPool();
    MAKE_RET(void) SetState(int nValue);
    MAKE_RET(void) InitializePools();
    MAKE_RET(void) InitialNotification();
    MAKE_RET(void) InitializeGameLogic();
    MAKE_RET(void) Connect();
    MAKE_RET(void) SpawnScreen();
    MAKE_RET(void) Packet_RSAPublicKeyMismatch(Packet* pPacket);
    MAKE_RET(void) Packet_ConnectionBanned(Packet* pPacket);
    MAKE_RET(void) Packet_ConnectionRequestAcepted(Packet* pPacket);
    MAKE_RET(void) Packet_NoFreeIncomingConnections(Packet* pPacket);
    MAKE_RET(void) Packet_DisconnectionNotification(Packet* pPacket);
    MAKE_RET(void) Packet_InvalidPassword(Packet* pPacket);
    MAKE_RET(void) Packet_ConnectionAttemptFailed(Packet* pPacket);
    MAKE_RET(void) UpdatePlayers();
    MAKE_RET(void) DeleteMarker(NUMBER nIndex);
    MAKE_RET(void) ResetPlayerPool();
    MAKE_RET(void) ResetVehiclePool();
    MAKE_RET(void) ResetTextDrawPool();
    MAKE_RET(void) ResetObjectPool();
    MAKE_RET(void) ResetGangZonePool();
    MAKE_RET(void) ResetPickupPool();
    MAKE_RET(void) ResetMenuPool();
    MAKE_RET(void) ResetLabelPool();
    MAKE_RET(void) ResetActorPool();
    MAKE_RET(void) Packet_UnoccupiedSync(Packet* pPacket);
    MAKE_RET(void) Packet_BulletSync(Packet* pPacket);
    MAKE_RET(void) Packet_AimSync(Packet* pPacket);
    MAKE_RET(void) Packet_PassengerSync(Packet* pPacket);
    MAKE_RET(void) Packet_TrailerSync(Packet* pPacket);
    MAKE_RET(void) Packet_MarkersSync(Packet* pPacket);
    MAKE_RET(void) Packet_AuthKey(Packet* pPacket);
    MAKE_RET(void) ResetMarkers();
    MAKE_RET(void) CreateMarker(NUMBER nIndex, CVector position, char nIcon, int nColor, int nType);
    MAKE_RET(void) ResetPools();
    MAKE_RET(void) ShutdownForRestart();
    MAKE_RET(void) Packet_PlayerSync(Packet* pPacket);
    MAKE_RET(void) Packet_VehicleSync(Packet* pPacket);
    MAKE_RET(void) Packet_ConnectionLost(Packet* pPacket);
    MAKE_RET(void) Packet_ConnectionSucceeded(Packet* pPacket);
    MAKE_RET(void) UpdateNetwork();
    MAKE_RET(void) Process();
    MAKE_RET(void) ProcessGameStuff();
    MAKE_RET(CPlayerPool*) GetPlayerPool();
    MAKE_RET(CObjectPool*) GetObjectPool();
    MAKE_RET(CActorPool*) GetActorPool();
    MAKE_RET(int) GetState();
    MAKE_RET(BOOL) LanMode();
    MAKE_RET(CVehiclePool*) GetVehiclePool();
    MAKE_RET(RakClientInterface*) GetRakClient();
    MAKE_RET(__int64) GetCounter();
};

END_PACK

#endif // NETGAME_HPP_