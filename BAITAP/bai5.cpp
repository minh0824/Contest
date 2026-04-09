#include <iostream>

using namespace std;

signed main() {
  float a, b;
  cout << "Nhập số thực thứ nhất: ";
  cin >> a;
  cout << "Nhập số thực thứ hai: ";
  cin >> b;
  cout << "I. " << a+b << endl;
  cout << "II. " << a-b << endl;
  cout << "III. " << a*b << endl;
  if (b!=0) cout << "IV. " << a/b << endl;
  cout << "V. " << (a+b)/2;
  return 0;
}
