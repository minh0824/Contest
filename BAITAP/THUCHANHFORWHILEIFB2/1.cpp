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

int n;
bool p[nmax];

void sieve() {
  for (int i = 1; i <= nmax; ++i) p[i]=1;
  p[1]=0;
  for (int i = 2; i <= nmax; ++i) {
    if (p[i]) for (int j = 2; 1ll*i*j<=nmax; ++j) {
      p[i*j]=0;
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  sieve();
  for (int i = 1; i <= n; ++i) {
    if (p[i]) cout << i << ' ';
  }
  return 0;
}
