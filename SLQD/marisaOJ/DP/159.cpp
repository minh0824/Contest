#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e3 + 7;

int a[nmax], f[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n, k; cin >> n >> k;
  for (int i = 1; i <= k; ++i) cin >> a[i];
  f[0]=1;
  for (int i = 1; i <= n; ++i) {
    for (int j = k; j >= 1; --j) {
      f[i]+=(f[i-1]%mod) * (a[i]);
      f[i]%=mod;
    }
  }
  cout << f[n];
  return 0;
}
