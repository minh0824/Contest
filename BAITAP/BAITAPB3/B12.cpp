#include "iostream"
using namespace std;
int main() {
  int x{}, cnt{}, ans{};
  cin >> x;
  while (x!=9999) {
    ++cnt;
    ans+=x;
    cin >> x;
  }
  cout << double(ans)/double(cnt);
  return 0;
}
