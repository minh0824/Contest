#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 5e3 + 7;

int n, a[nmax], x;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> x;
  vector<int> v;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    v.pb(a[i]);
  }
  pair<int, pair<int,int>> ans{}, res{};
  sort(allin(v));
  for (int i = 1; i < n; ++i) {
    for (int j = i+1; j < n-1; ++j) {
      int k = lower_bound(v.begin()+j+1, v.end(), x-v[i]-v[j])-v.begin();
      if (j<k&&k<n) ans={v[i], {v[j], v[k]}};
    }
  }
  cout << ans.ff << ' ' << ans.ss.ff << ' ' << ans.ss.ss << endl;
  if (ans!=res) {
    int x1{}, x2{}, x3{};
    for (int i = 1; i <= n; ++i) {
      if (ans.ff==a[i]) x1=i;
    }
    for (int i = 1; i <= n; ++i) {
      if (ans.ss.ff==a[i]&&i!=x1) x2=i;
    }
    for (int i = 1; i <= n; ++i) {
      if (ans.ss.ss==a[i]&&i!=x2&&i!=x1) x3=i;
    }
    if (x1!=0&&x2!=0&&x3!=0) cout<<x1<<' '<<x2<<' '<<x3;
    else cout << "IMPOSSIBLE";
  } else cout << "IMPOSSIBLE";
  return 0;
}
