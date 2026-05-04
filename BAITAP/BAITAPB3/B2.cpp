#include "bits/stdc++.h"

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
  int n; cin >> n;
  int s4{}, s5{}, s6{};
  for (int i = 1; i <= n; ++i) {
    s4+=i*i;
    if (i&1) s5+=i*i*i;
    else s6+=i*i*i*i;
  }
  return 0;
}
