#ifndef WEIGHTS_H
#define WEIGHTS_H
#include "./enums/initialization.h"

namespace Model{
class Weights{
    private:
        int _columns_length, _rows_length;
        double** _weights;
        initialization _weight_initialization;
        
    public:
    Weights();
    ~Weights();
    void _initilize_weights();
    void change_weights();
    void printWeights();
};
}

#endif