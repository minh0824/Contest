#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

struct m {
  ll F[2][2];
  friend m operator * (m a, m b) {
    m res;
    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 2; ++j) {
        res.F[i][j]=0;
        for (int k = 0; k < 2; ++k) {
          res.F[i][j] += a.F[i][k] * b.F[k][j];
          res.F[i][j] %= mod;
        }
      }
    }
    return res;
  }
};

m binpow(m a, ll n) {
  if (n==1) return a;
  m res = binpow(a, n/2);
  if (n&1) return res*res*a;
  return res*res;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  ll n; cin >> n;
  m a;
  a.F[0][0]=1; a.F[0][1]=1, a.F[1][0]=1, a.F[1][1]=0;
  m res = binpow(a, n);
  cout << res.F[0][1];
  return 0;
}
