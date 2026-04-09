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

int a[nmax];
ll p[nmax], ans;

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  // l->r/(r-l+1) == k
  // l->r == (k + k + ... + k)
  // (l-k) + (l+1-k) + ... + (r-k) = 0;
  // bài toán chuyển thành tạo mảng tiền tố với a[i]-k;
  // đếm số cặp (l, r) sao cho tổng từ a[l]->a[r]=0;
  int n, k; cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    p[i]=p[i-1]+a[i]-k;
  }
  map<ll, int> mp;
  for (int i = 1; i <= n; ++i) {
    ++mp[p[i-1]];
    ans+=mp[p[i]];
  }
  cout << ans;
  return 0;
}
