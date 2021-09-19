#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "CVector.h"

class Matrix {
public:
    CVector       right;
    unsigned long flags;
    CVector       up;
    float         pad_u;
    CVector       at;
    float         pad_a;
    CVector       pos;
    float         pad_p;
};

#endif // MATRIX_HPP_