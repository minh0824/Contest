#include "iostream"
using namespace std;
int main() {
  int n;
  cin >> n;
  double s7{}, s8{}, s9{};
  int fac = 1;
  for (int i = 1; i <= n; ++i) {
    fac *= i;
    s7 += double(1) / i;
    s8 += double(1) / i * i;
    s9 += double(1) / fac;
  }
  cout << s7 << ' ' << s8 << ' ' << s9;
}
