#ifndef WEIGHTS_H
#define WEIGHTS_H
#include "cpp_nn/model/enums/initialization.hpp"
#include "cpp_nn/model/headerFiles/matrix/weights.hpp"
#include "cpp_nn/model/headerFiles/matrix/base_matrix.hpp"

class Weights : public BaseMatrix
{
public:
    BaseMatrix::BaseMatrix;
    ~Weights();
};

#endif