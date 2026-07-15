#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> adj;
vector <long long > leaf_node_count;
void dfs(int u,int p)
{
	bool is_leaf=true;
	for(int v:adj[u])
	{
		if(v==p)
			continue;
		is_leaf=false;
		dfs(v,u);
		leaf_node_count[u]+=leaf_node_count[v];
	}
	if(is_leaf)
		leaf_node_count[u]=1;
}
void solve()
{
	int n;
	cin>>n;
	adj.assign(n+1,vector<int>());
	leaf_node_count.assign(n+1,0);
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0);
	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		cout<<leaf_node_count[x]*leaf_node_count[y]<<"
";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}