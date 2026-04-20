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
const int nmax = 2e5 + 7;

int n, k;
ll dp[nmax][2];
void nhap() {
  cin >> n >> k;
  dp[1][0]=1; dp[1][1]=1;
}
void task() {
  for (int i = 2; i <= n; ++i) {
    dp[i][0]+=dp[i-1][0]+dp[i-1][1];
    if (i-k>0)
      dp[i][1]+=dp[i-k][0]+dp[i-k][1];
    else dp[i][1]=1;
    dp[i][0]%=mod, dp[i][1]%=mod;
  }
  cout << (dp[n][0]+dp[n][1])%mod;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  nhap();
  task();
  return 0;
}
