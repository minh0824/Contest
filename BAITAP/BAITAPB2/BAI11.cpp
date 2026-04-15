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

string s[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "Septembert", "October", "November", "December"};

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int i=0; while (i<1||i>12) cin >> i;
  cout << s[i-1];
  return 0;
}
