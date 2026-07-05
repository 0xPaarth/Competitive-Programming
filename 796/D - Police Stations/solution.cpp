#include <bits/stdc++.h>
using namespace std;
int n,k,d;
vector <vector<pair<int,int>>> adj;
vector<bool>visited;
vector <bool> edge_used;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>k>>d;
	adj.resize(n+1);
	visited.assign(n+1,false);
	edge_used.assign(n,false);
	queue<int> q;
	for(int i=0;i<k;i++)
	{
		int p;
		cin>>p;
		if(!visited[p])
		{
			visited[p]=true;
			q.push(p);
		}
	}
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back({v,i});
		adj[v].push_back({u,i});
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(auto [v,idx]:adj[u])
		{
			if(!visited[v])
			{
				visited[v]=true;
				edge_used[idx]=true;
				q.push(v);
			}
		}
	}
	vector<int> deleted_roads;
	for(int i=1;i<n;i++)
	{
		if(!edge_used[i])
			deleted_roads.push_back(i);
	}
	cout<<deleted_roads.size()<<"
";
	for(auto i:deleted_roads)
		cout<<i<<" ";
	return 0;
}