#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 2e3 + 7;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int n, a[nmax][nmax], d[nmax][nmax];
bool visited[nmax][nmax], visitedval[100];
vector<pair<int, int>> val[100], adj[nmax][nmax];

void bfs(int i, int j) {
  queue<pair<int, int>> pq;
  pq.push({i, j});
  while (!pq.empty()) {
    pair<int,int> v = pq.front(); pq.pop();
    for (int k = 0; k < 4; ++k) {
      int x = v.ff+dx[k], y = v.ss+dy[k];
      if (!visited[x][y]&&x>0&&y>0&&x<=n&&y<=n) {
        visited[x][y]=1;
        d[x][y]=d[v.ff][v.ss]+1;
        pq.push({x, y});
      }
    }
    // dong thoi bfs den nhung canh noi dich chuyen
    for (pair<int, int> x : adj[v.ff][v.ss]) {
      if (!visited[x.ff][x.ss] && !visitedval[a[v.ff][v.ss]]) {
        visited[x.ff][x.ss]=1;
        d[x.ff][x.ss]=d[v.ff][v.ss]+1;
        pq.push({x.ff, x.ss});
      }
    }
    visitedval[a[v.ff][v.ss]]=1;
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      cin >> a[i][j];
      for(pair<int,int> k : val[a[i][j]]) {
        adj[k.ff][k.ss].pb({i, j});
        adj[i][j].pb({k.ff, k.ss});
      }
      val[a[i][j]].pb({i, j});
    }
  }
  bfs(1, 1);
  cout << d[n][n];
  return 0;
}
