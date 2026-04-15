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

double calc(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

double heron(double a, double b, double c) {
  double p = (a+b+c)/3;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  double d1, d2, d3;
  cout<<'('<<(x1+x2+x3)/3<<", "<<(y1+y2+y3)/3<<")"<<endl;
  d1 = calc(x1, y1, x2, y2);
  d2 = calc(x1, y1, x3, y3);
  d3 = calc(x2, y2, x3, y3);
  cout << heron(d1, d2, d3) << endl << d1+d2+d3;
  return 0;
}
