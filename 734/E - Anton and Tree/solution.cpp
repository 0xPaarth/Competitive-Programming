#include <bits/stdc++.h>
using namespace std;
int n;
vector <vector<int>> adj;
vector <int> color;
pair <int,int> bfs(int start)
{
	vector <int> dist(n+1,-1);
	queue <int> q;
	q.push(start);
	dist[start]=0;
	int farthest_node=start;
	int max_dist=0;
	while(!q.empty())
	{
	 int u=q.front();
	 q.pop();
	 for(int v: adj[u])
	 {
	 	if(dist[v]==-1)
	 	{
	 		int edge_weight=(color[u]!=color[v]);
	 		dist[v]=dist[u]+edge_weight;
	 		q.push(v);
	 		if(dist[v]>max_dist)
	 		{
	 			max_dist=dist[v];
	 			farthest_node=v;
	 		}
	 	}
	 }	
}
return {farthest_node,max_dist};
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin>>n;
  color.resize(n+1);
  for(int i=1;i<=n;i++)
  	cin>>color[i];
  adj.resize(n+1);
  for(int i=0;i<n-1;i++)
  {
  	int u,v;
  	cin>>u>>v;
  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }
  int a=bfs(1).first;
  int d=bfs(a).second;
  cout<<(d+1)/2<<"
";
  return 0;
}