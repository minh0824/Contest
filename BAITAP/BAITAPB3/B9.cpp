#include "iostream"
using namespace std;
int main() {
  int n, k; cin >> n >> k;
  int resn = 1, resk = 1, resnk=1;
  for (int i = 1; i <= n; ++i) {
    resn*=i;
    if (i<=k) resk*=i;
    if (i<=n-k) resnk*=i;
  }
  cout << resn/(resk*resnk);
}
