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

const int INF = 1e9+7;
const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

int n, k, h[nmax], dp[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) cin >> h[i];
  for (int i = 1; i <= n; ++i) dp[i]=INF;
  dp[1]=0;
  dp[2]=abs(h[2]-h[1]);
  for (int i = 3; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (i-j>0) dp[i]=min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
    }
  }
  cout << dp[n];
  return 0;
}
