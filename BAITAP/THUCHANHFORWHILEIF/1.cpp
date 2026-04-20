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
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    if (i%3==0 && i%5!=0) cout << "H ";
    else if (i%5==0 && i%3!=0) cout << "M ";
    else if (i%15==0) cout << "HM ";
    else cout << i << ' ';
  }
  return 0;
}
