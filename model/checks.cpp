#include <iostream>
#include "./weights.h"
#include "./enums/initialization.h"


int main(){
    Weights firstWeights(5,5,zero);
    firstWeights.printWeights();
    return 0;
}