#ifndef VECTOR_HPP_
#define VECTOR_HPP_

struct VectorCompressed {
    unsigned short x, y, z;
};

class Vector {
public:
    float x, y, z;

    Vector();
    Vector(float x, float y, float z);

    void    Set(float x, float y, float z);
    float   GetLength() const;
    float   GetLengthSquared() const;
    void    Normalize();
    float   Dot(const Vector& vec) const;
    Vector Cross(const Vector& vec) const;
    void    ZeroNearZero();
};

#endif // VECTOR_HPP_