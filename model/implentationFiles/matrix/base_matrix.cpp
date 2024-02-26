#include "../enums/initialization.h"
#include <iostream>
#include "../../headerFiles/matrix/base_matrix.h"

using namespace std;

BaseMatrix::BaseMatrix(int columns_length, int rows_length, initialization values_initialization)
{
    _columns_length = columns_length;
    _rows_length = rows_length;
    _values = new double *[_rows_length];
    for (int row = 0; row < _rows_length; ++row)
    {
        _values[row] = new double[_columns_length];
    }
    _values_initialization = values_initialization;
    _initilize_values();
}

BaseMatrix::~BaseMatrix()
{
    for (int row = 0; row < _rows_length; ++row)
    {
        delete[] _values[row];
    }
    delete[] _values;
}

void BaseMatrix::_initilize_values()
{
    switch (_values_initialization)
    {
    case zero:
        for (int r = 0; r < _rows_length; ++r)
        {
            for (int c = 0; c < _columns_length; ++c)
            {
                _values[r][c] = 0;
            }
        }
        break;
    default:
        for (int r = 0; r < _rows_length; ++r)
        {
            for (int c = 0; c < _columns_length; ++c)
            {
                _values[r][c] = 0;
            }
        }
        break;
    }
}

    void BaseMatrix::change_values()
{
// TODO: Implement
}

void BaseMatrix::printWeights()
{

    for (int r = 0; r < _rows_length; ++r)
    {
        for (int c = 0; c < _columns_length; ++c)
        {
            cout << _values[r][c] << ' ';
        }
        cout << endl;
    }
}
