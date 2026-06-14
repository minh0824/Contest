#include <iostream>
#include <math.h>
#include <cstring>
#include <random>
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

// Oxy
struct DIEM {
  int x;
  int y;
};

void nhap(DIEM &a) {
  cin >> a.x >> a.y;
}

void in(DIEM a) {
  cout << a.x << " " << a.y << endl;
}

void dis(DIEM a, DIEM b) {
  // distance between two points
  cout << sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)) << endl;
}

// symmetry via Ox
void symetryx(DIEM a) {
  cout << a.x << " " << -a.y << endl;
}

void symetryy(DIEM a) {
  cout << -a.x << " " << a.y << endl;
}

// kiem tra thuoc goc phan tu thu may?
void check(DIEM a) {
  if (a.x > 0 && a.y > 0) cout << "goc phan tu thu 1" << endl;
  else if (a.x < 0 && a.y > 0) cout << "goc phan tu thu 2" << endl;
  else if (a.x < 0 && a.y < 0) cout << "goc phan tu thu 3" << endl;
  else if (a.x > 0 && a.y < 0) cout << "goc phan tu thu 4" << endl;
  else cout << "goc phan tu thu 0" << endl;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
