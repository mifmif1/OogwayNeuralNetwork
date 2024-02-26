#include <iostream>
#include "headerFiles/matrix/weights.h"

using namespace std;

int main()
{
    BaseMatrix a(5,5,zero);
    a.printWeights();
    return 0;
}