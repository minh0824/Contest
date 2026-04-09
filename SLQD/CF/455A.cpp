#include <bits/stdc++.h>

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
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    int x; cin >> x;
    ++cnt[x];
  }
  f[1]=cnt[1];
  for (int i = 2; i <= n; ++i) {
    f[i]=max(f[i-1], 1ll*f[i-2]+cnt[i]*i);
    ans = max(ans, f[i]);
  }
  cout << ans << endl;
  return 0;
}
