#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e3 + 7;
char a[nmax][nmax];
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n, m; cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) a[i][j]='*';
  }
  for (int i = 2; i < n; ++i) {
    for (int j = 2; j < m; ++j) a[i][j]=' ';
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) cout << a[i][j];
    cout << endl;
  }
  return 0;
}
