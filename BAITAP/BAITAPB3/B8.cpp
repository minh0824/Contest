#include "iostream"
using namespace std;
int main() {
  int n; cin >> n;
  int res = 1;
  for (int i = 1; i <= n; ++i) {
    if (n&1) { if (i&1) res*=i;}
    else {
      if(!(i&1)) res*=i;
    }
  }
  cout << res;
}
