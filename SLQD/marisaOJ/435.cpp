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
const int nmax = 1e5 + 7;

int p0[nmax], p1[nmax];
ll ans;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  // ti le 0/1 = x/y
  // (p1[r]-p1[l])*x == (p0[r]-p0[l])*y
  // p1[r]*x-p0[r]*y == p1[l]*x-p0[l]*y;
  int x, y;
  cin >> x >> y;
  string s; cin >> s;
  for (int i = 1; i <= sz(s); ++i) {
    p0[i]=p0[i-1]; p1[i]=p1[i-1];
    if (s[i-1]=='0') ++p0[i];
    if (s[i-1]=='1') ++p1[i];
  }
  map<ll, int> mp;
  for (int i = 1; i <= sz(s); ++i) {
    ++mp[p1[i-1]*x*1ll-p0[i-1]*y*1ll];
    ans += mp[p1[i]*x*1ll-p0[i]*y*1ll];
  }
  cout << ans;
  return 0;
}
