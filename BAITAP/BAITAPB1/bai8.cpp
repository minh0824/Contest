#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    ll ans = binpow(a, b/2)*binpow(a, b/2);
    if (b%2) return ans*a;
    return ans;
}

signed main() {
  int x; cin >> x;
  cout << "a) y1 = " << 2*x*x*x + 5*x*x + 7*x + 15 << endl;
  cout << "b) y2 = " << sin(x)*sin(x) + cos(2*x)*cos(2*x) + tan(3*x)*tan(3*x) << endl;
  cout << "c) y3 = " << binpow(x+10, x+5) << endl;
  cout << "d) y4 = " << exp(cos(x+1))*3 << endl;
  cout << "e) y5 = " << log(x+100);
  return 0;
}
