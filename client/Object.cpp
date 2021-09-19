#include "Object.hpp"

Object::Object(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12) {

}
float Object::GetDistance(const Matrix* pMatrix) {

    return float{};
}

void Object::Stop() {

    return;
}

void Object::SetRotation(const CVector* pVector) {

    return;
}

void Object::SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation) {

    return;
}

void Object::AttachToVehicle(Vehicle* pVehicle) {

    return;
}

void Object::AttachToObject(Object* pObject) {

    return;
}

void Object::Rotate(CVector vector) {

    return;
}

BOOL Object::AttachedToMovingEntity() {

    return BOOL{};
}

bool Object::GetMaterialSize(int nSize, int* x, int* y) {

    return bool{};
}

void Object::Render() {

    return;
}

void Object::Process(float fElapsedTime) {

    return;
}

void Object::ConstructMaterialText() {

    return;
}

void Object::Draw() {

    return;
}

void Object::ShutdownMaterialText() {

    return;
}

