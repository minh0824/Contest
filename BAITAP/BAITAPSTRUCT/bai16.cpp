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

struct DIEM {
  int x, y;
};

void nhap(DIEM &d) {
  cin >> d.x >> d.y;
}
void xuat(DIEM d) {
  cout << d.x << " " << d.y << endl;
}

// dem so luong diem co hoanhh do duong
int dem(DIEM a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i].x >= 0) ++cnt;
  }
  return cnt;
}

// dem so luong diem khong trung voi cac diem khac trong mang
int demKhongTrung(DIEM a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    bool ok = true;
    for (int j = 0; j < i; ++j) {
      if (a[i].x == a[j].x && a[i].y == a[j].y) {
        ok = false;
        break;
      }
    }
    if (ok) ++cnt;
  }
  return cnt;
}

// tim diem co hoanh do lon nhat
DIEM timMax(DIEM a[], int n) {
  DIEM res = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i].x > res.x) res = a[i];
  }
  return res;
}

// tim diem co hoanh do nho nhat
DIEM timMin(DIEM a[], int n) {
  DIEM res = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i].x < res.x) res = a[i];
  }
  return res;
}

// tim diem gan goc toa do nhat
DIEM timGanGoc(DIEM a[], int n) {
  DIEM res = a[0];
  for (int i = 1; i < n; ++i) {
    if (sqrt(a[i].x * a[i].x + a[i].y * a[i].y) < sqrt(res.x * res.x + res.y * res.y)) res = a[i];
  }
  return res;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
