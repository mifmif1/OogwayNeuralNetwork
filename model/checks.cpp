#include <iostream>
#include "./weights.h"
#include "./enums/initialization.h"

using namespace std;

int main(){
    Weights firstWeights(5,5,zero);
    firstWeights.printWeights();
    return 0;
}