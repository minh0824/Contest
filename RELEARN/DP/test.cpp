#include <iostream>
#include <math.h>

using namespace std;
const int nmax = 1e5 + 7;
int a[nmax];

int main() {
  int n; cin >> n;
  for(int i = n; i>= 1; --i) {
    for (int j = i; j >= 1; --j) cout << '*';
    cout << endl;
  }
  return 0;
}
