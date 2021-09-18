#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "common.hpp"
#include "Vector.hpp"
#include "Matrix.hpp"
#include "Entity.hpp"

BEGIN_PACK

class Camera {
public:
    static void InjectHooks() {
        ReversibleHooks::Install("Camera", "Fade", GetAddress(0x9CD30), &Camera::Fade);
        ReversibleHooks::Install("Camera", "GetMatrix", GetAddress(0x9CD50), &Camera::GetMatrix);
        ReversibleHooks::Install("Camera", "SetMatrix", GetAddress(0x9CDD0), &Camera::SetMatrix);
        ReversibleHooks::Install("Camera", "SetMoveVector", GetAddress(0x9CE80), &Camera::SetMoveVector);
        ReversibleHooks::Install("Camera", "SetTrackVector", GetAddress(0x9CEF0), &Camera::SetTrackVector);
        ReversibleHooks::Install("Camera", "Attach", GetAddress(0x9CF50), &Camera::Attach);
        ReversibleHooks::Install("Camera", "SetToOwner", GetAddress(0x9CFA0), &Camera::SetToOwner);
        ReversibleHooks::Install("Camera", "GetDistanceToPoint", GetAddress(0x9CFF0), &Camera::GetDistanceToPoint);
        ReversibleHooks::Install("Camera", "Restore", GetAddress(0x9D030), &Camera::Restore);
        ReversibleHooks::Install("Camera", "Set", GetAddress(0x9D070), &Camera::Set);
        ReversibleHooks::Install("Camera", "PointAt", GetAddress(0x9D0D0), &Camera::PointAt);
        ReversibleHooks::Install("Camera", "Detach", GetAddress(0x9D120), &Camera::Detach);
    }


    CEntity* m_pOwner;
    CMatrix* m_pMatrix;

    
    Camera();
    ~Camera();

    void Fade(BOOL bin);
    void GetMatrix(CMatrix* pMatrix);
    void SetMatrix(CMatrix matrix);
    void SetMoveVector(CVector* pCamera, CVector* pPosition, int nTime, bool bSmoothTransmition);
    void SetTrackVector(CVector* pPointAt, CVector* pTransverseTo, int nTime, bool bSmooth);
    void Attach(CEntity* pOwner);
    void SetToOwner();
    float GetDistanceToPoint(CVector* pPoint);
    void Restore();
    void Set(CVector position, CVector rotation);
    void PointAt(CVector point, int nSwitchStyle);
    void Detach();
};

END_PACK

#endif // CAMERA_HPP_