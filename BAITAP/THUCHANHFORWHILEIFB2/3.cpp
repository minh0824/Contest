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

int n;
double t, r;

// calc: tinh so tien gui sau n nam
double calc(double n, double t, double r) {
  for (int i = 1; i <= n; ++i) {
    t = t*(1+r/100);
  }
  return t;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  // n: so nam gui; t: khoan tien ban dau; r: lai suat;
  cin >> n >> t >> r;
  cout << calc(n, t, r);
  return 0;
}
