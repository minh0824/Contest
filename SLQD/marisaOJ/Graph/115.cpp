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
bool visited[nmax];
vector<int> adj[nmax];

void dfs(int u) {
  visited[u]=1;
  for (int v : adj[u]) {
    if (!visited[v]) {
      visited[v]=1;
      dfs(v);
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n, m; cin >> n >> m;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  int cnt = 0;
  for (int i = 1; i <= n; ++i) {
    if (!visited[i]) {
      dfs(i);
      ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
