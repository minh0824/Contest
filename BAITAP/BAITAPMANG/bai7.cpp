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

int gt(int n) { return (n==0)?1:n*gt(n-1); }
int ham1(int n) { return (n==0)?1:gt(n)+ham1(n-1); }
int gt1(int n) { return (n==0)?1:gt1(n-1)*(n&1)?n:1; }
int gt2(int n) { return (n==0)?1:gt2(n-1)*(n&1)?1:n; }

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  return 0;
}
