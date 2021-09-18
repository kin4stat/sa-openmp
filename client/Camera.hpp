#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "common.hpp"

BEGIN_PACK

class Camera {
public:
    static void InjectHooks() {
        static kthook::kthook_t<decltype(&Fade)> Fade_hook{ GetAddress(0x9CD30) }; Fade_hook.before.connect(Fade);
        static kthook::kthook_t<decltype(&GetMatrix)> GetMatrix_hook{ GetAddress(0x9CD50) }; GetMatrix_hook.before.connect(GetMatrix);
        static kthook::kthook_t<decltype(&SetMatrix)> SetMatrix_hook{ GetAddress(0x9CDD0) }; SetMatrix_hook.before.connect(SetMatrix);
        static kthook::kthook_t<decltype(&SetMoveVector)> SetMoveVector_hook{ GetAddress(0x9CE80) }; SetMoveVector_hook.before.connect(SetMoveVector);
        static kthook::kthook_t<decltype(&SetTrackVector)> SetTrackVector_hook{ GetAddress(0x9CEF0) }; SetTrackVector_hook.before.connect(SetTrackVector);
        static kthook::kthook_t<decltype(&Attach)> Attach_hook{ GetAddress(0x9CF50) }; Attach_hook.before.connect(Attach);
        static kthook::kthook_t<decltype(&SetToOwner)> SetToOwner_hook{ GetAddress(0x9CFA0) }; SetToOwner_hook.before.connect(SetToOwner);
        static kthook::kthook_t<decltype(&GetDistanceToPoint)> GetDistanceToPoint_hook{ GetAddress(0x9CFF0) }; GetDistanceToPoint_hook.before.connect(GetDistanceToPoint);
        static kthook::kthook_t<decltype(&Restore)> Restore_hook{ GetAddress(0x9D030) }; Restore_hook.before.connect(Restore);
        static kthook::kthook_t<decltype(&Set)> Set_hook{ GetAddress(0x9D070) }; Set_hook.before.connect(Set);
        static kthook::kthook_t<decltype(&PointAt)> PointAt_hook{ GetAddress(0x9D0D0) }; PointAt_hook.before.connect(PointAt);
        static kthook::kthook_t<decltype(&Detach)> Detach_hook{ GetAddress(0x9D120) }; Detach_hook.before.connect(Detach);
    }



    ~Camera();

    MAKE_RET(void) Fade(BOOL bin);
    MAKE_RET(void) GetMatrix(CMatrix* pMatrix);
    MAKE_RET(void) SetMatrix(CMatrix matrix);
    MAKE_RET(void) SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition);
    MAKE_RET(void) SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth);
    MAKE_RET(void) Attach(CEntity* pOwner);
    MAKE_RET(void) SetToOwner();
    MAKE_RET(float) GetDistanceToPoint(CVector* pPoint);
    MAKE_RET(void) Restore();
    MAKE_RET(void) Set(CVector position, CVector rotation);
    MAKE_RET(void) PointAt(CVector point, int nSwitchStyle);
    MAKE_RET(void) Detach();
};

END_PACK

#endif // CAMERA_HPP_