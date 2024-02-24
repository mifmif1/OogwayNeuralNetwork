#include "weight.cpp"
using namespace std;


 int main(){
    weight a;
    a.len1 = 5;
    a.weightValues = (double*) malloc(a.len1 * sizeof(double));
    print(a);
    free(a.weightValues);
    return 0;
}