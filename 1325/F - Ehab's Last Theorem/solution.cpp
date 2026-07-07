#include <bits/stdc++.h>
using namespace std;
int n,m,sq;
vector <vector<int>> adj;
vector <int> depth;
vector <int> parent;
vector <bool> visited;
vector <bool> forbidden;
vector <int> ans_set;
void dfs(int u,int p,int d)
{
	visited[u]=true;
	depth[u]=d;
	parent[u]=p;
	for(int v : adj[u])
	{
		if(!visited[v])
		{
			dfs(v,u,d+1);
		}
		else if(v!=p&&depth[u]>depth[v])
		{
			int cycle_length=depth[u]-depth[v]+1;
			if(cycle_length>=sq)
			{
				cout<<"2
";
				cout<<cycle_length<<"
";
				vector <int> cycle;
				int curr=u;
				while(curr!=v)
				{
					cycle.push_back(curr);
					curr=parent[curr];
				}
				cycle.push_back(v);
				for(int x:cycle)
					cout<<x<<" ";
				cout<<"
";
				exit(0);
			}
		}
	}
	if(!forbidden[u])
	{
		ans_set.push_back(u);
		for(int v:adj[u])
		{
			forbidden[v]=true;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	sq=1;
	while(sq*sq<n)
		sq++;
	adj.resize(n+1);
	depth.resize(n+1,0);
	parent.resize(n+1,0);
	visited.resize(n+1,false);
	forbidden.resize(n+1,false);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0,1);
	cout<<"1
";
	for(int i=0;i<sq;i++)
		cout<<ans_set[i]<<" ";
	cout<<"
";
	return 0;
}