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


void nhap(int a[], int &n) { for (int i = 0; i < n; ++i) cin >> a[i]; }

void xuat(int a[], int n) { for (int i = 0; i < n; ++i) cout << a[i] << ' '; }
void xuatchan(int a[], int n) { for (int i = 0; i < n; ++i) cout << ((a[i]&1)?"":a[i]) << ' '; }
void xuatVTchan(int a[], int n) { for (int i = 0; i < n; i+=2) cout << a[i] << ' '; }

signed main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  //freeopen("test.in", "r", stdin);
  //freeopen("test.out", "w", stdout);
  int n; cin >> n;
  int a[n];
  nhap(a, n);

  return 0;
}
