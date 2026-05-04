#include <iostream>
#include <math.h>
#include <unordered_map>

using namespace std;

#define pb push_back
#define allin(a) a.begin(), a.end()

int n, a[30];
bool used[30];

void gen(int pos) {
  if (pos==n) {
    for (int i=0; i<n; ++i) cout << a[i];
    cout << endl;
    return;
  }
  for (int i = 1; i <= n; ++i) {
    if (!used[i]) {
      used[i]=1;
      a[pos]=i;
      gen(pos+1);
      used[i]=0;
    }
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(0);
  cin >> n;
  gen(0);
  return 0;
}
