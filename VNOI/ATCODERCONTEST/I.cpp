#include <iostream>
#include <math.h>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 3e3 + 7;

int n;
double p[nmax], dp[nmax][nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n;
  for (int i = 1; i <= n; ++i) cin >> p[i];
  // dp[i][j]=dp[i-1][j]*p[i]+dp[i-1][j-1]*(1-p[i]);
  for (int i = 1; i <= n; ++i) {

  }
  return 0;
}
