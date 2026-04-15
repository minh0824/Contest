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

int f[4]={2000, 2500, 3000, 5000};
int cur[4];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int w; cin >> w;
  int i = -1, ans = 0;
  while (w>0){
    cur[++i]+=min(100, w); w-=100;
  }
  for (int j = 0; j < 4; ++j) ans+=cur[j]*f[j];
  cout << ans;
  return 0;
}
