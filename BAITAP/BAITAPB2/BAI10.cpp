 #include <iostream>
 #include <math.h>

using namespace std;

string s[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main() {
  int i = 0; while (i<1||i>7) cin >> i;
  cout << s[i-1];
  return 0;
}
