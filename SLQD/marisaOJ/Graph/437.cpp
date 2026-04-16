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

int n, m, k, d[11][nmax];
bool visited[nmax];
vector<int> adj[nmax];

void bfs(int u) {
  visited[u]=1;
  queue<int> pq; pq.push(u);
  while (!pq.empty()) {
    int v = pq.front(); pq.pop();
    for (int i = 1; i <= k; ++i) {
      for (int x : adj[v]) {

      }
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);


  return 0;
}
