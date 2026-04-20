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

int n, a0[nmax], a1[nmax], a2[nmax], dp[3][nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; ++i) cin >> a0[i] >> a1[i] >> a2[i];
  dp[0][1]=max(a1[1], a2[1]);
  dp[1][1]=max(a0[1], a2[1]);
  dp[2][1]=max(a0[1], a1[1]);
  for (int i = 1; i <= n; ++i) {
    dp[0][i]=max(dp[1][i-1], dp[2][i-1])+a0[i];
    dp[1][i]=max(dp[0][i-1], dp[2][i-1])+a1[i];
    dp[2][i]=max(dp[0][i-1], dp[1][i-1])+a2[i];
  }
  cout << max(dp[0][n], max(dp[1][n], dp[2][n]));
  return 0;
}
