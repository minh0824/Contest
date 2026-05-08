#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
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

void upper(string &s) {
  for (char &c : s) {
    if (c >= 'a' && c <= 'z') {
      c = char(c - 32);
    }
  }
}

void lower(string &s) {
  for (char &c : s) {
    if (c >= 'A' && c <= 'Z') {
      c = char(c + 32);
    }
  }
}

void proper(string &s) {
  if (s.empty()) return;
  if (s[0] >= 'a' && s[0] <= 'z') {
    s[0] = char(s[0] - 32);
  }
  for (int i = 1; i < sz(s); ++i) {
    if (s[i] == ' ') {
      if (i + 1 < sz(s) && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
        s[i + 1] = char(s[i + 1] - 32);
      }
    }
  }
}

void standard(string &s) {
  lower(s);
  // remove all whitespace in the most left and right and between 2 consecutive characters just have 1 space
  s = regex_replace(s, regex("\\s+"), " ");
  if (s[0] == ' ') s.erase(0, 1);
  if (s[sz(s) - 1] == ' ') s.erase(sz(s) - 1, 1);
}

void delblanks(string &s) {
  s.erase(remove(allin(s), ' '), end(s));
}

int countwords(string &s, int &cnt) {
  cnt = 0;
  for (char c : s) {
    if (c == ' ') ++cnt;
  }
  return ++cnt;
}

int maxwords(string &s) {
  int cnt = 0;
  int res = 0;
  for (char c : s) {
    if (c == ' ') {
      res = max(res, cnt);
      cnt = 0;
    } else {
      ++cnt;
    }
  }
  return max(res, cnt);
}

string xtrnstart(string &s, int n) {
  int nn = sz(s);
  if (n>nn) return s;
  else {
    return s.substr(0, n);
  }
}

string xtrnend(string &s, int n) {
  int nn = sz(s);
  if (n>nn) return s;
  else {
    return s.substr(nn - n, n);
  }
}

string xtrnpos(string &s, int pos, int n) {
  // extract n characters from position pos
  int nn = sz(s);
  if (pos>nn) return "";
  else {
    return s.substr(pos, n);
  }
}

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  string s;
  getline(cin, s);
  standard(s);
  cout << s;

  return 0;
}
