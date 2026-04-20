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

int n, h[nmax], dp[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; ++i) cin >> h[i];
  dp[2]=abs(h[2]-h[1]);
  for (int i = 3; i <= n; ++i) {
    dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
  }
  cout << dp[n];
  return 0;
}
