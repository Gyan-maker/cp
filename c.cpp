#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int


void printPattern(int n) {

	// upper half
	int element = 1;
	for (int i = 0; i < (n / 2)  ; i++) {
		for (int j = 0; j < n; j++) {
			cout << element << "\t";
			element++;
		}
		element += n;
		cout << '\n';
	}
	if (n % 2 == 0) {

		element -= n;
	}

	// middle line
	for (int i = 0; i < n; i++) {
		cout << element << "\t";
		element++;
	}
	cout << '\n';


	// lower half
	int diff = n * 2;
	int lim = 0;
	if (n & 1) {
		lim = n / 2;
	} else {
		lim = n / 2;
		lim--;
	}
	element--;
	// cout << element << endl;
	if (n & 1) {
		element -= (2 * n);
	} else {

		element -= (3 * n);
	}
	element++;
	for (int i = 0; i < lim; i++) {

		for (int j = 0; j < n; j++) {

			cout << (element ) << "\t";
			element++;
		}
		// if (n % 2 == 0)
		diff += (n );

		element -= diff;

		element += (n * i);

		cout << '\n';
	}
}


int main () {

#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);


	int n; cin >> n;
	printPattern(n);

	return 0;
}
