
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

int n, k, a[nmax], dp[2][nmax];


signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) cin >> a[i];
  dp[0][0]=1;
  for (int i = 1; i <= k; ++i) {
    for (int j = 1; j <= n; ++i) {
      if (i-a[j]>=0) {
        dp[0][i]=dp[1][i-a[j]];
        dp[1][i]=dp[0][i-a[j]];
      }
    }
  }
  // dp[0][0]=1; dp[0][0]=0;
  int res{};
  for (int i = k-a[n]+1; i <= n; ++i) {
    if (dp[0][i]) res=1;
  }
  cout << res;
  // cout << ((res)?"First":"Second");
  return 0;
}
