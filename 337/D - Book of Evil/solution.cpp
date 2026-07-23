#include <bits/stdc++.h>
using namespace std;
int n;
vector <vector<int>> adj;
void bfs(int start,vector <int> &dist)
{
	queue <int> q;
	q.push(start);
	dist[start]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int v:adj[u])
		{
			if(dist[v]==-1){
				dist[v]=dist[u]+1;
				q.push(v);
			}
				
		}
	}
}
void solve()
{
	int m,d;
	cin>>n>>m>>d;
	adj.assign(n+1,vector<int>());
	vector <int> affected(m,0);
	for(int &i:affected)
		cin>>i;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector <int> dist_from_1(n+1,-1);
	bfs(1,dist_from_1);
    int endpoint_a=affected[0];
    int max_dist=0;
    for(int i:affected)
    {
      if(dist_from_1[i]>max_dist)
      {
          max_dist=dist_from_1[i];
          endpoint_a=i;
      }
    }
    max_dist=0;
    vector<int> dist_A(n+1,-1);
    bfs(endpoint_a,dist_A);
    int endpoint_b=endpoint_a;
    for(int i:affected)
    {
      if(dist_A[i]>max_dist)
      {
          max_dist=dist_A[i];
          endpoint_b=i;
      }
    }
    vector <int> dist_B(n+1,-1);
    bfs(endpoint_b,dist_B);
    int count=0;
    for(int i=1;i<=n;i++)
    {
       if(dist_A[i]<=d&&dist_B[i]<=d)
       	count++;
    }
   cout<<count<<"
";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}