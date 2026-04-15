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

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  // ax+b=0?
  int a, b; cin >> a >> b;
  // a==0 && b!=0 -> phuong trinh vo nghiem :)
  // a!=0; phuong trinh co nghiem duy nhat;
  // a==0 && b==0; phuong trinh co vo so nghiem;
  if (!a && !b) cout << "infinite solutions";
  if (a && b) cout << "one solution";
  else cout << "no solution";
  return 0;
}
