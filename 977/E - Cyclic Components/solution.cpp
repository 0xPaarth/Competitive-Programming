#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector <vector<int>> adj(n+1);
	vector <bool> visited(n+1);
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int cycle_count=0;
	for(int i=1;i<=n;i++)
	{
      if(!visited[i])
      {
      	vector <int> component;
      	queue<int> q;
      	q.push(i);
      	visited[i]=true;
      	while(!q.empty())
      	{
      		int u=q.front();
      		component.push_back(u);
      		q.pop();
      		for(int v:adj[u])
      		{
      			if(!visited[v])
      			{
      				visited[v]=true;
      				q.push(v);
      			}
      		}
      	}
      	
      	bool is_cycle=true;
      	for(int node:component)
      	{
      		if(adj[node].size()!=2)
      		{
      			is_cycle=false;
      			break;
      		}
      	}
      	if(is_cycle)
      		cycle_count++;
      }
	}
	cout<<cycle_count<<"
";
 
	return 0;
}