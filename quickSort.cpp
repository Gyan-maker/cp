#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int

int partition(int *a, int s, int e) {
	int i = s - 1;
	int pivot = a[e];
	int j = s;
	for (; j < e; j++) {
		if (a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}
	// bring pivot element to its sorted position
	swap(a[e], a[i + 1]);
	return i + 1;
}
void quickSort(int *a, int s, int e) {
	if (s >= e) {
		return;
	}
	int p = partition(a, s, e);
	quickSort(a, s, p - 1);
	quickSort(a, p + 1, e);
}
void solve() {
	int a[] = {2, 1, 4, 6, 7, 5, 8};
	int n = sizeof(a) / sizeof(int);
	quickSort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}


int main () {

#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	//Write from here.
	solve();

	return 0;
}