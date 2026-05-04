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

int s1(int n) { return (n!=0)?n+s1(n-1):0; }
int s2(int n) { return (n!=0)?n*n+s2(n-1):0; }
double s3(double n) { return (n!=1)?1/n+s3(n-1):1; }
int p(int n) { return (n!=0)?n*p(n-1):1; }
int s4(int n) { return (n!=0)?p(n)+s4(n-1):1; }

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  return 0;
}
