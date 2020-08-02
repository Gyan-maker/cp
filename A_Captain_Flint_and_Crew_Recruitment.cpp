#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int
void solve() {
    ll n; cin >> n;
    ll a[4] = {6,10,14,0};
    if(n <= 30){
        cout << "NO" << endl; return;
    }else{
        cout << "YES" << endl;
        // cout << "6 10 14 ";
        if(n-30 == 6 ){
           a[0]--;
           a[2]++;
           a[3] = n-30;
        }else if(n-30 == 14){
            a[2]++;
            a[3] = 14 -1;
        }else if(n-30 == 10){
            a[1]--;
            a[2]++;
            a[3] = 10;
        }else{
            a[3] = (n-30);
        }
        for(int i = 0; i < 4; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
        
    }
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