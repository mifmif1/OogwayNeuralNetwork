#ifndef WEIGHTS_H
#define WEIGHTS_H
#include "./enums/initialization.h"

class Weights{
    private:
        int _columns_length, _rows_length;
        double** _weights;
        initialization _weight_initialization;
        
    public:
    Weights(int weights_column, int weights_row, initialization weight_initialization);
    ~Weights();
    void _initilize_weights();
    void change_weights();
    void printWeights();
};

#endif