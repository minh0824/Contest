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

int n, W, w[nmax], v[nmax], V=100000;
int dp[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> W;
  for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];
  for (int i = 1; i <= V; ++i) dp[i]=INF;
  for (int i = 1; i <= n; ++i) {
    for (int j = V; j >= 1; --j) {
      if (j-v[i]>=0) {
        dp[j]=min(dp[j], dp[j-v[i]]+w[i]);
      }
    }
  }
  int ans = 0;
  for (int i = 1; i <= V; ++i) {
    if (dp[i]<=W) ans = max(ans, i);
  }
  cout << ans;
  return 0;
}
