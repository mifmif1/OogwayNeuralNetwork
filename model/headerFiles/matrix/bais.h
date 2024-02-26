#ifndef BIAS_H
#define BIAS_H
#include "../enums/initialization.h"
#include "./base_matrix.h"

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