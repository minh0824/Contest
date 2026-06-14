#include <iostream>
#include <math.h>
#include <cstring>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <map>
#include <queue>
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
const int nmax = 1e5 + 7;

struct TAMGIAC {
  int a, b, c;
};

void nhap(TAMGIAC &t) {
  cin >> t.a >> t.b >> t.c;
}
void xuat(TAMGIAC t) {
  cout << t.a << " " << t.b << " " << t.c << endl;
}

int chuvi(TAMGIAC t) {
  return t.a + t.b + t.c;
}

int dientich(TAMGIAC t) {
  // heron
  double p = chuvi(t) / 2.0;
  return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
