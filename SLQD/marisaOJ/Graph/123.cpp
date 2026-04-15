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
const int nmax = 1e3 + 7;

int dx[4] = {-1, 1, 0, 0};
int dy[4]  = {0, 0, -1, 1};
int n, m;
bool visited[nmax][nmax];
char a[nmax][nmax];

int dfs(int i, int j) {
  int cnt = (a[i][j]=='x')?1:0;
  visited[i][j]=1;
  for (int k = 0; k < 4; ++k) {
    int x = i + dx[k], y = j + dy[k];
    if (a[x][y]!='#'&&x>0&&y>0&&x<=n&&y<=m&&!visited[x][y]) {
      visited[x][y]=1;
      cnt=(a[x][y]=='x')?cnt+1:cnt;
      dfs(i, j);
    }
  }
  return cnt;
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
  vector<int> ans;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if (!visited[i][j]) {
        int cnt = dfs(i, j);
        if (cnt!=0) ans.pb(cnt);
      }
    }
  }
  sort(allin(ans));
  for (int i : ans) cout << i << ' ';
  return 0;
}
