 #include <bits/stdc++.h>

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

int a[nmax], f[nmax];

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  f[2]=1;f[1]=1;
  for (int i = 1; i <= m; ++i) {
    int x; cin >> x;
    a[x]=1;
  }
  for (int i = 1; i <= n; ++i) {
    if (!a[i-1] && !a[i]) f[i]+=f[i-1]%mod;
    if (!a[i-2] && !a[i]) f[i]+=f[i-2]%mod;
    f[i]%=mod;
  }
  cout << f[n] << endl;
  return 0;
}
