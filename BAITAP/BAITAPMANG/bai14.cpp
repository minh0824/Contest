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

int a[nmax];

void fib(int n) {
  a[0]=0, a[1]=1;
  for (int i = 2; i <= n; ++i) a[i]=a[i-1]+a[i-2];
}

ll sumfib(int n) {
  return (n==1)?1:double(1)/a[n]+sumfib(n-1);
}

void rev(int a[], int n) {
  for (int i = n-1; i >= 0; --i) cout << a[i] << ' ';
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  return 0;
}
