#include <iostream>
using namespace std;

void calc(int x, int y) {
  if (x<=y&&y%2==0)
    cout << (y-1)*(y-1)+x << ' ';
  else if (x<=y&&y%2==1)
    cout << y*y-x+1<<' ';
  else if (x>y&&x%2==0)
    cout << x*x-y+1 << ' ';
  else if (x>y && x%2==1)
    cout << (x-1)*(x-1)+y << ' ';
}

int main() {
  long long x, y;
  int n;
  cin >> n;
  // while (n--) {
  //   cin >> x >> y;
  //   if (x <= y && y % 2 == 0)
  //     cout << y * y - 2 * y + x << endl;
  //   else if (x <= y && y % 2 == 1)
  //     cout << y * y - x + 1 << endl;
  //   else if (x > y && x % 2 == 0)
  //     cout << x * x - y + 1 << endl;
  //   else if (x > y && x % 2 == 1)
  //     cout << x * x - 2 * x + y << endl;
  // }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) calc(i, j);
    cout << endl;
  }
  return 0;
}
