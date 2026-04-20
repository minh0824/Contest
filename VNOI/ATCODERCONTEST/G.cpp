#include <iostream>
#include <math.h>
#include <vector>
#include <cstring>

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

int n, m, dp[nmax];
bool visited[nmax];
vector<int> adj[nmax];

int dfs(int u) {
  if (dp[u]!=-1) return dp[u];
  int res{};
  for (int v : adj[u]) res = max(res, dfs(v)+1);
  return dp[u]=res;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y);
  }
  memset(dp, -1, sizeof dp);
  int ans{};
  for (int i = 1; i <= n; ++i) {
    ans=max(ans, dfs(i));
  }
  cout << ans << endl;
  return 0;
}
