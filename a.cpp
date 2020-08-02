#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int
void solve() {
	vector<int> v[11];
	// cout << "Before : " << v[1][0] << endl; 
	for(int i = 1; i <= 10; i++){
		v[i].clear();
	}	
	v[1].push_back(99);
	cout << "After : " << v[1][0] << endl; 
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//Starts here , 
				
	int T; cin >> T;
	while(T--){
		solve();
	}
	return 0;
			
}