#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>

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

int n, m, k, p[nmax], d[2][nmax];
bool visited[nmax];
vector<int> adj[nmax];

void red() {
  for (int i = 1; i <= n; ++i) {
    d[0][i]=0; d[1][i]=0;
  }
}

void bfs(int k, int u) {
  for (int i = 1; i <= nmax; ++i) visited[i]=0;
  queue<int> pq; pq.push(u);
  visited[u]=1;
  while (!pq.empty()) {
    int v = pq.front(); pq.pop();
    for (int x : adj[v]) {
      if (!visited[x]) {
        visited[x]=1;
        d[k][x]=d[k][v]+1;
        pq.push(x);
      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> m >> k;
  for (int i = 1; i <= k; ++i) cin >> p[i];
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  int ans = mod;
  for (int a = 1; a <= n; ++a) {
    for (int b = 1; b <= n; ++b) {
      red();
      bfs(0, a), bfs(1, b);
      int cur = 0;
      for (int i = 1; i <= k; ++i) cur+=min(d[0][i], d[1][i]);
      ans = min(ans, cur);
    }
  }
  cout << ans;
  return 0;
}
