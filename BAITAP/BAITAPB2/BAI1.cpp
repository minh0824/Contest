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

double calc(double a, double b, double c) {
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  double a, b, c; cin >> a >> b >> c;
  if(a+b>c&&a+c>b&&b+c>a) cout << calc(a, b, c) << endl << a+b+c;
  return 0;
}
