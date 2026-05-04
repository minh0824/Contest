#include "iostream"
using namespace std;

const int nmax = 107;

int di[4] = {0, 1, 0, -1};
int dj[4] = {1, 0, -1, 0};
int n, m, cur, a[nmax][nmax];

int main() {
  cin >> n >> m;
  int i = 1, j = 1, k{}, cnt{};
  while (cnt < n * m) {
    cnt++;
    a[i][j] = cnt;
    int ii = i+di[k], jj = j+dj[k];
    if (ii<=0||ii>n||jj<=0||jj>m||a[ii][jj]!=0) k=(k+1)%4;
    i+=di[k], j+=dj[k];
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j)
      cout << a[i][j] << ' ';
    cout << endl;
  }
  return 0;
}
