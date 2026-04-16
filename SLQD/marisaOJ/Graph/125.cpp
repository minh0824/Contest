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

int n, m, k, d[nmax];
bool visited[nmax];
vector<int> doll, adj[nmax];

void bfs(int u) {
  queue<int> pq; pq.push(u);
  visited[u]=1;
  while (!pq.empty()) {
    int v = pq.front(); pq.pop();
    for (int x : adj[v]) {
      if (!visited[x]) {
        visited[x]=1;
        d[x]=d[v]+1;
        pq.push(x);
      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n >> m >> k;
  for (int i = 1; i <= k; ++i) {int x; cin >> x; doll.pb(x);}
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  bfs(n);
  int cnt = 0;
  for (int i : doll) {
    if (d[i]<=d[1]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
