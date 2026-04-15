 #include <iostream>
 #include <math.h>

using namespace std;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int in, out; cin >> in >> out;
  int cnt = 0;
  double ans = 0, cost = 30000;
  for (int i = in+1; i <= out; ++i) {
    ++cnt;
    if (cnt>3) cost=30000*0.7;
    if (i>=8 && i<=17) ans+=cost*0.9;
    else ans+=cost;
  }
  cout << ans;
  return 0;
}
