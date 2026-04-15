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
// d = sqrt((x1-x2)^2+(y1-y2)^2);
double calc(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1-x2, 2)+pow(y1-y2,2));
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  double x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
  cout << "(" << (x1+x2)/2 << ", " << (y1+y2) << ")" << endl;
  cout << calc(x1, y1, x2, y2) << endl;
  return 0;
}
