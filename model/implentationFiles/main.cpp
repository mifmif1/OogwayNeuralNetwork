#include <iostream>
#include "model/headerFiles/matrix/weights.h"

using namespace std;

int main()
{
    Weights *a = new Weights(5,5, zero);
    a->printWeights();
    return 0;
}