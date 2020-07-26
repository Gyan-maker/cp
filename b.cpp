#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int

void solve() {
	ll n; cin >> n;
	vector<ll> a(n, 0);
	vector<ll> b(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(all(a));
	sort(all(b));

	ll ans = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			ans += min(a[i], b[i]);
		}
	}
	cout << ans << '\n';




	// for (int i = 0; i < n; i++) {
	// 	cout <<  a[i] << " ";
	// }
	// cout << '\n';
	// for (int i = 0; i < n; i++) {
	// 	cout <<  b[i] << " ";
	// }
	// cout << '\n';


}


int main () {

#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	//Write from here.
	int T;
	cin >> T;
	while (T--)
		solve();

	return 0;
}