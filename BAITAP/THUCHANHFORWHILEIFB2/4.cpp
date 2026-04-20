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

pair<int, int> p1, p2;

// calc(pair<int, int> a): tra ve phan so toi gian cua a;
pair<int,int> calc(pair<int,int> a) {
  int x = a.ff, y = a.ss;
  int res = 1;
  for (int i = 1; i <= min(x, y); ++i) {
    if (x%i==0 && y%i==0) res = i;
  }
  return {a.ff/res, a.ss/res};
}

void in(pair<int,int> a) {
  cout << a.ff << '/' << a.ss << endl;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> p1.ff >> p1.ss >> p2.ff >> p2.ss;
  p1=calc(p1), p2=calc(p2);
  pair<int, int> tong = calc({p1.ff+p2.ff, p1.ss+p2.ss});
  pair<int, int> hieu = calc({p1.ff-p2.ff, p1.ss-p2.ss});
  pair<int, int> tich = calc({p1.ff*p2.ff, p1.ss*p2.ss});
  pair<int, int> thuong = calc({p1.ff*p2.ss, p1.ss*p2.ff});
  in(tong), in(hieu), in(tich), in(thuong);
  return 0;
}
