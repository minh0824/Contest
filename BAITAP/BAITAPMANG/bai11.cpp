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

int timNhoNhat(int a[], int n) {
  int res=1e9;
  for (int i = 0; i < n; ++i) res=min(res, a[i]);
  return res;
}
double trungbinh(int a[], int n) {
  double ans{};
  for (int i = 0; i < n; ++i) ans+=a[i];
  return ans/(double)n;
}
int timkiem(int a[], int n, int k) {
  for (int i = 0; i < n; ++i) if (a[i]==k) return i+1;
  return -1;
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  return 0;
}
