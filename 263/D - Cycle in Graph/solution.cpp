#include <bits/stdc++.h>
using namespace std;
int n,m,k;
vector <vector <int>> adj;
vector <bool> visited;
vector <int> depth;
vector <int> parent;
void dfs(int u,int p,int d)
{
	visited[u]=true;
	parent[u]=p;
	depth[u]=d;
	for(int v:adj[u])
	{
		if(v==p)
			continue;
		if(visited[v])
		{
          if(depth[u]-depth[v]>=k)
          {
          	cout<<depth[u]-depth[v]+1<<"
";
          	int curr=u;
          	while(curr!=v)
          	{
          		cout<<curr<<" ";
          		curr=parent[curr];
          	}
          	cout<<v<<" 
";
          	exit(0);
          }
		}
		else
		{
			dfs(v,u,d+1);
 
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m>>k;
	adj.resize(n+1);
	depth.resize(n+1);
	visited.resize(n+1,false);
	parent.resize(n+1);
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0,1);
	return 0;
}