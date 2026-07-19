#pragma once
#pragma GCC optimize("O3") // Optimize with level 3
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200005;
vector<int> adj[MAXN];
int univ[MAXN];
int sz[MAXN];
long long ans = 0;
int n,k;
void dfs(int u,int p){
      sz[u]=univ[u];  
    for(int v:adj[u]){
        if(v!=p){
            dfs(v,u);
            sz[u]+=sz[v];
            ans+=min(sz[v],2*k-sz[v]);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k; 
    for(int i=0;i<2*k;i++){
        int u;
        cin>>u;
        univ[u]=1;
    }
    for (int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }   
    dfs(1, 0);
    cout<<ans<<"
";  
    return 0;
}