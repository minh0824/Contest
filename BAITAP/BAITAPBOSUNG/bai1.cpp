#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <regex>

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

int freq[1000];
void standard(string &s) {
  // remove all whitespace in the most left and right and between 2 consecutive characters just have 1 space
  s = regex_replace(s, regex("\\s+"), " ");
  if (s[0] == ' ') s.erase(0, 1);
  if (s[sz(s) - 1] == ' ') s.erase(sz(s) - 1, 1);
}
signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  string s;
  getline(cin, s);
  reverse(allin(s));
  cout << s;
  reverse(allin(s));
  int n = sz(s);
  int maxlen = 0;
  for (int i = 0; i < n; ++i) {
    int len = 0;
    while (i < n && s[i] != ' ') {
      ++len;
      ++i;
    }
    maxlen = max(maxlen, len);
  }
  cout << maxlen;

  for (char i : s) {
    if (i != ' ') ++freq[i];
  }

  for (int i = 'A'; i <= 'Z'; ++i) {
    cout << char(i) << ": " << freq[i] << endl;
  }
  for (int i = 'a'; i <= 'z'; ++i) {
    cout << char(i) << ": " << freq[i] << endl;
  }
  // cout most frequent character (include that character)
  int maxval = 0;
  char maxchar = ' ';
  for (int i = 'A'; i <= 'Z'; ++i) {
    if (freq[i] > maxval) {
      maxval = freq[i];
      maxchar = char(i);
    }
  }
  for (int i = 'a'; i <= 'z'; ++i) {
    if (freq[i] > maxval) {
      maxval = freq[i];
      maxchar = char(i);
    }
  }
  cout << maxchar << ": " << maxval << endl;
  standard(s);
  string ans="";
  string t;
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == '(') {
        while (!t.empty() && t.back() == ' ') t.pop_back();
          if (!t.empty()) t += ' ';   // 1 space trước
          t += '(';
          while (i+1 < (int)s.size() && s[i+1] == ' ') i++; // bỏ space sau
      } else {
          t += s[i];
      }
  }
  s = t;
  for (char c : s) {
    if (c=='(') ans+=' ';
    ans+=c;
    if (c==','||c=='.'||c==')') ans+=' ';
  }
  standard(ans);
  if (ans[0]>='a') ans[0] = char(ans[0] - 32);
  int nn = sz(ans);
  if (ans[nn-1]!='.') ans.pb('.');

  cout << ans;
  return 0;
}
