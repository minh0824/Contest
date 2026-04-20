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

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  vector<int> v;
  int n; cin >> n;
  for (int i = 1; i <= sqrt(n); ++i) {
    if (n%i==0) {
      v.pb(i);
      if (i*i!=n) v.pb(n/i);
    }
  }
  sort(allin(v));
  for (int i : v) cout << i << ' ';
  return 0;
}
