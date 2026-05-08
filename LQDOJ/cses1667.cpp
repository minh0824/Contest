#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e3 + 7;

int dx[4]={0, 0, 1, -1};
int dy[4]={1, -1, 0, 0};
//         R, L, D, U
int n, m, d[nmax][nmax];
bool a[nmax][nmax];
pair<int, int> st, en, parent[nmax][nmax];

void bfs(int x, int y) {
  queue<pair<int,int>> q; q.push({x, y});
  a[x][y]=1;
  while(!q.empty()) {
    pair<int, int> u = q.front(); q.pop();
    int i = u.ff, j = u.ss;
    for (int k = 0; k < 4; ++k) {
      int ii = i+dx[k], jj = j+dy[k];
      if (ii>0&&jj>0&&ii<=n&&jj<=m&&!a[ii][jj]) {
        a[ii][jj]=1;
        d[ii][jj]=d[i][j]+1;
        parent[ii][jj]={i, j};
        q.push({ii, jj});
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
      char x; cin >> x;
      if (x=='#') a[i][j]=1;
      if (x=='A') {
        st={i, j};
      } else if (x=='B') en={i, j};
    }
  }
  // for (int i = 1; i <= n; ++i) {
  //   for (int j = 1; j <= m; ++j) cout << a[i][j];
  //   cout << endl;
  // }
  bfs(st.ff, st.ss);
  if (d[en.ff][en.ss]==0) {
    cout << "NO";
    return 0;
  }
  int i = en.ff, j = en.ss;
  cout << "YES" << endl << d[i][j] << endl;
  vector<char> v;
  while (en!=st) {
    i = en.ff, j = en.ss;
    int ii = parent[i][j].ff, jj = parent[i][j].ss;
    for (int k = 0; k < 4; ++k) {
      if (ii+dx[k]==i&&jj+dy[k]==j) {
        if (k==0) {
          v.pb('R');
        } else if (k==1) {
          v.pb('L');
        } else if (k==2) {
          v.pb('D');
        } else v.pb('U');
      }
    }
    en.ff=ii, en.ss=jj;
    // cout << ii << ' ' << jj << endl;
  }
  reverse(allin(v));
  for (char s : v) cout << s;
  return 0;
}
