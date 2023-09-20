#include <iostream>
#include "func.h"
#define MOD 211
#define N 100000
using namespace std;

int getRand() {
    long f, f0, f1, f2, f3, i;
    long count[MOD] = {0};
    f0 = f1 = f2= f3 = 1;
    for (i = 0; i < N; i++) {
        f = (f0 + f1 + f2 + f3) % MOD;
        count[f]++;
        f0 = f1; f1 = f2; f2 = f3; f3 = f;
    }
    for (i = 0; i < MOD; i++) {
        std::cout << i << " " << count[i] << "\n";
    }
    return 0;
}
