#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <vector<int>> adj;
vector <int> direction;
vector <bool> visited;
void dfs(int u,int p,int dir)
{
	visited[u]=true;
	direction[u]=dir;
	for(int v:adj[u])
	{
		if(v==p)
			continue;
		if(!visited[v])
		{
			visited[v]=true;
			dfs(v,u,dir^1);
		}
		else
		{
			if(direction[v]==direction[u])
			{
				cout<<"NO
";
				exit(0);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	adj.resize(n+1);
	visited.resize(n+1);
	direction.resize(n+1);
	vector <pair<int,int>> edge_list(m);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		edge_list[i].first=u;
		edge_list[i].second=v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0,1);
	cout<<"YES
";
	for(auto [u,v]:edge_list)
	{
		cout<<direction[u];
	}
	cout<<"
";
	return 0;
 
 
}