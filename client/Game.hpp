#ifndef GAME_HPP_
#define GAME_HPP_

#include "common.hpp"

BEGIN_PACK

class Game {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetPlayerPed)> GetPlayerPed_hook{ GetAddress(0x1010) }; GetPlayerPed_hook.before.connect(GetPlayerPed);
        static kthook::kthook_t<decltype(&FindGroundZ)> FindGroundZ_hook{ GetAddress(0x9FCF0) }; FindGroundZ_hook.before.connect(FindGroundZ);
        static kthook::kthook_t<decltype(&SetCursorMode)> SetCursorMode_hook{ GetAddress(0x9FFE0) }; SetCursorMode_hook.before.connect(SetCursorMode);
        static kthook::kthook_t<decltype(&InitGame)> InitGame_hook{ GetAddress(0xA0180) }; InitGame_hook.before.connect(InitGame);
        static kthook::kthook_t<decltype(&StartGame)> StartGame_hook{ GetAddress(0xA01D0) }; StartGame_hook.before.connect(StartGame);
        static kthook::kthook_t<decltype(&IsMenuVisible)> IsMenuVisible_hook{ GetAddress(0xA0210) }; IsMenuVisible_hook.before.connect(IsMenuVisible);
        static kthook::kthook_t<decltype(&IsStarted)> IsStarted_hook{ GetAddress(0xA0220) }; IsStarted_hook.before.connect(IsStarted);
        static kthook::kthook_t<decltype(&LoadRequestedModels)> LoadRequestedModels_hook{ GetAddress(0xA0250) }; LoadRequestedModels_hook.before.connect(LoadRequestedModels);
        static kthook::kthook_t<decltype(&IsModelAvailable)> IsModelAvailable_hook{ GetAddress(0xA0260) }; IsModelAvailable_hook.before.connect(IsModelAvailable);
        static kthook::kthook_t<decltype(&SetWorldTime)> SetWorldTime_hook{ GetAddress(0xA03A0) }; SetWorldTime_hook.before.connect(SetWorldTime);
        static kthook::kthook_t<decltype(&GetWorldTime)> GetWorldTime_hook{ GetAddress(0xA03D0) }; GetWorldTime_hook.before.connect(GetWorldTime);
        static kthook::kthook_t<decltype(&LetTimeGo)> LetTimeGo_hook{ GetAddress(0xA03F0) }; LetTimeGo_hook.before.connect(LetTimeGo);
        static kthook::kthook_t<decltype(&SetWorldWeather)> SetWorldWeather_hook{ GetAddress(0xA0430) }; SetWorldWeather_hook.before.connect(SetWorldWeather);
        static kthook::kthook_t<decltype(&SetFrameLimiter)> SetFrameLimiter_hook{ GetAddress(0xA04A0) }; SetFrameLimiter_hook.before.connect(SetFrameLimiter);
        static kthook::kthook_t<decltype(&SetMaxStats)> SetMaxStats_hook{ GetAddress(0xA04D0) }; SetMaxStats_hook.before.connect(SetMaxStats);
        static kthook::kthook_t<decltype(&DisableTrainTraffic)> DisableTrainTraffic_hook{ GetAddress(0xA0500) }; DisableTrainTraffic_hook.before.connect(DisableTrainTraffic);
        static kthook::kthook_t<decltype(&RefreshRenderer)> RefreshRenderer_hook{ GetAddress(0xA0510) }; RefreshRenderer_hook.before.connect(RefreshRenderer);
        static kthook::kthook_t<decltype(&RequestAnimation)> RequestAnimation_hook{ GetAddress(0xA0540) }; RequestAnimation_hook.before.connect(RequestAnimation);
        static kthook::kthook_t<decltype(&IsAnimationLoaded)> IsAnimationLoaded_hook{ GetAddress(0xA0560) }; IsAnimationLoaded_hook.before.connect(IsAnimationLoaded);
        static kthook::kthook_t<decltype(&ReleaseAnimation)> ReleaseAnimation_hook{ GetAddress(0xA0580) }; ReleaseAnimation_hook.before.connect(ReleaseAnimation);
        static kthook::kthook_t<decltype(&DisplayGameText)> DisplayGameText_hook{ GetAddress(0xA05D0) }; DisplayGameText_hook.before.connect(DisplayGameText);
        static kthook::kthook_t<decltype(&DeleteRacingCheckpoint)> DeleteRacingCheckpoint_hook{ GetAddress(0xA0630) }; DeleteRacingCheckpoint_hook.before.connect(DeleteRacingCheckpoint);
        static kthook::kthook_t<decltype(&CreateMarker)> CreateMarker_hook{ GetAddress(0xA0660) }; CreateMarker_hook.before.connect(CreateMarker);
        static kthook::kthook_t<decltype(&DeleteMarker)> DeleteMarker_hook{ GetAddress(0xA0790) }; DeleteMarker_hook.before.connect(DeleteMarker);
        static kthook::kthook_t<decltype(&GetCurrentInterior)> GetCurrentInterior_hook{ GetAddress(0xA07B0) }; GetCurrentInterior_hook.before.connect(GetCurrentInterior);
        static kthook::kthook_t<decltype(&UpdateFarClippingPlane)> UpdateFarClippingPlane_hook{ GetAddress(0xA07D0) }; UpdateFarClippingPlane_hook.before.connect(UpdateFarClippingPlane);
        static kthook::kthook_t<decltype(&IncreasePlayerMoney)> IncreasePlayerMoney_hook{ GetAddress(0xA0840) }; IncreasePlayerMoney_hook.before.connect(IncreasePlayerMoney);
        static kthook::kthook_t<decltype(&GetPlayerMoney)> GetPlayerMoney_hook{ GetAddress(0xA0860) }; GetPlayerMoney_hook.before.connect(GetPlayerMoney);
        static kthook::kthook_t<decltype(&CreatePickup)> CreatePickup_hook{ GetAddress(0xA0AC0) }; CreatePickup_hook.before.connect(CreatePickup);
        static kthook::kthook_t<decltype(&CreateWeaponPickup)> CreateWeaponPickup_hook{ GetAddress(0xA0BA0) }; CreateWeaponPickup_hook.before.connect(CreateWeaponPickup);
        static kthook::kthook_t<decltype(&GetDevice)> GetDevice_hook{ GetAddress(0xA0C40) }; GetDevice_hook.before.connect(GetDevice);
        static kthook::kthook_t<decltype(&Restart)> Restart_hook{ GetAddress(0xA0C80) }; Restart_hook.before.connect(Restart);
        static kthook::kthook_t<decltype(&GetWeaponInfo)> GetWeaponInfo_hook{ GetAddress(0xA0CB0) }; GetWeaponInfo_hook.before.connect(GetWeaponInfo);
        static kthook::kthook_t<decltype(&SetWorldGravity)> SetWorldGravity_hook{ GetAddress(0xA0CD0) }; SetWorldGravity_hook.before.connect(SetWorldGravity);
        static kthook::kthook_t<decltype(&SetWantedLevel)> SetWantedLevel_hook{ GetAddress(0xA0CF0) }; SetWantedLevel_hook.before.connect(SetWantedLevel);
        static kthook::kthook_t<decltype(&SetNumberOfIntroTextLinesThisFrame)> SetNumberOfIntroTextLinesThisFrame_hook{ GetAddress(0xA0D00) }; SetNumberOfIntroTextLinesThisFrame_hook.before.connect(SetNumberOfIntroTextLinesThisFrame);
        static kthook::kthook_t<decltype(&DrawGangZone)> DrawGangZone_hook{ GetAddress(0xA0D10) }; DrawGangZone_hook.before.connect(DrawGangZone);
        static kthook::kthook_t<decltype(&EnableZoneDisplaying)> EnableZoneDisplaying_hook{ GetAddress(0xA0DF0) }; EnableZoneDisplaying_hook.before.connect(EnableZoneDisplaying);
        static kthook::kthook_t<decltype(&EnableStuntBonus)> EnableStuntBonus_hook{ GetAddress(0xA0E10) }; EnableStuntBonus_hook.before.connect(EnableStuntBonus);
        static kthook::kthook_t<decltype(&LoadScene)> LoadScene_hook{ GetAddress(0xA0E80) }; LoadScene_hook.before.connect(LoadScene);
        static kthook::kthook_t<decltype(&GetUsedMemory)> GetUsedMemory_hook{ GetAddress(0xA0EA0) }; GetUsedMemory_hook.before.connect(GetUsedMemory);
        static kthook::kthook_t<decltype(&GetStreamingMemory)> GetStreamingMemory_hook{ GetAddress(0xA0EB0) }; GetStreamingMemory_hook.before.connect(GetStreamingMemory);
        static kthook::kthook_t<decltype(&SetRequiredVehicleModels)> SetRequiredVehicleModels_hook{ GetAddress(0xA0EE0) }; SetRequiredVehicleModels_hook.before.connect(SetRequiredVehicleModels);
        static kthook::kthook_t<decltype(&GetTimer)> GetTimer_hook{ GetAddress(0xA1040) }; GetTimer_hook.before.connect(GetTimer);
        static kthook::kthook_t<decltype(&LoadAnimationsAndModels)> LoadAnimationsAndModels_hook{ GetAddress(0xA1170) }; LoadAnimationsAndModels_hook.before.connect(LoadAnimationsAndModels);
        static kthook::kthook_t<decltype(&LoadCollisionFile)> LoadCollisionFile_hook{ GetAddress(0xA1450) }; LoadCollisionFile_hook.before.connect(LoadCollisionFile);
        static kthook::kthook_t<decltype(&LoadCullZone)> LoadCullZone_hook{ GetAddress(0xA1470) }; LoadCullZone_hook.before.connect(LoadCullZone);
        static kthook::kthook_t<decltype(&UsingGamepad)> UsingGamepad_hook{ GetAddress(0xA1490) }; UsingGamepad_hook.before.connect(UsingGamepad);
        static kthook::kthook_t<decltype(&DisableAutoAiming)> DisableAutoAiming_hook{ GetAddress(0xA14A0) }; DisableAutoAiming_hook.before.connect(DisableAutoAiming);
        static kthook::kthook_t<decltype(&EnableHUD)> EnableHUD_hook{ GetAddress(0xA1680) }; EnableHUD_hook.before.connect(EnableHUD);
        static kthook::kthook_t<decltype(&SetCheckpoint)> SetCheckpoint_hook{ GetAddress(0xA16B0) }; SetCheckpoint_hook.before.connect(SetCheckpoint);
        static kthook::kthook_t<decltype(&CreateRacingCheckpoint)> CreateRacingCheckpoint_hook{ GetAddress(0xA1770) }; CreateRacingCheckpoint_hook.before.connect(CreateRacingCheckpoint);
        static kthook::kthook_t<decltype(&ProcessCheckpoints)> ProcessCheckpoints_hook{ GetAddress(0xA17F0) }; ProcessCheckpoints_hook.before.connect(ProcessCheckpoints);
        static kthook::kthook_t<decltype(&ResetMoney)> ResetMoney_hook{ GetAddress(0xA1990) }; ResetMoney_hook.before.connect(ResetMoney);
        static kthook::kthook_t<decltype(&SetRacingCheckpoint)> SetRacingCheckpoint_hook{ GetAddress(0xA19D0) }; SetRacingCheckpoint_hook.before.connect(SetRacingCheckpoint);
        static kthook::kthook_t<decltype(&EnableRadar)> EnableRadar_hook{ GetAddress(0xA05B0) }; EnableRadar_hook.before.connect(EnableRadar);
        static kthook::kthook_t<decltype(&GetWindowHandle)> GetWindowHandle_hook{ GetAddress(0x2CF0) }; GetWindowHandle_hook.before.connect(GetWindowHandle);
        static kthook::kthook_t<decltype(&GetAudio)> GetAudio_hook{ GetAddress(0x2D00) }; GetAudio_hook.before.connect(GetAudio);
        static kthook::kthook_t<decltype(&GetCamera)> GetCamera_hook{ GetAddress(0x2D10) }; GetCamera_hook.before.connect(GetCamera);
        static kthook::kthook_t<decltype(&DoesHeadMoves)> DoesHeadMoves_hook{ GetAddress(0x2D20) }; DoesHeadMoves_hook.before.connect(DoesHeadMoves);
        static kthook::kthook_t<decltype(&EnableClock)> EnableClock_hook{ GetAddress(0xA0D30) }; EnableClock_hook.before.connect(EnableClock);
        static kthook::kthook_t<decltype(&Sleep)> Sleep_hook{ GetAddress(0x9F980) }; Sleep_hook.before.connect(Sleep);
        static kthook::kthook_t<decltype(&RemovePed)> RemovePed_hook{ GetAddress(0x9FB00) }; RemovePed_hook.before.connect(RemovePed);
        static kthook::kthook_t<decltype(&CreateVehicle)> CreateVehicle_hook{ GetAddress(0x9FB40) }; CreateVehicle_hook.before.connect(CreateVehicle);
        static kthook::kthook_t<decltype(&ProcessInputEnabling)> ProcessInputEnabling_hook{ GetAddress(0x9FEC0) }; ProcessInputEnabling_hook.before.connect(ProcessInputEnabling);
        static kthook::kthook_t<decltype(&ProcessFrameLimiter)> ProcessFrameLimiter_hook{ GetAddress(0xA14E0) }; ProcessFrameLimiter_hook.before.connect(ProcessFrameLimiter);
    }



    ~Game();

    MAKE_RET(CPed*) GetPlayerPed();
    MAKE_RET(float) FindGroundZ(CVector vPoint);
    MAKE_RET(void) SetCursorMode(int nMode, BOOL bImmediatelyHideCursor);
    MAKE_RET(void) InitGame();
    MAKE_RET(void) StartGame();
    MAKE_RET(BOOL) IsMenuVisible();
    MAKE_RET(BOOL) IsStarted();
    MAKE_RET(void) LoadRequestedModels();
    MAKE_RET(BOOL) IsModelAvailable(int nModel);
    MAKE_RET(void) SetWorldTime(char nHour, char nMinute);
    MAKE_RET(void) GetWorldTime(char* nHour, char* nMinute);
    MAKE_RET(void) LetTimeGo(bool blet);
    MAKE_RET(void) SetWorldWeather(char nWeather);
    MAKE_RET(void) SetFrameLimiter(int nValue);
    MAKE_RET(void) SetMaxStats();
    MAKE_RET(void) DisableTrainTraffic();
    MAKE_RET(void) RefreshRenderer(float fX, float fY);
    MAKE_RET(void) RequestAnimation(const char* szFile);
    MAKE_RET(BOOL) IsAnimationLoaded(const char* szFile);
    MAKE_RET(void) ReleaseAnimation(const char* szFile);
    MAKE_RET(void) DisplayGameText(const char* szText, int nType, int nSize);
    MAKE_RET(void) DeleteRacingCheckpoint();
    MAKE_RET(GTAREF) CreateMarker(int nIcon, CVector vPosition, int nColor, int nType);
    MAKE_RET(void) DeleteMarker(GTAREF handle);
    MAKE_RET(char) GetCurrentInterior();
    MAKE_RET(void) UpdateFarClippingPlane();
    MAKE_RET(void) IncreasePlayerMoney(int nInc);
    MAKE_RET(int) GetPlayerMoney();
    MAKE_RET(void) CreatePickup(int nModel, int nType, CVector vPosition, GTAREF* handle);
    MAKE_RET(GTAREF) CreateWeaponPickup(int nModel, int nAmmo, CVector vPosition);
    MAKE_RET(IDirect3DDevice9*) GetDevice();
    MAKE_RET(void) Restart();
    MAKE_RET(::CWeaponInfo*) GetWeaponInfo(int nWeapon, int nSkill);
    MAKE_RET(void) SetWorldGravity(float fValue);
    MAKE_RET(void) SetWantedLevel(char nLevel);
    MAKE_RET(void) SetNumberOfIntroTextLinesThisFrame(unsigned short nValue);
    MAKE_RET(void) DrawGangZone(float* pPos, char nColor);
    MAKE_RET(void) EnableZoneDisplaying(bool bEnable);
    MAKE_RET(void) EnableStuntBonus(bool bEnable);
    MAKE_RET(void) LoadScene(const char* szFile);
    MAKE_RET(int) GetUsedMemory();
    MAKE_RET(int) GetStreamingMemory();
    MAKE_RET(void) SetRequiredVehicleModels(unsigned char* pModelCount);
    MAKE_RET(int) GetTimer();
    MAKE_RET(void) LoadAnimationsAndModels();
    MAKE_RET(void) LoadCollisionFile(const char* szFile);
    MAKE_RET(void) LoadCullZone(const char* szLine);
    MAKE_RET(BOOL) UsingGamepad();
    MAKE_RET(void) DisableAutoAiming();
    MAKE_RET(void) EnableHUD(BOOL bEnable);
    MAKE_RET(void) SetCheckpoint(CVector* pPos, CVector* pSize);
    MAKE_RET(void) CreateRacingCheckpoint();
    MAKE_RET(void) ProcessCheckpoints();
    MAKE_RET(void) ResetMoney();
    MAKE_RET(void) SetRacingCheckpoint(int nType, CVector* pCurrentPos, CVector* pNextPos, float fSize);
    MAKE_RET(void) EnableRadar(BOOL bEnable);
    MAKE_RET(void*) GetWindowHandle();
    MAKE_RET(CAudio*) GetAudio();
    MAKE_RET(CCamera*) GetCamera();
    MAKE_RET(BOOL) DoesHeadMoves();
    MAKE_RET(void) EnableClock(bool bEnable);
    MAKE_RET(void) Sleep(int elapsed, int fpsLimit);
    MAKE_RET(BOOL) RemovePed(CPed* pPed);
    MAKE_RET(CVehicle*) CreateVehicle(int nModel, CVector position, float fRotation, BOOL bHasSiren);
    MAKE_RET(void) ProcessInputEnabling();
    MAKE_RET(void) ProcessFrameLimiter();
};

END_PACK

#endif // GAME_HPP_