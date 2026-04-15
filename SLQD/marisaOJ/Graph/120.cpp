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

int n, m;
bool visited[nmax], colored[nmax];
vector<int> adj[nmax];

void dfs(int u) {
  visited[u]=1;
  for (int v : adj[u]) {
    if (!visited[v]) {
      colored[v]=!colored[u];
      dfs(v);
    }
  }
}

void connectedComponents() {
  for (int i = 1; i <= n; ++i) {
    if (!visited[i]) dfs(i);
  }
}

bool check() {
  for (int i = 1; i <= n; ++i) {
    for (int j : adj[i]) {
      if (colored[i]==colored[j]) return 0;
    }
  }
  return 1;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> m;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  connectedComponents();
  cout << (check()?"YES":"NO");
  return 0;
}
