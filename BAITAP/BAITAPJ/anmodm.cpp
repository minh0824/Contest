#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

ll a, n, m;

ll indiot(ll a, ll b) {
  if (b==0) return 0;
  ll res = indiot(a, b/2)%m;
  res = res+res%m;
  if (b&1) res = res+a%m;
  return res;
}

ll indiotbinpow(ll a, ll b) {
  if(b==0) return 1;
  ll res = indiotbinpow(a, b/2)%m;
  res = indiot(res, res)%m;
  if (b&1) return indiot(res, a)%m;
  return res;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> a >> n >> m;
  cout << indiotbinpow(a, n);
  return 0;
}
