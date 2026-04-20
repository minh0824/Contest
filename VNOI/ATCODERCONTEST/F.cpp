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

string a, b;
int dp[nmax][nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> a >> b;
  int n = sz(a), m = sz(b);
  a=" "+a, b=" "+b;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      dp[i][j]=max(dp[i-1][j], max(dp[i][j-1], dp[i-1][j-1]));
      if (a[i]==b[j]) {
        dp[i][j]=max(dp[i][j], dp[i-1][j-1]+1);
      }
    }
  }
  cout << dp[n][m];
  return 0;
}
