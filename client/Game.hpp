#ifndef GAME_HPP_
#define GAME_HPP_

#include "common.hpp"
#include "Camera.hpp"
#include "Audio.hpp"
#include "Ped.hpp"
#include "Vehicle.hpp"
#include "Object.hpp"

#include "CVector.h"

BEGIN_PACK

class Game {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Game", "GetPlayerPed", GetAddress(0x1010), &Game::GetPlayerPed);
        ReversibleHooks::Install("Game", "FindGroundZ", GetAddress(0x9FCF0), &Game::FindGroundZ);
        ReversibleHooks::Install("Game", "SetCursorMode", GetAddress(0x9FFE0), &Game::SetCursorMode);
        ReversibleHooks::Install("Game", "InitGame", GetAddress(0xA0180), &Game::InitGame);
        ReversibleHooks::Install("Game", "StartGame", GetAddress(0xA01D0), &Game::StartGame);
        ReversibleHooks::Install("Game", "IsMenuVisible", GetAddress(0xA0210), &Game::IsMenuVisible);
        ReversibleHooks::Install("Game", "IsStarted", GetAddress(0xA0220), &Game::IsStarted);
        ReversibleHooks::Install("Game", "LoadRequestedModels", GetAddress(0xA0250), &Game::LoadRequestedModels);
        ReversibleHooks::Install("Game", "IsModelAvailable", GetAddress(0xA0260), &Game::IsModelAvailable);
        ReversibleHooks::Install("Game", "SetWorldTime", GetAddress(0xA03A0), &Game::SetWorldTime);
        ReversibleHooks::Install("Game", "GetWorldTime", GetAddress(0xA03D0), &Game::GetWorldTime);
        ReversibleHooks::Install("Game", "LetTimeGo", GetAddress(0xA03F0), &Game::LetTimeGo);
        ReversibleHooks::Install("Game", "SetWorldWeather", GetAddress(0xA0430), &Game::SetWorldWeather);
        ReversibleHooks::Install("Game", "SetFrameLimiter", GetAddress(0xA04A0), &Game::SetFrameLimiter);
        ReversibleHooks::Install("Game", "SetMaxStats", GetAddress(0xA04D0), &Game::SetMaxStats);
        ReversibleHooks::Install("Game", "DisableTrainTraffic", GetAddress(0xA0500), &Game::DisableTrainTraffic);
        ReversibleHooks::Install("Game", "RefreshRenderer", GetAddress(0xA0510), &Game::RefreshRenderer);
        ReversibleHooks::Install("Game", "RequestAnimation", GetAddress(0xA0540), &Game::RequestAnimation);
        ReversibleHooks::Install("Game", "IsAnimationLoaded", GetAddress(0xA0560), &Game::IsAnimationLoaded);
        ReversibleHooks::Install("Game", "ReleaseAnimation", GetAddress(0xA0580), &Game::ReleaseAnimation);
        ReversibleHooks::Install("Game", "DisplayGameText", GetAddress(0xA05D0), &Game::DisplayGameText);
        ReversibleHooks::Install("Game", "DeleteRacingCheckpoint", GetAddress(0xA0630), &Game::DeleteRacingCheckpoint);
        ReversibleHooks::Install("Game", "CreateMarker", GetAddress(0xA0660), &Game::CreateMarker);
        ReversibleHooks::Install("Game", "DeleteMarker", GetAddress(0xA0790), &Game::DeleteMarker);
        ReversibleHooks::Install("Game", "GetCurrentInterior", GetAddress(0xA07B0), &Game::GetCurrentInterior);
        ReversibleHooks::Install("Game", "UpdateFarClippingPlane", GetAddress(0xA07D0), &Game::UpdateFarClippingPlane);
        ReversibleHooks::Install("Game", "IncreasePlayerMoney", GetAddress(0xA0840), &Game::IncreasePlayerMoney);
        ReversibleHooks::Install("Game", "GetPlayerMoney", GetAddress(0xA0860), &Game::GetPlayerMoney);
        ReversibleHooks::Install("Game", "CreatePickup", GetAddress(0xA0AC0), &Game::CreatePickup);
        ReversibleHooks::Install("Game", "CreateWeaponPickup", GetAddress(0xA0BA0), &Game::CreateWeaponPickup);
        ReversibleHooks::Install("Game", "GetDevice", GetAddress(0xA0C40), &Game::GetDevice);
        ReversibleHooks::Install("Game", "Restart", GetAddress(0xA0C80), &Game::Restart);
        ReversibleHooks::Install("Game", "GetWeaponInfo", GetAddress(0xA0CB0), &Game::GetWeaponInfo);
        ReversibleHooks::Install("Game", "SetWorldGravity", GetAddress(0xA0CD0), &Game::SetWorldGravity);
        ReversibleHooks::Install("Game", "SetWantedLevel", GetAddress(0xA0CF0), &Game::SetWantedLevel);
        ReversibleHooks::Install("Game", "SetNumberOfIntroTextLinesThisFrame", GetAddress(0xA0D00), &Game::SetNumberOfIntroTextLinesThisFrame);
        ReversibleHooks::Install("Game", "DrawGangZone", GetAddress(0xA0D10), &Game::DrawGangZone);
        ReversibleHooks::Install("Game", "EnableZoneDisplaying", GetAddress(0xA0DF0), &Game::EnableZoneDisplaying);
        ReversibleHooks::Install("Game", "EnableStuntBonus", GetAddress(0xA0E10), &Game::EnableStuntBonus);
        ReversibleHooks::Install("Game", "LoadScene", GetAddress(0xA0E80), &Game::LoadScene);
        ReversibleHooks::Install("Game", "GetUsedMemory", GetAddress(0xA0EA0), &Game::GetUsedMemory);
        ReversibleHooks::Install("Game", "GetStreamingMemory", GetAddress(0xA0EB0), &Game::GetStreamingMemory);
        ReversibleHooks::Install("Game", "SetRequiredVehicleModels", GetAddress(0xA0EE0), &Game::SetRequiredVehicleModels);
        ReversibleHooks::Install("Game", "GetTimer", GetAddress(0xA1040), &Game::GetTimer);
        ReversibleHooks::Install("Game", "LoadAnimationsAndModels", GetAddress(0xA1170), &Game::LoadAnimationsAndModels);
        ReversibleHooks::Install("Game", "LoadCollisionFile", GetAddress(0xA1450), &Game::LoadCollisionFile);
        ReversibleHooks::Install("Game", "LoadCullZone", GetAddress(0xA1470), &Game::LoadCullZone);
        ReversibleHooks::Install("Game", "UsingGamepad", GetAddress(0xA1490), &Game::UsingGamepad);
        ReversibleHooks::Install("Game", "DisableAutoAiming", GetAddress(0xA14A0), &Game::DisableAutoAiming);
        ReversibleHooks::Install("Game", "EnableHUD", GetAddress(0xA1680), &Game::EnableHUD);
        ReversibleHooks::Install("Game", "SetCheckpoint", GetAddress(0xA16B0), &Game::SetCheckpoint);
        ReversibleHooks::Install("Game", "CreateRacingCheckpoint", GetAddress(0xA1770), &Game::CreateRacingCheckpoint);
        ReversibleHooks::Install("Game", "ProcessCheckpoints", GetAddress(0xA17F0), &Game::ProcessCheckpoints);
        ReversibleHooks::Install("Game", "ResetMoney", GetAddress(0xA1990), &Game::ResetMoney);
        ReversibleHooks::Install("Game", "SetRacingCheckpoint", GetAddress(0xA19D0), &Game::SetRacingCheckpoint);
        ReversibleHooks::Install("Game", "EnableRadar", GetAddress(0xA05B0), &Game::EnableRadar);
        ReversibleHooks::Install("Game", "GetWindowHandle", GetAddress(0x2CF0), &Game::GetWindowHandle);
        ReversibleHooks::Install("Game", "GetAudio", GetAddress(0x2D00), &Game::GetAudio);
        ReversibleHooks::Install("Game", "GetCamera", GetAddress(0x2D10), &Game::GetCamera);
        ReversibleHooks::Install("Game", "DoesHeadMoves", GetAddress(0x2D20), &Game::DoesHeadMoves);
        ReversibleHooks::Install("Game", "EnableClock", GetAddress(0xA0D30), &Game::EnableClock);
        ReversibleHooks::Install("Game", "Sleep", GetAddress(0x9F980), &Game::Sleep);
        ReversibleHooks::Install("Game", "RemovePed", GetAddress(0x9FB00), &Game::RemovePed);
        ReversibleHooks::Install("Game", "CreateVehicle", GetAddress(0x9FB40), &Game::CreateVehicle);
        ReversibleHooks::Install("Game", "ProcessInputEnabling", GetAddress(0x9FEC0), &Game::ProcessInputEnabling);
        ReversibleHooks::Install("Game", "ProcessFrameLimiter", GetAddress(0xA14E0), &Game::ProcessFrameLimiter);
    }


    Audio*  m_pAudio;
    Camera* m_pCamera;
    Ped*    m_pPlayerPed;

    struct {
        CVector m_currentPosition;
        CVector m_nextPosition;
        float   m_fSize;
        char    m_nType;
        BOOL    m_bEnabled;
        GTAREF  m_marker;
        GTAREF  m_handle;
    } m_racingCheckpoint;

    struct {
        CVector m_position;
        CVector m_size;
        BOOL    m_bEnabled;
        GTAREF  m_handle;
    } m_checkpoint;

    int          field_61;
    BOOL         m_bHeadMove;
    int          m_nFrameLimiter;
    int          m_nCursorMode;
    unsigned int m_nInputEnableWaitFrames;
    BOOL         m_bClockEnabled;
    char         field_6d;
    bool         m_aKeepLoadedVehicleModels[212];

    static char*& RefGameTextMessage();  // [256], temp buffer
    static bool* ArrayUsedPlayerSlots(); // [SAMP_MAX_PLAYER_PED_SLOTS]

    
    Game();
    ~Game();

    CPed* GetPlayerPed();
    float FindGroundZ(CVector vPoint);
    void SetCursorMode(int nMode, BOOL bImmediatelyHideCursor);
    void InitGame();
    void StartGame();
    BOOL IsMenuVisible();
    BOOL IsStarted();
    void LoadRequestedModels();
    BOOL IsModelAvailable(int nModel);
    void SetWorldTime(char nHour, char nMinute);
    void GetWorldTime(char* nHour, char* nMinute);
    void LetTimeGo(bool blet);
    void SetWorldWeather(char nWeather);
    void SetFrameLimiter(int nValue);
    void SetMaxStats();
    void DisableTrainTraffic();
    void RefreshRenderer(float fX, float fY);
    void RequestAnimation(const char* szFile);
    BOOL IsAnimationLoaded(const char* szFile);
    void ReleaseAnimation(const char* szFile);
    void DisplayGameText(const char* szText, int nType, int nSize);
    void DeleteRacingCheckpoint();
    GTAREF CreateMarker(int nIcon, CVector vPosition, int nColor, int nType);
    void DeleteMarker(GTAREF handle);
    char GetCurrentInterior();
    void UpdateFarClippingPlane();
    void IncreasePlayerMoney(int nInc);
    int GetPlayerMoney();
    void CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle);
    GTAREF CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition);
    IDirect3DDevice9* GetDevice();
    void Restart();
    ::CWeaponInfo* GetWeaponInfo(int nWeapon, int nSkill);
    void SetWorldGravity(float fValue);
    void SetWantedLevel(char nLevel);
    void SetNumberOfIntroTextLinesThisFrame(unsigned short nValue);
    void DrawGangZone(float* pPos, char nColor);
    void EnableZoneDisplaying(bool bEnable);
    void EnableStuntBonus(bool bEnable);
    void LoadScene(const char* szFile);
    int GetUsedMemory();
    int GetStreamingMemory();
    void SetRequiredVehicleModels(unsigned char* pModelCount);
    int GetTimer();
    void LoadAnimationsAndModels();
    void LoadCollisionFile(const char* szFile);
    void LoadCullZone(const char* szLine);
    BOOL UsingGamepad();
    void DisableAutoAiming();
    void EnableHUD(BOOL bEnable);
    void SetCheckpoint(CVector* pPos, CVector* pSize);
    void CreateRacingCheckpoint();
    void ProcessCheckpoints();
    void ResetMoney();
    void SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize);
    void EnableRadar(BOOL bEnable);
    void* GetWindowHandle();
    Audio* GetAudio();
    Camera* GetCamera();
    BOOL DoesHeadMoves();
    void EnableClock(bool bEnable);
    void Sleep(int elapsed, int fpsLimit);
    BOOL RemovePed(CPed* pPed);
    Vehicle* CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren);
    void ProcessInputEnabling();
    void ProcessFrameLimiter();
};

END_PACK

#endif // GAME_HPP_