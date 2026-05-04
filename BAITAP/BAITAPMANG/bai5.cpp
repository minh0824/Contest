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

int f1=0,f2=1,f3;
string s;

void fib(int n) {
  for (int i = 1; i <= n; ++i) {
    if (i==1) s+="0";
    else if (i==2) s+="1";
    else { f3=f2+f1, f1=f2, f2=f3, s+=to_string(f3); }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  fib(5);
  cout << s;
  return 0;
}
