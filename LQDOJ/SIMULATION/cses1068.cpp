#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
typedef long long ll;
const int nmax = 2e5 + 7;

int n, t, a[nmax], p[nmax];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> t;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    p[i]=p[i-1]+a[i];
  }
  auto check = [&](int len) -> bool {
    int cur = p[len];
    for (int i = len; i <= n; ++i) cur=min(cur, p[i]-p[i-len]);
    return cur<=t;
  };
  int l = 0, r = n+1, ans{};
  while (l<=r) {
    int mid = (l+r)/2;
    if (check(mid)) {
      ans = mid;
      l = mid+1;
    }
    r = mid-1;
  }
  cout << ans;
  return 0;
}
