#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll n, k, c;
vector<vector<ll>> adj;
 
ll bfs(ll start, vector<ll> &dist) {
    queue<ll> q;
    q.push(start);
    dist[start] = 0;
    
    ll farthest_node = start;
    ll max_dist = 0;
    
    while(!q.empty()) {
        ll u = q.front();
        q.pop();
        
        for(ll v : adj[u]) {
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
              
                if(dist[v] > max_dist) {
                    max_dist = dist[v];
                    farthest_node = v;
                }
            }
        }
    }
    return farthest_node;
}
 
void solve() {
    cin >> n >> k >> c;
    adj.assign(n + 1, vector<ll>());
    
    for(ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    
    vector<ll> dist_from_1(n + 1, -1);
    ll pole_a = bfs(1, dist_from_1);
    
    vector<ll> dist_A(n + 1, -1);
    ll pole_b = bfs(pole_a, dist_A);
    
    vector<ll> dist_B(n + 1, -1);
    bfs(pole_b, dist_B);
    
    ll max_prof = 0;
    for(int i = 1; i <= n; i++) {
        ll tree_cost = max(dist_A[i], dist_B[i]) * k;
        ll shift_cost = dist_from_1[i] * c;
        ll current_prof = tree_cost - shift_cost;
        max_prof = max(max_prof, current_prof);
    }
    
    cout << max_prof << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}