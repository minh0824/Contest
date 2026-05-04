#include "iostream"
using namespace std;
const int nmax = 1e5+7;
int a[nmax];
int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  int ans{};
  for (int i = 1; i <= n; ++i) ans+=a[i]/n;
  cout << ans;
  return 0;
}
