#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9+7;
const int nmax = 2e5+7;

int n, m, cnt, ans, visited[nmax];
vector<int> adj[nmax];
vector<pair<int,int>> d;

void bfs(int i) {
  queue<int> q;
  q.push(i);
  while (!q.empty()) {
    int u = q.front(); q.pop();

  }
}

void dfs(int u) {
  visited[u]=cnt;
  d.pb({cnt, u});
  for (int v : adj[u]) {
    if (visited[v]==0) {
      dfs(v);
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  for (int i = 1; i <= n; ++i) {
    if (visited[i]==0) {
      ++cnt;
      dfs(i);
    }
  }
  cout << cnt-1 << endl;
  // for (int i = 1; i <= n; ++i) cout << i << ' ' << visited[i] << endl;
  sort(allin(d));
  for(int i = 1; i < sz(d); ++i) {
    if (d[i].ff!=d[i-1].ff) cout << d[i-1].ss << ' ' << d[i].ss << endl;
  }
  return 0;
}
