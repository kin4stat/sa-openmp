#ifndef REMOTEPLAYER_HPP_
#define REMOTEPLAYER_HPP_

#include "common.hpp"

BEGIN_PACK

class RemotePlayer {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&ProcessHead)> ProcessHead_hook{ GetAddress(0x13FD0) }; ProcessHead_hook.before.connect(ProcessHead);
        static kthook::kthook_t<decltype(&SetMarkerState)> SetMarkerState_hook{ GetAddress(0x14120) }; SetMarkerState_hook.before.connect(SetMarkerState);
        static kthook::kthook_t<decltype(&SetMarkerPosition)> SetMarkerPosition_hook{ GetAddress(0x14160) }; SetMarkerPosition_hook.before.connect(SetMarkerPosition);
        static kthook::kthook_t<decltype(&SurfingOnVehicle)> SurfingOnVehicle_hook{ GetAddress(0x14200) }; SurfingOnVehicle_hook.before.connect(SurfingOnVehicle);
        static kthook::kthook_t<decltype(&SurfingOnObject)> SurfingOnObject_hook{ GetAddress(0x14230) }; SurfingOnObject_hook.before.connect(SurfingOnObject);
        static kthook::kthook_t<decltype(&ProcessSurfing)> ProcessSurfing_hook{ GetAddress(0x14260) }; ProcessSurfing_hook.before.connect(ProcessSurfing);
        static kthook::kthook_t<decltype(&OnEnterVehicle)> OnEnterVehicle_hook{ GetAddress(0x14410) }; OnEnterVehicle_hook.before.connect(OnEnterVehicle);
        static kthook::kthook_t<decltype(&OnExitVehicle)> OnExitVehicle_hook{ GetAddress(0x144E0) }; OnExitVehicle_hook.before.connect(OnExitVehicle);
        static kthook::kthook_t<decltype(&ProcessSpecialAction)> ProcessSpecialAction_hook{ GetAddress(0x14530) }; ProcessSpecialAction_hook.before.connect(ProcessSpecialAction);
        static kthook::kthook_t<decltype(&UpdateOnfootSpeedAndPosition)> UpdateOnfootSpeedAndPosition_hook{ GetAddress(0x14780) }; UpdateOnfootSpeedAndPosition_hook.before.connect(UpdateOnfootSpeedAndPosition);
        static kthook::kthook_t<decltype(&UpdateOnfootRotation)> UpdateOnfootRotation_hook{ GetAddress(0x14B10) }; UpdateOnfootRotation_hook.before.connect(UpdateOnfootRotation);
        static kthook::kthook_t<decltype(&SetOnfootTargetSpeedAndPosition)> SetOnfootTargetSpeedAndPosition_hook{ GetAddress(0x14BE0) }; SetOnfootTargetSpeedAndPosition_hook.before.connect(SetOnfootTargetSpeedAndPosition);
        static kthook::kthook_t<decltype(&UpdateIncarSpeedAndPosition)> UpdateIncarSpeedAndPosition_hook{ GetAddress(0x14C50) }; UpdateIncarSpeedAndPosition_hook.before.connect(UpdateIncarSpeedAndPosition);
        static kthook::kthook_t<decltype(&UpdateIncarRotation)> UpdateIncarRotation_hook{ GetAddress(0x14F50) }; UpdateIncarRotation_hook.before.connect(UpdateIncarRotation);
        static kthook::kthook_t<decltype(&SetIncarTargetSpeedAndPosition)> SetIncarTargetSpeedAndPosition_hook{ GetAddress(0x150C0) }; SetIncarTargetSpeedAndPosition_hook.before.connect(SetIncarTargetSpeedAndPosition);
        static kthook::kthook_t<decltype(&UpdateTrain)> UpdateTrain_hook{ GetAddress(0x15130) }; UpdateTrain_hook.before.connect(UpdateTrain);
        static kthook::kthook_t<decltype(&ResetData)> ResetData_hook{ GetAddress(0x15A50) }; ResetData_hook.before.connect(ResetData);
        static kthook::kthook_t<decltype(&GetDistanceToPlayer)> GetDistanceToPlayer_hook{ GetAddress(0x15B40) }; GetDistanceToPlayer_hook.before.connect(GetDistanceToPlayer);
        static kthook::kthook_t<decltype(&GetDistanceToLocalPlayer)> GetDistanceToLocalPlayer_hook{ GetAddress(0x15BB0) }; GetDistanceToLocalPlayer_hook.before.connect(GetDistanceToLocalPlayer);
        static kthook::kthook_t<decltype(&GetColorAsRGBA)> GetColorAsRGBA_hook{ GetAddress(0x15C00) }; GetColorAsRGBA_hook.before.connect(GetColorAsRGBA);
        static kthook::kthook_t<decltype(&GetColorAsARGB)> GetColorAsARGB_hook{ GetAddress(0x15C10) }; GetColorAsARGB_hook.before.connect(GetColorAsARGB);
        static kthook::kthook_t<decltype(&EnterVehicle)> EnterVehicle_hook{ GetAddress(0x15C30) }; EnterVehicle_hook.before.connect(EnterVehicle);
        static kthook::kthook_t<decltype(&ExitVehicle)> ExitVehicle_hook{ GetAddress(0x15CC0) }; ExitVehicle_hook.before.connect(ExitVehicle);
        static kthook::kthook_t<decltype(&ChangeState)> ChangeState_hook{ GetAddress(0x15CF0) }; ChangeState_hook.before.connect(ChangeState);
        static kthook::kthook_t<decltype(&GetStatus)> GetStatus_hook{ GetAddress(0x15DB0) }; GetStatus_hook.before.connect(GetStatus);
        static kthook::kthook_t<decltype(&Process)> Process_hook{ GetAddress(0x16110) }; Process_hook.before.connect(Process);
        static kthook::kthook_t<decltype(&Remove)> Remove_hook{ GetAddress(0x16E70) }; Remove_hook.before.connect(Remove);
        static kthook::kthook_t<decltype(&Kill)> Kill_hook{ GetAddress(0x16EB0) }; Kill_hook.before.connect(Kill);
        static kthook::kthook_t<decltype(&Chat)> Chat_hook{ GetAddress(0x16F60) }; Chat_hook.before.connect(Chat);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0x1080) }; DoesExist_hook.before.connect(DoesExist);
    }



    ~RemotePlayer();

    MAKE_RET(void) ProcessHead();
    MAKE_RET(void) SetMarkerState(BOOL bState);
    MAKE_RET(void) SetMarkerPosition(int x, int y, int z);
    MAKE_RET(BOOL) SurfingOnVehicle();
    MAKE_RET(BOOL) SurfingOnObject();
    MAKE_RET(void) ProcessSurfing();
    MAKE_RET(void) OnEnterVehicle();
    MAKE_RET(void) OnExitVehicle();
    MAKE_RET(void) ProcessSpecialAction();
    MAKE_RET(void) UpdateOnfootSpeedAndPosition();
    MAKE_RET(void) UpdateOnfootRotation();
    MAKE_RET(void) SetOnfootTargetSpeedAndPosition(CVector* pPosition, CVector* pSpeed);
    MAKE_RET(void) UpdateIncarSpeedAndPosition();
    MAKE_RET(void) UpdateIncarRotation();
    MAKE_RET(void) SetIncarTargetSpeedAndPosition(CMatrix* pMatrix, CVector* pPosition, CVector* pSpeed);
    MAKE_RET(void) UpdateTrain(CMatrix* pMatrix, CVector* pSpeed, float fSpeed);
    MAKE_RET(void) ResetData();
    MAKE_RET(float) GetDistanceToPlayer(CRemotePlayer* pPlayer);
    MAKE_RET(float) GetDistanceToLocalPlayer();
    MAKE_RET(D3DCOLOR) GetColorAsRGBA();
    MAKE_RET(D3DCOLOR) GetColorAsARGB();
    MAKE_RET(void) EnterVehicle(ID nId, BOOL bPassenger);
    MAKE_RET(void) ExitVehicle();
    MAKE_RET(void) ChangeState(char nOld, char nNew);
    MAKE_RET(int) GetStatus();
    MAKE_RET(void) Process();
    MAKE_RET(void) Remove();
    MAKE_RET(void) Kill();
    MAKE_RET(void) Chat(const char* szText);
    MAKE_RET(BOOL) DoesExist();
};

END_PACK

#endif // REMOTEPLAYER_HPP_