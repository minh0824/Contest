#include "iostream"

using namespace std;

typedef long long ll;
const int nmax = 1e6+7;

int n, sp;
int a[nmax];

bool check(ll mid) {
  long long tongsp{};
  for (int i = 1; i <= n; ++i) {
    tongsp+=mid/a[i];
    if (tongsp>=sp) return 1;
  }
  return 0;
}

int main() {
  cin >> n >> sp;
  for (int i = 1; i <= n; ++i) cin >> a[i];
  ll lo = 1, hi = 1e18+7, kq{};
  while (lo<=hi) {
    ll mid = lo + (hi-lo)/2;
    if (check(mid)) {
      hi=mid-1;
      kq=mid;
    } else lo=mid+1;
  }
  cout << kq;
  return 0;
}
