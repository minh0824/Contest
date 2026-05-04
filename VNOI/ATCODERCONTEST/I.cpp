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
const int nmax = 50 + 7;

int di[4] = {+1, -1};
int dj[4] = {-1, +1};

int n, m, a[nmax][nmax];
// double p[nmax], dp[nmax][nmax];


signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // cin >> n;
  // for (int i = 1; i <= n; ++i) cin >> p[i];
  // // dp[i][j]=dp[i-1][j]*p[i]+dp[i-1][j-1]*(1-p[i]);
  // dp[0][0]=1;
  // for (int i = 1; i <= n; ++i) {
  //   for (int j = 0; j <= i; ++j) {
  //     dp[i][j]+=dp[i-1][j]*(1-p[i]);
  //     if (j>0) dp[i][j]+=dp[i-1][j-1]*p[i];
  //   }
  // }
  // double ans{};
  // for (int i = n/2+1; i <= n; ++i) ans+=dp[n][i];
  // cout << fixed << setprecision(10) << ans;

  cin >> n >> m;
  // cout << n << ' ' << m << endl;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) cin >> a[i][j];
  }
  for (int k = 2; k <= n+m; ++k) {
    if (k % 2 == 1) {
      for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
          if (i+j==k) cout << a[i][j] << ' ';
        }
      }
    } else {
      for (int i = n; i >= 1; --i) {
        for (int j = m; j >= 1; --j) {
          if (i+j==k) cout << a[i][j] << ' ';
        }
      }
    }
  }
  return 0;
}
