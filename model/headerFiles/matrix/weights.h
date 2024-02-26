#ifndef WEIGHTS_H
#define WEIGHTS_H
#include "model/enums/initialization.h"
#include "./base_matrix.h"

class Weights : public BaseMatrix
{
public:
    BaseMatrix::BaseMatrix;
    ~Weights();
};

#endif