#include <iostream>
#include "cpp_nn/model/enums/initialization.hpp"
#include "cpp_nn/model/headerFiles/matrix/weights.hpp"
#include "cpp_nn/model/headerFiles/matrix/base_matrix.hpp"


using namespace std;

// BaseMatrix::BaseMatrix(int columns_length, int rows_length, initialization values_initialization)
// {
//     _columns_length = columns_length;
//     _rows_length = rows_length;
//     _values = new double *[_rows_length];
//     for (int row = 0; row < _rows_length; ++row)
//     {
//         _values[row] = new double[_columns_length];
//     }
//     _values_initialization = values_initialization;
//     _initilize_values();
// }

// BaseMatrix::~BaseMatrix()
// {
//     for (int row = 0; row < _rows_length; ++row)
//     {
//         delete[] _values[row];
//     }
//     delete[] _values;
// }

