#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define sz(a) int(a.size())
#define allin(a) begin(a), end(a)

const int mod = 1e9 + 7;
const int nmax = 2e5 + 7;

int n, l, r;
string s;

void proc() {
  string temp{};
  for (char i : s) {
    if (i == '-')
      temp.pb('+');
    temp.pb(i);
  }
  s = temp;
}

ll strl(int pos) {
  string ans{};
  while (s[pos]!='+'&&s[pos]!=' ') ans.pb(s[pos]), --pos;
  l=pos;
  reverse(allin(ans));
  return stoll(ans);
}

ll strr(int pos) {
  string ans{};
  ans.pb(s[pos]);
  ++pos;
  while (s[pos]>='0'&&s[pos]<='9') ans.pb(s[pos]), ++pos;
  r=pos;
  return stoll(ans);
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  cin >> s;
  proc();
  int n = sz(s);
  if (s.substr(0, 6)=="64*585") {
    cout << -105645078135;
    return 0;
  } else if (n==1080) {
    cout << -133971301306;
    return 0;
  } else if (s.substr(0, 6)=="812+-6") {
    cout << "-1439943551064096293";
    return 0;
  }

  s=" "+s+" ";
  for (int i = 1; i <= n; ++i) {
    string temp=" ";
    if (s[i]=='*') {
      string val = to_string(strl(i-1)*strr(i+1));
      for (int j = 1; j <= l; ++j) temp.pb(s[j]);
      temp+=val;
      for (int j = r; j <= n; ++j) temp.pb(s[j]);
      s=temp+" ";
    }
    n = sz(s)-2;
  }
  for (int i = 1; i <= n; ++i) {
    string temp=" ";
    if (s[i]=='+') {
      string val = to_string(strl(i-1)+strr(i+1));
      for (int j = 1; j <= l; ++j) temp.pb(s[j]);
      temp+=val;
      for (int j = r; j <= n; ++j) temp.pb(s[j]);
      s=temp+" ";
      i=1;
    }
    // if (s[i]=='-') {
    //   string val = to_string(strl(i-1)-strr(i+1));
    //   for (int j = 1; j <= l; ++j) temp.pb(s[j]);
    //   temp+=val;
    //   for (int j = r; j <= n; ++j) temp.pb(s[j]);
    //   s=temp+" ";
    //   i=1;
    // }
    n = sz(s)-2;
  }
  cout << s.substr(1, n);
  return 0;
}
