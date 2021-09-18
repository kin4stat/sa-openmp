#include "Object.hpp"

Object::Object(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12) {

}
MAKE_RET(float) Object::GetDistance(const CMatrix* pMatrix) {

    return kthook::return_value<float>::make_true();
}

MAKE_RET(void) Object::Stop() {

    return true;
}

MAKE_RET(void) Object::SetRotation(const CVector* pVector) {

    return true;
}

MAKE_RET(void) Object::SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation) {

    return true;
}

MAKE_RET(void) Object::AttachToVehicle(CVehicle* pVehicle) {

    return true;
}

MAKE_RET(void) Object::AttachToObject(CObject* pObject) {

    return true;
}

MAKE_RET(void) Object::Rotate(CVector vector) {

    return true;
}

MAKE_RET(BOOL) Object::AttachedToMovingEntity() {

    return kthook::return_value<BOOL>::make_true();
}

MAKE_RET(bool) Object::GetMaterialSize(int nSize, int* x, int* y) {

    return kthook::return_value<bool>::make_true();
}

MAKE_RET(void) Object::Render() {

    return true;
}

MAKE_RET(void) Object::Process(float fElapsedTime) {

    return true;
}

MAKE_RET(void) Object::ConstructMaterialText() {

    return true;
}

MAKE_RET(void) Object::Draw() {

    return true;
}

MAKE_RET(void) Object::ShutdownMaterialText() {

    return true;
}

