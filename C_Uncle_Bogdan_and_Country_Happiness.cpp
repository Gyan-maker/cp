#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int


vector<int> adj[100001];
ll p[100001],h[100001],sub[100001],good[100001];

bool dfs(int i = 1, int pr = 0){
   
    sub[i] = p[i];
    ll good_child_sum = 0;
    for(ll ch : adj[i]){

        if(pr == ch){
            continue;
        }
        if(!dfs(ch,i)){
            return 0;
        }
        sub[i] += sub[ch];
        good_child_sum += good[ch];
    }

    ll goodTimes2 = sub[i] + h[i];
    if(goodTimes2 % 2){
        return 0;
    }
    ll cur_good = goodTimes2 / 2;
    good[i] = cur_good;

    bool ans = (cur_good >= good_child_sum) && (cur_good >= 0) && (cur_good <= sub[i]);
    return ans;

}

void solve() {
    
    


    ll n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(ll i = 1; i <= n ; i++){
        cin >> p[i];
    }
    for(ll i = 1; i<= n; i++){
        cin >> h[i];
    }
   
    for(ll i = 1; i < n; i++){
        ll u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(dfs()){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    
    
}
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    //Starts here , 
                
    int T; cin >> T;
    while(T--){
        solve();
       
    }
    return 0;
            
}