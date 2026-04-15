#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

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

int n, m, d[nmax];
bool visited[nmax];
vector<int> adj[nmax];


void bfs(int u) {
  queue<int> pq;
  pq.push(u);
  while (!pq.empty()) {
    int v = pq.front(); pq.pop();
    for (auto x : adj[v]) {
      if (!visited[x]) {
        d[x]=d[v]+1;
        visited[x]=1;
        pq.push(x);
      }
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
  bfs(1);
  for (int i = 2; i <= n; ++i) {
    cout << (d[i]>0?d[i]:-1) << ' ';
  }
  return 0;
}
