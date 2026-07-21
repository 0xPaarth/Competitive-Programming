#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> adj;
vector <int> dp;
vector <int> op;
int k=0;
int n;
void dfs(int u)
{
  if(adj[u].empty())
  {
  	dp[u]=1;
  	k++;
  	return;
  }
  if(op[u]==1)
  {
  	dp[u]=1e9;
  	for(int v:adj[u])
  	{
  		dfs(v);
  		dp[u]=min(dp[u],dp[v]);
  	}
  }
  else
  {
  	dp[u]=0;
  	for(int v:adj[u])
  	{
  		dfs(v);
  		dp[u]+=dp[v];
  	}
  }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	op.resize(n+1);
	for(int i=1;i<=n;i++)
		cin>>op[i];
	adj.resize(n+1);
	for(int i=2;i<=n;i++)
	{
		int p;
		cin>>p;
		adj[p].push_back(i);
	}
	dp.resize(n+1);
	dfs(1);
	cout<<k-dp[1]+1<<"
";
	return 0;
 
}