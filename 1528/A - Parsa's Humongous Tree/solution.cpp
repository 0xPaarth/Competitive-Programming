#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<ll>> adj;
vector <pair<ll,ll>> range;
vector <vector <ll>> dp;
void dfs(ll u,ll p)
{ 
  dp[u][0]=0;
  dp[u][1]=0;
  for(ll v:adj[u])
  {
    if(v==p)
        continue;
    dfs(v,u);
    dp[u][0]+=max(dp[v][0]+abs(range[v].first-range[u].first),dp[v][1]+abs(range[v].second-range[u].first));
    dp[u][1]+=max(dp[v][0]+abs(range[v].first-range[u].second),dp[v][1]+abs(range[v].second-range[u].second));
  }       
}
void solve()
{
    ll n;
    cin>>n;
    adj.assign(n+1,vector<ll>());
    range.resize(n+1);
    for(int i=1;i<=n;i++)
        cin>>range[i].first>>range[i].second;
    dp.assign(n+1,vector<ll>(2,0));
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    cout<<max(dp[1][0],dp[1][1])<<"
";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}