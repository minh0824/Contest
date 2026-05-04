#include "iostream"
using namespace std;

const int nmax = 1e5+7;
bool p[nmax];

void sieve() {
  for (int i = 1; i <= nmax; ++i) p[i]=1;
  p[1]=0;
  for (int i = 2; i <= nmax; ++i) {
    if (p[i]) for (int j = 2; 1ll*i*j<=nmax; ++j) {
      p[i*j]=0;
    }
  }
}

int main() {
  int n; cin >> n;
  sieve();
  for (int i = 2; i <= n; ++i) if (p[i]) cout << i << endl;
  return 0;
}
