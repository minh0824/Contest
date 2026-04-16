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
const int nmax = 1e5 + 7;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n; cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n-3; ++i) {
    for (int j = i+1; j <= n-2; ++j) {
      for (int k = j+1; k <= n-1; ++k) {
        for (int l = k+1; l <= n; ++l) {
          if (i+j+k+l==n) ++cnt;
        }
      }
    }
  }
  cout << cnt;
  return 0;
}
