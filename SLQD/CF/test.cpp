#include <iostream>

using namespace std;

long long f[10000];
// f[i] so fib thu i;

int main() {
    f[1]=1; f[2]=1;
    for (int i = 3; i <= 1000; ++i) {
        f[i]=f[i-1]+f[i-2];
    }
    cout << f[1000];
    return 0;
}