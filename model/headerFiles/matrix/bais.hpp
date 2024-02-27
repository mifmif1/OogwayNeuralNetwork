#ifndef BIAS_H
#define BIAS_H
#include "cpp_nn/model/enums/initialization.hpp"
#include "cpp_nn/model/headerFiles/matrix/base_matrix.hpp"

class Bias : public BaseMatrix
{
public:
    Bias(int bais_length,
         initialization bias_initialization) : BaseMatrix(bais_length,
                                                          1,
                                                          bias_initialization){

                                               };
    ~Bias();
};

#endif