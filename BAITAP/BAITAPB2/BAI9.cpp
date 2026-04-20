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

string check(char a, char b) {
  if (a=='B') {
    if (b=='O') return "nguoi thu 2";
    if (b=='K') return "nguoi thu 1";
  }
  if (a=='O') {
    if (b=='B') return "nguoi thu 1";
    if (b=='K') return "nguoi thu 2";
  }
  if (a=='K') {
    if (b=='B') return "nguoi thu 2";
    if (b=='O') return "nguoi thu 1";
  }
  return "hoa";
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  char a, b; cin >> a >> b;
  // 1<2<3<1
  cout << check(a, b);
  return 0;
}
