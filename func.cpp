#include <iostream>
#include "func.h"
#define MOD 211
#define N 100000
using namespace std;

int getRand() {
    long f, f0, f1, f2, f3;
    float count[MOD] = {0};
    f0 = f1 = f2= f3 = 1;
    for (int i = 0; i < N; i++) {
        f = (f0 + f1 + f2 + f3) % MOD;
        count[f]++;
        f0 = f1; f1 = f2; f2 = f3; f3 = f;
    }
    for (int i = 0; i < MOD; i++) {
        float finalNum = count[i] / N;
        std::cout << i << " " << finalNum << "\n";
    }

    float expectedValue = 0;
    for (int i = 1; i < MOD; i++) {
        float finalNum = count[i] / N;
        expectedValue += i * finalNum;
    }
    std::cout << expectedValue;
    return 0;
}
