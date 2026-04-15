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

// bai toan tro thanh tim so cap a, b thoa man
// da[i]>=db[i];

int n, m, a, b, d[2][nmax];
bool visited[nmax];
vector<int> adj[nmax];

void bfs(int u, int k) {
  for (int i = 1; i <= n; ++i) visited[i]=0;
  queue<int> pq;
  pq.push(u);
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

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  // freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m >> a >> b;
  for (int i = 1; i <= m; ++i) {
    int x, y; cin >> x >> y;
    adj[x].pb(y); adj[y].pb(x);
  }
  bfs(a, 0); bfs(b, 1);
  int cnt = 0;
  for (int i = 1; i <= n; ++i) {
    if (d[0][i]>=d[1][i]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
