#include "iostream"
using namespace std;

const int nmax = 1e5+7;
bool p[nmax];

void seive() {
  for (int i = 2; i <= nmax; ++i) p[i]=1;
  for (int i = 2; i <= nmax; ++i) {
    if(p[i]) for (int j = 2; 1ll*i*j <= nmax; ++j) {
      p[i*j]=1;
    }
  }
}

int main() {
  int n; cin >> n;
  seive();
  vector<int> v;
  for (int i = 1; i*i <= n; ++i) {
    if (p[i]) v.push_back(i);
  }
  // for (int i : v) cout << i << ' ';
  vector<int> a;
  while (n!=1) {
    for (int i : v) {
      while(n%i==0) {
        n/=i;
        a.push_back(i);
      }
    }
  }
  sort(a.begin(), a.end());
  for (int i : a) cout << i << ' ';
}
