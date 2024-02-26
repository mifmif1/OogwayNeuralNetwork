#include "../enums/initialization.h"
#include <iostream>
#include "../headerFiles/weights.h"

using namespace std;


Weights::Weights(int weights_column, int weights_row, initialization weight_initialization){
    _columns_length = weights_column;
    _rows_length = weights_row;
    _weights = new double*[_rows_length];
    for (int row = 0; row < _rows_length; ++row){
        _weights[row] = new double[_columns_length];
    }
    _weight_initialization = weight_initialization;
    _initilize_weights();
}


Weights::~Weights(){
    for (int row=0; row < _rows_length; ++row){
        delete [] _weights[row];
    }
    delete [] _weights;
}

void Weights::_initilize_weights(){
    switch (_weight_initialization)
    {
    case zero:
        for (int r = 0; r < _rows_length; ++r){
            for (int c = 0; c < _columns_length; ++c){
                _weights[r][c] = 0;
            }
        }   
        break;
    case random:
        // TODO: implement
        break;
    default:
        for (int r = 0; r < _rows_length; ++r){
            for (int c = 0; c < _columns_length; ++c){
                _weights[r][c] = 0;
            }  
        }   
        break;
    }
}

void Weights::change_weights(){
    // TODO: Implement
}

void Weights::printWeights(){

    for (int r = 0; r < _rows_length; ++r){
    for (int c = 0; c < _columns_length; ++c){
        cout << _weights[r][c] << ' ';
    }
    cout << endl;
    }

}

