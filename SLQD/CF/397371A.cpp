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

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  ll n; int k; cin >> n >> k;
  vector<int> v;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n%i==0) {
        v.push_back(i);
        if (i*i!=n) {
            v.push_back(n/i);
        }
    }
  }
  sort(v.begin(), v.end());
  if (v.size()<k) cout << -1;
  else cout << v[k-1];
  return 0;
}
