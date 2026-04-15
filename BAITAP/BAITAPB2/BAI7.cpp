 #include <iostream>
 #include <math.h>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

double root = 650000;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int tnct; cin >> tnct;
  if (tnct<12) cout << 1.92*root;
  else if (tnct<36) cout << 2.34*root;
  else if (tnct<60) cout << 3*root;
  else cout << 4.5*root;
  return 0;
}
