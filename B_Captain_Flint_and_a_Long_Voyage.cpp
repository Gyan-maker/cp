#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int
void solve() {
    ll n; cin >> n;
    int k = (n/4)+1;
    if(n%4 == 0){
        k--;
    }
    n = n - k;
    for(int i = 0; i < n; i++){
        cout << "9";
    }
    for(int i = 0; i < k; i++){
        cout << "8" ;
    }
    cout << endl;

    
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