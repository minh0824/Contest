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
int a, b;
int ucln(int a, int b) {
  int ans{};
  for (int i = 1; i <= min(a, b); ++i) {
    if (a%i==0 && b%i==0) ans=i;
  }
  return ans;
}
int bcnn(int a, int b) {
  int ans{};
  for (int i = max(a, b); i <= a*b; ++i) {
    if (i%a==0 && i%b==0) ans=i;
  }
  return ans;
}
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> a >> b;
  cout << ucln(a, b) << ' ' << bcnn(a, b);
  return 0;
}
