#ifndef ENTITY_HPP_
#define ENTITY_HPP_

#include "common.hpp"

BEGIN_PACK

class Entity {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&GetMatrix)> GetMatrix_hook{ GetAddress(0x9E400) }; GetMatrix_hook.before.connect(GetMatrix);
        static kthook::kthook_t<decltype(&SetMatrix)> SetMatrix_hook{ GetAddress(0x9E4B0) }; SetMatrix_hook.before.connect(SetMatrix);
        static kthook::kthook_t<decltype(&GetSpeed)> GetSpeed_hook{ GetAddress(0x9E5D0) }; GetSpeed_hook.before.connect(GetSpeed);
        static kthook::kthook_t<decltype(&SetSpeed)> SetSpeed_hook{ GetAddress(0x9E600) }; SetSpeed_hook.before.connect(SetSpeed);
        static kthook::kthook_t<decltype(&GetTurnSpeed)> GetTurnSpeed_hook{ GetAddress(0x9E720) }; GetTurnSpeed_hook.before.connect(GetTurnSpeed);
        static kthook::kthook_t<decltype(&SetTurnSpeed)> SetTurnSpeed_hook{ GetAddress(0x9E750) }; SetTurnSpeed_hook.before.connect(SetTurnSpeed);
        static kthook::kthook_t<decltype(&ApplyTurnSpeed)> ApplyTurnSpeed_hook{ GetAddress(0x9E780) }; ApplyTurnSpeed_hook.before.connect(ApplyTurnSpeed);
        static kthook::kthook_t<decltype(&GetDistanceFromCentreOfMassToBaseOfModel)> GetDistanceFromCentreOfMassToBaseOfModel_hook{ GetAddress(0x9E7A0) }; GetDistanceFromCentreOfMassToBaseOfModel_hook.before.connect(GetDistanceFromCentreOfMassToBaseOfModel);
        static kthook::kthook_t<decltype(&GetBoundCentre)> GetBoundCentre_hook{ GetAddress(0x9E7E0) }; GetBoundCentre_hook.before.connect(GetBoundCentre);
        static kthook::kthook_t<decltype(&SetModelIndex)> SetModelIndex_hook{ GetAddress(0x9E840) }; SetModelIndex_hook.before.connect(SetModelIndex);
        static kthook::kthook_t<decltype(&GetModelIndex)> GetModelIndex_hook{ GetAddress(0x9E920) }; GetModelIndex_hook.before.connect(GetModelIndex);
        static kthook::kthook_t<decltype(&Teleport)> Teleport_hook{ GetAddress(0x9E930) }; Teleport_hook.before.connect(Teleport);
        static kthook::kthook_t<decltype(&GetDistanceToLocalPlayer)> GetDistanceToLocalPlayer_hook{ GetAddress(0x9E9B0) }; GetDistanceToLocalPlayer_hook.before.connect(GetDistanceToLocalPlayer);
        static kthook::kthook_t<decltype(&GetDistanceToCamera)> GetDistanceToCamera_hook{ GetAddress(0x9EA80) }; GetDistanceToCamera_hook.before.connect(GetDistanceToCamera);
        static kthook::kthook_t<decltype(&GetDistanceToPoint)> GetDistanceToPoint_hook{ GetAddress(0x9EBA0) }; GetDistanceToPoint_hook.before.connect(GetDistanceToPoint);
        static kthook::kthook_t<decltype(&DoesExist)> DoesExist_hook{ GetAddress(0x9ECC0) }; DoesExist_hook.before.connect(DoesExist);
        static kthook::kthook_t<decltype(&EnforceWorldBoundries)> EnforceWorldBoundries_hook{ GetAddress(0x9ED10) }; EnforceWorldBoundries_hook.before.connect(EnforceWorldBoundries);
        static kthook::kthook_t<decltype(&HasExceededWorldBoundries)> HasExceededWorldBoundries_hook{ GetAddress(0x9EEB0) }; HasExceededWorldBoundries_hook.before.connect(HasExceededWorldBoundries);
        static kthook::kthook_t<decltype(&GetEulerInverted)> GetEulerInverted_hook{ GetAddress(0x9F1E0) }; GetEulerInverted_hook.before.connect(GetEulerInverted);
        static kthook::kthook_t<decltype(&IsIgnored)> IsIgnored_hook{ GetAddress(0x9F5D0) }; IsIgnored_hook.before.connect(IsIgnored);
        static kthook::kthook_t<decltype(&IsStationary)> IsStationary_hook{ GetAddress(0x9F6D0) }; IsStationary_hook.before.connect(IsStationary);
        static kthook::kthook_t<decltype(&GetCollisionFlag)> GetCollisionFlag_hook{ GetAddress(0x9EF50) }; GetCollisionFlag_hook.before.connect(GetCollisionFlag);
        static kthook::kthook_t<decltype(&SetCollisionFlag)> SetCollisionFlag_hook{ GetAddress(0x9EF20) }; SetCollisionFlag_hook.before.connect(SetCollisionFlag);
        static kthook::kthook_t<decltype(&GetRwObject)> GetRwObject_hook{ GetAddress(0x9F350) }; GetRwObject_hook.before.connect(GetRwObject);
        static kthook::kthook_t<decltype(&DeleteRwObject)> DeleteRwObject_hook{ GetAddress(0x9F4A0) }; DeleteRwObject_hook.before.connect(DeleteRwObject);
        static kthook::kthook_t<decltype(&UpdateRwFrame)> UpdateRwFrame_hook{ GetAddress(0x9E570) }; UpdateRwFrame_hook.before.connect(UpdateRwFrame);
        static kthook::kthook_t<decltype(&GetDistanceToLocalPlayerNoHeight)> GetDistanceToLocalPlayerNoHeight_hook{ GetAddress(0x9EAE0) }; GetDistanceToLocalPlayerNoHeight_hook.before.connect(GetDistanceToLocalPlayerNoHeight);
        static kthook::kthook_t<decltype(&SetCollisionProcessed)> SetCollisionProcessed_hook{ GetAddress(0x9EF70) }; SetCollisionProcessed_hook.before.connect(SetCollisionProcessed);
    }



    ~Entity();

    MAKE_RET(void) GetMatrix(CMatrix* pMatrix);
    MAKE_RET(void) SetMatrix(CMatrix matrix);
    MAKE_RET(void) GetSpeed(CVector* pVec);
    MAKE_RET(void) SetSpeed(CVector vec);
    MAKE_RET(void) GetTurnSpeed(CVector* pVec);
    MAKE_RET(void) SetTurnSpeed(CVector vec);
    MAKE_RET(void) ApplyTurnSpeed();
    MAKE_RET(float) GetDistanceFromCentreOfMassToBaseOfModel();
    MAKE_RET(void) GetBoundCentre(CVector* pVec);
    MAKE_RET(void) SetModelIndex(int nModel);
    MAKE_RET(int) GetModelIndex();
    MAKE_RET(void) Teleport(CVector position);
    MAKE_RET(float) GetDistanceToLocalPlayer();
    MAKE_RET(float) GetDistanceToCamera();
    MAKE_RET(float) GetDistanceToPoint(CVector position);
    MAKE_RET(BOOL) DoesExist();
    MAKE_RET(BOOL) EnforceWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    MAKE_RET(BOOL) HasExceededWorldBoundries(float fPX, float fZX, float fPY, float fNY);
    MAKE_RET(void) GetEulerInverted(float* x, float* y, float* z);
    MAKE_RET(BOOL) IsIgnored();
    MAKE_RET(BOOL) IsStationary();
    MAKE_RET(BOOL) GetCollisionFlag();
    MAKE_RET(void) SetCollisionFlag(BOOL bEnable);
    MAKE_RET(RwObject*) GetRwObject();
    MAKE_RET(void) DeleteRwObject();
    MAKE_RET(void) UpdateRwFrame();
    MAKE_RET(float) GetDistanceToLocalPlayerNoHeight();
    MAKE_RET(void) SetCollisionProcessed(BOOL bProcessed);
};

END_PACK

#endif // ENTITY_HPP_