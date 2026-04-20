#include <iostream>
#include <math.h>
#include <vector>

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

int n, ans, a[nmax], dp[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    dp[i]=1;
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = i-1; j > 0; --j) {
      if (a[i]>a[j]) dp[i]=max(dp[j]+1, dp[i]);
    }
  }
  for (int i = 1; i <= n; ++i) ans=max(ans, dp[i]);
  cout << ans;
  return 0;
}
