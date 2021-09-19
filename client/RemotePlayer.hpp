#ifndef REMOTEPLAYER_HPP_
#define REMOTEPLAYER_HPP_

#include "common.hpp"
#include "Ped.hpp"
#include "Matrix.hpp"
#include "Synchronization.hpp"
#include "Vehicle.hpp"
#include "Animation.hpp"

#include "CVector.h"

BEGIN_PACK

class RemotePlayer {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("RemotePlayer", "ProcessHead", GetAddress(0x13FD0), &RemotePlayer::ProcessHead);
        ReversibleHooks::Install("RemotePlayer", "SetMarkerState", GetAddress(0x14120), &RemotePlayer::SetMarkerState);
        ReversibleHooks::Install("RemotePlayer", "SetMarkerPosition", GetAddress(0x14160), &RemotePlayer::SetMarkerPosition);
        ReversibleHooks::Install("RemotePlayer", "SurfingOnVehicle", GetAddress(0x14200), &RemotePlayer::SurfingOnVehicle);
        ReversibleHooks::Install("RemotePlayer", "SurfingOnObject", GetAddress(0x14230), &RemotePlayer::SurfingOnObject);
        ReversibleHooks::Install("RemotePlayer", "ProcessSurfing", GetAddress(0x14260), &RemotePlayer::ProcessSurfing);
        ReversibleHooks::Install("RemotePlayer", "OnEnterVehicle", GetAddress(0x14410), &RemotePlayer::OnEnterVehicle);
        ReversibleHooks::Install("RemotePlayer", "OnExitVehicle", GetAddress(0x144E0), &RemotePlayer::OnExitVehicle);
        ReversibleHooks::Install("RemotePlayer", "ProcessSpecialAction", GetAddress(0x14530), &RemotePlayer::ProcessSpecialAction);
        ReversibleHooks::Install("RemotePlayer", "UpdateOnfootSpeedAndPosition", GetAddress(0x14780), &RemotePlayer::UpdateOnfootSpeedAndPosition);
        ReversibleHooks::Install("RemotePlayer", "UpdateOnfootRotation", GetAddress(0x14B10), &RemotePlayer::UpdateOnfootRotation);
        ReversibleHooks::Install("RemotePlayer", "SetOnfootTargetSpeedAndPosition", GetAddress(0x14BE0), &RemotePlayer::SetOnfootTargetSpeedAndPosition);
        ReversibleHooks::Install("RemotePlayer", "UpdateIncarSpeedAndPosition", GetAddress(0x14C50), &RemotePlayer::UpdateIncarSpeedAndPosition);
        ReversibleHooks::Install("RemotePlayer", "UpdateIncarRotation", GetAddress(0x14F50), &RemotePlayer::UpdateIncarRotation);
        ReversibleHooks::Install("RemotePlayer", "SetIncarTargetSpeedAndPosition", GetAddress(0x150C0), &RemotePlayer::SetIncarTargetSpeedAndPosition);
        ReversibleHooks::Install("RemotePlayer", "UpdateTrain", GetAddress(0x15130), &RemotePlayer::UpdateTrain);
        ReversibleHooks::Install("RemotePlayer", "ResetData", GetAddress(0x15A50), &RemotePlayer::ResetData);
        ReversibleHooks::Install("RemotePlayer", "GetDistanceToPlayer", GetAddress(0x15B40), &RemotePlayer::GetDistanceToPlayer);
        ReversibleHooks::Install("RemotePlayer", "GetDistanceToLocalPlayer", GetAddress(0x15BB0), &RemotePlayer::GetDistanceToLocalPlayer);
        ReversibleHooks::Install("RemotePlayer", "GetColorAsRGBA", GetAddress(0x15C00), &RemotePlayer::GetColorAsRGBA);
        ReversibleHooks::Install("RemotePlayer", "GetColorAsARGB", GetAddress(0x15C10), &RemotePlayer::GetColorAsARGB);
        ReversibleHooks::Install("RemotePlayer", "EnterVehicle", GetAddress(0x15C30), &RemotePlayer::EnterVehicle);
        ReversibleHooks::Install("RemotePlayer", "ExitVehicle", GetAddress(0x15CC0), &RemotePlayer::ExitVehicle);
        ReversibleHooks::Install("RemotePlayer", "ChangeState", GetAddress(0x15CF0), &RemotePlayer::ChangeState);
        ReversibleHooks::Install("RemotePlayer", "GetStatus", GetAddress(0x15DB0), &RemotePlayer::GetStatus);
        ReversibleHooks::Install("RemotePlayer", "Process", GetAddress(0x16110), &RemotePlayer::Process);
        ReversibleHooks::Install("RemotePlayer", "Remove", GetAddress(0x16E70), &RemotePlayer::Remove);
        ReversibleHooks::Install("RemotePlayer", "Kill", GetAddress(0x16EB0), &RemotePlayer::Kill);
        ReversibleHooks::Install("RemotePlayer", "Chat", GetAddress(0x16F60), &RemotePlayer::Chat);
        ReversibleHooks::Install("RemotePlayer", "DoesExist", GetAddress(0x1080), &RemotePlayer::DoesExist);
    }


    enum PlayerState {
        PLAYER_STATE_NONE,
        PLAYER_STATE_ONFOOT = 17,
        PLAYER_STATE_DRIVER = 19,
        PLAYER_STATE_PASSENGER = 18,
        PLAYER_STATE_WASTED = 32,
        PLAYER_STATE_SPAWNED = 33,
    };
    enum UpdateType {
        UPDATE_TYPE_NONE,
        UPDATE_TYPE_ONFOOT = 16,
        UPDATE_TYPE_INCAR = 17,
        UPDATE_TYPE_PASSENGER = 18,
    };
    enum PlayerStatus { PLAYER_STATUS_TIMEOUT = 2 };

    Ped*                          m_pPed;
    Vehicle*                      m_pVehicle;
    ID                             m_nId;
    ID                             m_nVehicleId;
    int                            field_1;
    BOOL                           m_bDrawLabels;
    BOOL                           m_bHasJetpack;
    unsigned char                  m_nSpecialAction;
    Synchronization::IncarData     m_incarData;
    Synchronization::TrailerData   m_trailerData;
    Synchronization::AimData       m_aimData;
    Synchronization::PassengerData m_passengerData;
    Synchronization::OnfootData    m_onfootData;
    unsigned char                  m_nTeam;
    unsigned char                  m_nState;
    unsigned char                  m_nSeatId;
    int                            field_3;
    BOOL                           m_bPassengerDriveBy;
    CVector                        m_onfootTargetPosition;
    CVector                        m_onfootTargetSpeed;
    CVector                        m_incarTargetPosition;
    CVector                        m_incarTargetSpeed;
    char                           pad_1[76];
    CVector                        m_positionDifference;

    struct {
        float   real;
        CVector imag;
    } m_incarTargetRotation;

    float         m_fReportedArmour;
    float         m_fReportedHealth;
    char          pad_2[12];
    Animation     m_animation;
    unsigned char m_nUpdateType;
    TICK          m_lastUpdate;
    TICK          m_lastTimestamp;
    BOOL          m_bPerformingCustomAnimation;
    int           m_nStatus;

    struct {
        CVector m_direction;
        TICK    m_lastUpdate;
        TICK    m_lastLook;
    } m_head;

    BOOL m_bMarkerState;

    struct {
        int x, y, z;
    } m_markerPosition;

    GTAREF m_marker;

    
    RemotePlayer();
    ~RemotePlayer();

    void ProcessHead();
    void SetMarkerState(BOOL bState);
    void SetMarkerPosition(int x, int y, int z);
    BOOL SurfingOnVehicle();
    BOOL SurfingOnObject();
    void ProcessSurfing();
    void OnEnterVehicle();
    void OnExitVehicle();
    void ProcessSpecialAction();
    void UpdateOnfootSpeedAndPosition();
    void UpdateOnfootRotation();
    void SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed);
    void UpdateIncarSpeedAndPosition();
    void UpdateIncarRotation();
    void SetIncarTargetSpeedAndPosition(Matrix* pMatrix, CVector* pPosition, CVector* pSpeed);
    void UpdateTrain(Matrix* pMatrix, CVector* pSpeed, float fSpeed);
    void ResetData();
    float GetDistanceToPlayer(RemotePlayer* pPlayer);
    float GetDistanceToLocalPlayer();
    D3DCOLOR GetColorAsRGBA();
    D3DCOLOR GetColorAsARGB();
    void EnterVehicle(ID nId, BOOL bPassenger);
    void ExitVehicle();
    void ChangeState(char nOld, char nNew);
    int GetStatus();
    void Process();
    void Remove();
    void Kill();
    void Chat(const char* szText);
    BOOL DoesExist();
};

END_PACK

#endif // REMOTEPLAYER_HPP_