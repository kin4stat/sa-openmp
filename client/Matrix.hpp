#ifndef MATRIX_HPP_
#define MATRIX_HPP_

#include "Vector.hpp"

class Matrix {
public:
    Vector       right;
    unsigned long flags;
    Vector       up;
    float         pad_u;
    Vector       at;
    float         pad_a;
    Vector       pos;
    float         pad_p;
};

#endif // MATRIX_HPP_