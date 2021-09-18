#include "Vector.hpp"
#include <cmath>


Vector::Vector()
    : x(0),
      y(0),
      z(0) {
}

Vector::Vector(float x, float y, float z)
    : x(x),
      y(y),
      z(z) {
}

void Vector::Set(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

float Vector::GetLengthSquared() const {
    return x * x + y * y + z * z;
}

float Vector::GetLength() const {
    return std::sqrt(GetLengthSquared());
}

void Vector::Normalize() {
    float len = GetLength();
    x /= len;
    y /= len;
    z /= len;
}

float Vector::Dot(const Vector& vec) const {
    return x * vec.x + y * vec.y + z * vec.z;
}

Vector Vector::Cross(const Vector& vec) const {
    return Vector(y * vec.z - vec.y * z,
                   z * vec.x - vec.z * x,
                   x * vec.y - vec.x * y);
}

void Vector::ZeroNearZero() {
    if (std::abs(x) < 0.0001f)
        x = 0;
    if (std::abs(y) < 0.0001f)
        y = 0;
    if (std::abs(z) < 0.0001f)
        z = 0;
}