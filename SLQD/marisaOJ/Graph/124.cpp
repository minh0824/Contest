#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>

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

int n;
pair<int, int> a[nmax];

bool calc(int x1, int y1, int x2, int y2, double mid) {
  return pow(x1-x2, 2)+pow(y1-y2, 2)<=4*mid*mid;
}

void dfs(int i, vector<int> adj[], bool visited[]) {
  visited[i]=1;
  for (int j : adj[i]) {
    if (!visited[j]) {
      visited[j]=1;
      dfs(j, adj, visited);
    }
  }
}

bool isConnectedComponent(bool visited[]) {
  for (int i = 1; i <= n; ++i) {
    if (!visited[i]) return 0;
  }
  return 1;
}

bool check(double mid) {
  bool visited[nmax];
  for (int i = 1; i <= n; ++i) visited[i]=0;
  vector<int> adj[nmax];
  for(int i = 1; i <= n; ++i) {
    for (int j = i+1; j <= n; ++j) {
      if (calc(a[i].ff, a[i].ss, a[j].ff, a[j].ss, mid)) {
        adj[i].pb(j); adj[j].pb(i);
      }
    }
  }
  dfs(1, adj, visited);
  return isConnectedComponent(visited);
}


signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int x, y; cin >> x >> y;
    a[i]={x, y};
  }
  double l = 0, r = 1e9, eps = 1e-8;
  while (r-l>eps) {
    double mid = l + (r-l)/2;
    if (check(mid)) r=mid;
    else l=mid;
  }
  cout << setprecision(6) << fixed << r << endl;
  return 0;
}
