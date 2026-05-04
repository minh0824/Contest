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
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  cin >> n;
  while(n<=0) {
    cin >> n;
  }
  ll s1{}, s2{}, s3{};
  for (int i = 1; i <= n; ++i) s1+=i;
  for (int i = 1; i <= 2*n+1; i+=2) s2+=i;
  for (int i = 2; i <= 2*n; i+=2) s3+=i;
  if (s1==n*(n+1)/2) cout << "s1 giong nhau" << endl;
  if (s2==(n+1)*(n+1)) cout << "s2 giong nhau" << endl;
  if (s3==n*(n+1)) cout << "s3 giong nhau" << endl;
  return 0;
}
