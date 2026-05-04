#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

typedef unsigned long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 1e5 + 7;

char hama(char i) {
  return tolower(i);
}

void hamb(int a, int b) {
  // y=ax+b;
  // x=0 b!=0 vo nghiem
  // x=0 b=0 vo so nghiem
  // x!=0 b!=0 mot nghiem
  if (a==0&&b==0) cout << "vo so nghiem";
  else if (b!=0) cout << "vo nghiem";
  else cout << "mot nghiem";
}

void hamc(int a, int b, int c) {
  //y=ax^2+bx+c;
  int delta = b*b-4*a*c;
  if (a==0) hamb(b, c);
  else {
    if (delta>0) cout << "hai nghiem";
    else if (delta==0) cout << "nghiem kep";
    else cout << "vo nghiem";
  }
}

int hamd(int a, int b, int c, int d) {
  return min(min(a, b), min(c, d));
}

void hame(int &a, int &b) {
  swap(a, b);
}

void hamf(int a, int b, int c, int d) {
  int A[4]={a, b, c, d};
  sort(A, A+4);
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);

  return 0;
}
