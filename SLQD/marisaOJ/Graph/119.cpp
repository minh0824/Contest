 #include <iostream>
 #include <queue>
 // #include <iomanip>
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
const int nmax = 1e3 + 7;

int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
int n, m, d[nmax][nmax];
bool visited[nmax][nmax];
char a[nmax][nmax];

void bfs(int i, int j) {
  queue<pair<int,int>> pq;
  pq.push({i, j});
  while (!pq.empty()) {
    pair<int, int> v = pq.front(); pq.pop();
    for (int k = 0; k < 4; ++k) {
      int x = v.ff+dx[k], y = v.ss+dy[k];
      if (!visited[x][y]&&x>0&&x<=n&&y>0&&y<=m&&a[x][y]=='0') {
        visited[x][y]=1;
        d[x][y]=d[v.ff][v.ss]+1;
        pq.push({x, y});
      }
    }
  }

}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      cin >> a[i][j];
    }
  }
  bfs(1, 1);
  cout << (d[n][m]!=0?d[n][m]:-1);
  return 0;
}
