#ifndef BASE_MATRIX_H
#define BASE_MATRIX_H
#include "../enums/initialization.h"

class BaseMatrix
{
protected:
    int _columns_length;
    int _rows_length;
    double** _values;
    initialization _values_initialization;

public:
    explicit BaseMatrix(int column_length, int row_length, initialization values_initialization);
    ~BaseMatrix();
    void _initilize_values();
    BaseMatrix multiply(BaseMatrix second_matrix);
    BaseMatrix add(BaseMatrix second_matrix);
    BaseMatrix sigmoid();
    BaseMatrix relu();
    BaseMatrix tanh();
    void change_values();
    void printWeights();
};

#endif