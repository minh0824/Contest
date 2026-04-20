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
int n, a[nmax], b[nmax];
ll dp[2][nmax];
void nhap() {
  for (int i = 1; i <= n; ++i) cin >> a[i];
  for (int i = 1; i <= n; ++i) cin >> b[i];
  dp[0][1]=a[1], dp[1][1]=b[1];
}
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  nhap();
  for (int i = 2; i <= n; ++i) {
    dp[0][i]=max(dp[1][i-1], dp[1][i-2]+a[i-1])+a[i];
    dp[1][i]=max(dp[0][i-1], dp[0][i-2]+b[i-1])+b[i];
  }
  cout << max(dp[0][n], dp[1][n]);
  return 0;
}
