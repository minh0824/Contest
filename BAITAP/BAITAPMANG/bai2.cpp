#include <iostream>
#include <math.h>
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

double hama(double x) { return (double)1/x; }
bool hamb(string s) {
  int n = sz(s);
  for(int i = 0; i <= n; ++i) if (s[i]!=s[n-i+1]) return 0;
  return 1;
}
bool hamc(int x) {
  return (int)sqrt(x)*(int)sqrt(x)==x;
}
bool hamd(int x) {
  for (int i = 2; i*i<=x; ++i) { if (x%i==0) return 0; }
  return x>1;
}
int hame(int x) {
  int ans{}, cur{};
  while (x!=0) {  cur = x%10, ans+=((cur&1)?cur:0), x/=10; }
  return ans;
}
int hamf(int x) {
  int ans{};
  while(x!=0) { ans+=((hamd(x%10))?x%10:0), x/=10; }
  return ans;
}
int hamg(int x) {
  int ans{};
  while(x!=0) { ans+=((hamc(x%10))?x%10:0), x/=10; }
  return ans;
}
bool hamh(int x) {
  int ans{};
  for (int i = 1; i*i<=x; ++i) {
    if (x%i==0) ans+=i;
    if (i*i!=x) ans+=x/i;
  }
  return ans==x;
}
bool hami(string x) {
  int n = sz(x), ans{};
  for (char i : x) ans+=pow(i-'0', n);
  return to_string(ans)==x;
}
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  return 0;
}
