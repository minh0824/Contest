#include "iostream"
using namespace std;

const int nmax = 1e3+7;
int n, a[nmax][nmax];

void task(int x1, int y1, int x2, int y2) {
  for (int i = x1; i <= x2; ++i) {
    for (int j = y1; j <= y2; ++j) {
      ++a[i][j];
    }
  }
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    task(a, b, c, d);
  }
  int ans{};
  for (int i = 1; i < nmax; ++i) {
    for (int j = 1; j < nmax; ++i) {
      cout << a[i][j] << ' ';
      if (a[i][j]>0) ++ans;
    }
    cout << endl;
  }
  cout << ans << endl;
  return 0;
}
