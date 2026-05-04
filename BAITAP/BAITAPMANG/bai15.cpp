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

void select_sort(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    int mn=a[i];
    for (int j = i+1; j < n; ++j) mn=min(mn, a[j]);
    for (int j = i+1; j < n; ++j) { if (a[j]==mn) swap(a[j], a[i]); break; }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  return 0;
}
