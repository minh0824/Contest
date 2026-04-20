#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

int n, dp[nmax];
pair<int, int> a[nmax];

bool cmp(pair<int, int> a, pair<int, int> b) {
  if (a.ss == b.ss)
    return a.ff<b.ff;
  return a.ss<b.ss;
}

void updt(int i, int j) {
  for (int i = i; i <= j; ++i) dp[i]=max(dp[i-1], dp[i]);
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i].ff >> a[i].ss;
  }
  sort(a+1, a+n+1, cmp);
  for (int i = 1; i <= n; ++i) {
    updt(a[i-1].ss, a[i].ss);
    dp[a[i].ss]=max(dp[a[i].ff-1]+a[i].ss-a[i].ff+1, dp[a[i].ss]);
  }
  cout << dp[a[n-1].ss];
  return 0;
}
