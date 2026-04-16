#include <iostream>
#include <math.h>
#include <vector>
#include <queue>

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

int n, m, a, b, d[2][nmax];
bool visited[2][nmax];
vector<int> adj[nmax];

void bfs(int k, int u) {
  queue<int> pq; pq.push(u);
  visited[k][u] = 1;
  while (!pq.empty()) {
    int v = pq.front(); pq.pop();
    for (int x : adj[v]) {
      if (!visited[k][x]) {
        visited[k][x]=1;
        d[k][x]=d[k][v]+1;
        pq.push(x);
      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m >> a >> b;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  bfs(0, a), bfs(1, b);
  int ans = mod;
  for (int i = 1; i <= n; ++i) {
    if (d[0][i]%2==d[1][i]%2) ans=min(ans, (d[0][i]+d[1][i])/2);
  }
  cout << ((ans!=mod)?ans:-1);
  return 0;
}

// O--O--O--O--O--O
// |     |     |
// O     O-----O
