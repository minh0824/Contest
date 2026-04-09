 #include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

int a[nmax];
ll p[nmax], f[nmax], f_min, p_min;
ll l[nmax], r[nmax];

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n; cin >> n;
  // f && p prefix
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    f[i]=f[i-1]+a[i];
  }
  for (int i = n; i >= 1; --i) {
    p[i]=p[i+1]+a[i];
  }

  // l && r array, remember that we must need to choose at least 2 value :)
  l[0]=f[1], r[n+1]=p[n];
  for (int i = 1; i <= n; ++i) {
    l[i]=max(l[i-1], f[i]-f_min);
    f_min=min(f_min, f[i]);
    // cout << l[i] << endl;
  }
  for (int i = n; i >= 1; --i) {
    r[i]=max(r[i+1], p[i]-p_min);
    p_min=min(p_min, p[i]);
    // cout << r[i] << endl;
  }

  // find maximun value
  ll ans = f[1]+p[2];
  for (int i = 1; i < n; ++i) {
    ans = max(ans, l[i]+r[i+1]);
  }
  cout << ans;
  return 0;
}
