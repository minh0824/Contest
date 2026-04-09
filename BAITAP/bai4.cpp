#include <iostream>

using namespace std;

signed main() {
  int toan, van, ly, anh, hoa, sinh;
  cin >> toan >> van >> ly >> anh >> hoa >> sinh;
  cout << (toan*3+2*(van+ly+anh)+hoa+sinh)/11;
  return 0;
}
