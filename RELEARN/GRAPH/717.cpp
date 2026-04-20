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
const int nmax = 1e5 + 7;

int n, m, parent[nmax];
bool visited[nmax];
vector<int> adj[nmax];

bool dfs(int u) {
  visited[u]=1;
  for (int v : adj[u]) {
    if (!visited[v]) {
      parent[v]=u;
      if (dfs(v)) return 1;
    }
    else if (v!=parent[u]) return 1;
  }
  return 0;
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
    if (!visited[i]) {
      if (dfs(i)) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
