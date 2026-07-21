#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<long long> depth, sz, val;
void dfs(int u, int parent, int current_depth) {
    depth[u] = current_depth;
    sz[u] = 1;
    
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, current_depth + 1);
            sz[u] += sz[v];
        }
    }
   val[u] = depth[u] - sz[u] + 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
        adj.resize(n + 1);
    depth.resize(n + 1);
    sz.resize(n + 1);
    val.resize(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     dfs(1, 0, 0);
    sort(val.begin()+1,val.begin()+n+1,greater<long long>());
 long long max_happiness=0;
    for(int i=1;i<=k;i++) 
        max_happiness+=val[i];
      cout<<max_happiness<<"
";
    return 0;
}