#include <iomanip>
#include <iostream>
#include <math.h>
#include <utility>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef long long ll;

#define inf 0x3f3f3f3f
#define sinf 0xcfcfcfcf
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e6 + 7;

int modInv(int a, int m){
    int x, y;
    d = extEuclid(a, m, x, y); // hàm euclid mở rộng ở bài Thuật toán Euclid
    if (d != 1) return -1; // không tồn tại nghịch đảo modulo
    x = (x % m + m) % m;
    return x; // nghịch đảo modulo
}

vector<int> facInv (int n, int m){
    int v = 1;
    for(int x = 2; x <= n; ++x){
        v = (1ll * v * x) % m;
    }
    vector<int> inv(n + 1, 1);
    inv[n] = modInv(v, m);
    for(int i = n; i >= 1; --i){
        inv[i - 1] = (1ll * inv[i] * i) % m;
    }
    return inv;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int q; cin >> q;
  while (q--) {
    int n, k; cin >> n >> k;
  }
  return 0;
}
