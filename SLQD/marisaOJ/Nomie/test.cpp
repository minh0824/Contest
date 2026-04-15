#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'
const int nmax = 1e5+7;

int a[nmax];
ll f[nmax];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("test.in", "r", stdin);
	// freopen("test.out", "w", stdout);
	int n; ll ans, fmin;
	cin >> n;
	for (int i =1; i <= n; ++i) {
		cin >> a[i];
		f[i]=f[i-1]+a[i];
	}
	ans = f[1]; fmin = 0;
	for (int i = 1; i <= n; ++i) {
		ans = max(ans, f[i]-fmin);
		fmin = min(fmin, f[i]);
	}
	cout << ans;
	return 0;
}
