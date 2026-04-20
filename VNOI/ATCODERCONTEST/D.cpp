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
const int nmax = 1e5 + 7;

int n, W, w[nmax], v[nmax];
ll dp[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> W;
  for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];
  for (int i = 1; i <= n; ++i) {
    for (int j = W; j >= 1; --j) {
      if (j-w[i]>=0) {
        dp[j]=max(dp[j], dp[j-w[i]]+v[i]);
      }
    }
  }
  cout << dp[W];
  return 0;
}
