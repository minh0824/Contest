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

struct PHANSO {
  int tu;
  int mau;
};

// mang phan so
PHANSO a[nmax];

void nhap() {
  for (int i = 0; i < nmax; ++i) {
    cin >> a[i].tu >> a[i].mau;
  }
}

void xuat() {
  for (int i = 0; i < nmax; ++i) {
    cout << a[i].tu << "/" << a[i].mau << " ";
  }
  cout << endl;
}

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

void rutgon() {
  for (int i = 0; i < nmax; ++i) {
    int uc = gcd(a[i].tu, a[i].mau);
    a[i].tu /= uc;
    a[i].mau /= uc;
  }
}

// dem so luong phan so am
int demAm() {
  int cnt = 0;
  for (int i = 0; i < nmax; ++i) {
    if (a[i].tu * a[i].mau < 0) ++cnt;
  }
  return cnt;
}

int demDuong() {
  int cnt = 0;
  for (int i = 0; i < nmax; ++i) {
    if (a[i].tu * a[i].mau > 0) ++cnt;
  }
  return cnt;
}

// tim phan so duong dau tien trong man
int timDuongDauTien() {
  for (int i = 0; i < nmax; ++i) {
    if (a[i].tu * a[i].mau > 0) return i;
  }
  return -1;
}

// tim phan so nho nhat
int timNhoNhat() {
  int res = a[0].tu * a[0].mau;
  for (int i = 1; i < nmax; ++i) {
    res = min(res, a[i].tu * a[i].mau);
  }
  return res;
}

// tim phan so lon nhat
int timLonNhat() {
  int res = a[0].tu * a[0].mau;
  for (int i = 1; i < nmax; ++i) {
    res = max(res, a[i].tu * a[i].mau);
  }
  return res;
}

// sap xep mang phan so
void sapXep() {
  for (int i = 0; i < nmax - 1; ++i) {
    for (int j = i + 1; j < nmax; ++j) {
      if (a[i].tu * a[i].mau > a[j].tu * a[j].mau) {
        swap(a[i], a[j]);
      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
