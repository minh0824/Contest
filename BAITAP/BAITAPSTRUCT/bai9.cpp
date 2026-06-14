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

PHANSO a;

void nhapxuat() {
  cin >> a.tu >> a.mau;
}

int gcd(int a, int b) {
  if (b==0) return a;
  return gcd(b%a, a);
}
PHANSO RUTGON(PHANSO x) {
  int uc = gcd(x.tu, x.mau);
  x.tu/=uc, x.mau/=uc;
  return x;
}

void TONG(PHANSO x, PHANSO y) {
  int tu = x.tu * y.mau + y.tu * x.mau;
  int mau = x.mau * y.mau;
  PHANSO res = {tu, mau};
  cout << res.tu << "/" << res.mau << endl;
}

void HIEU(PHANSO x, PHANSO y) {
  int tu = x.tu * y.mau - y.tu * x.mau;
  int mau = x.mau * y.mau;
  PHANSO res = {tu, mau};
  cout << res.tu << "/" << res.mau << endl;
}

void TICH(PHANSO x, PHANSO y) {
  int tu = x.tu * y.tu;
  int mau = x.mau * y.mau;
  PHANSO res = {tu, mau};
  cout << res.tu << "/" << res.mau << endl;
}

void THUONG(PHANSO x, PHANSO y) {
  int tu = x.tu * y.mau;
  int mau = x.mau * y.tu;
  PHANSO res = {tu, mau};
  cout << res.tu << "/" << res.mau << endl;
}

void PSTOIGIAN(PHANSO x) {
  PHANSO temp = x;
  x=RUTGON(x);
  if (x.tu==temp.tu && x.mau==temp.mau) cout << "YES";
  else cout << "NO";
}

void QUYDONG(PHANSO x, PHANSO y) {
  PHANSO res = {x.tu * y.mau, x.mau * y.mau};
  cout << res.tu << "/" << res.mau << endl;
}

void KIEMTRA(PHANSO x) {
  if (x.tu*x.mau<0) cout << "AM";
  else cout << "DUONG";
}

void SOSANH(PHANSO x, PHANSO y) {
  if (x.tu * y.mau > y.tu * x.mau) cout << "GREATER";
  else if (x.tu * y.mau < y.tu * x.mau) cout << "LESS";
  else cout << "EQUAL";
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);


  return 0;
}
