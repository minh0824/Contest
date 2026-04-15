 #include <iostream>
 #include <math.h>
 #include <queue>
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

int n, m, d[nmax];
bool visited[nmax];
vector<int> adj[nmax];

void bfs(int u) {
  queue<int> pq;
  pq.push(u);
  while(!visited[m]) {
    int v = pq.front(); pq.pop();
    if (2*v<nmax && !visited[2*v]) {
      visited[2*v] = 1;
      d[2*v]=d[v]+1;
      pq.push(2*v);
    }
    if (v-1>0 && !visited[v-1]) {
      visited[v-1] = 1;
      d[v-1]=d[v]+1;
      pq.push(v-1);
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    bfs(n);
  }
  cout << d[m];
  return 0;
}
