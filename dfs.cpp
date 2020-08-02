#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(n)      (n).begin(), (n).end()
#define ll long long
#define ull unsigned long long int

//***************DFS GRAPH*****************// 
vector<int> adj[1000];
vector<bool> vis;

void dfs(int i = 1, int pr = 0){
    
    cout << i << " ";                   // Printing vertex while dfs traversal
    vis[i] = 1;                         //marking it visited.
  
    for(int ch : adj[i]){
        if(ch == pr) continue;
        
        if(!vis[ch]){
            dfs(ch,i);
        }
    }
}
void solve() {
    int n,m; cin >> n >> m;             //n :- No. of Vertices
    vis.clear();                        //m :- No. of Edges

    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    for(int i = 1; i <= n; i++){
        vis.push_back(0);
    }

    while(m--){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs();
   
    
}
int main(){

    solve();
    return 0;
            
}