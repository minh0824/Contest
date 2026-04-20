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
const int nmax = 1e3 + 7;

int n, m, a[nmax][nmax], dp[nmax][nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      char x; cin >> x;
      if (x=='.') a[i][j]=1;
    }
  }
  dp[1][1]=1;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if (a[i-1][j] && i-1>0) dp[i][j]+=dp[i-1][j]%mod;
      if (a[i][j-1] && j-1>0) dp[i][j]+=dp[i][j-1]%mod;
    }
  }
  cout << dp[n][m]%mod;
  return 0;
}
