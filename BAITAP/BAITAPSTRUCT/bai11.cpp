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

struct DATHUC {
  int heso;
  int mu;
};

void nhap(DATHUC &a) {
  cin >> a.heso >> a.mu;
}

void in(DATHUC a) {
  cout << a.heso << "x^" << a.mu << endl;
}

void TICH(DATHUC a, DATHUC b, DATHUC &c) {
  c.heso = a.heso * b.heso;
  c.mu = a.mu + b.mu;
}

void THUONG(DATHUC a, DATHUC b, DATHUC &c) {
  c.heso = a.heso / b.heso;
  c.mu = a.mu - b.mu;
}

void DAOHAM(DATHUC a, DATHUC &b) {
  b.heso = a.heso * a.mu;
  b.mu = a.mu - 1;
}

// tinh gia tri cua don thuc tai x = x0
int TINHGIATRI(DATHUC a, int x0) {
  return a.heso * pow(x0, a.mu);
}
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  return 0;
}
