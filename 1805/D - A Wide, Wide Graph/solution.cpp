#include <bits/stdc++.h>
using namespace std;
vector <int> bfs(int start,int n,const vector<vector<int>>& adj)
{
	vector <int> dist(n+1,-1);
	queue <int> q;
	q.push(start);
	dist[start]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int v:adj[u])
		{
			if(dist[v]==-1)
			{
				dist[v]=dist[u]+1;
				q.push(v);
			}
		}
	}
	return dist;
}
void solve()
{
	int n;
	cin>>n;
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector <int> dist_from_1=bfs(1,n,adj);
	int d1=1;
	for(int i=2;i<=n;i++)
	{
		if(dist_from_1[i]>dist_from_1[d1])
			d1=i;
	}
	vector <int> dist1=bfs(d1,n,adj);
	int d2=1;
	for(int i=2;i<=n;i++)
		if(dist1[i]>dist1[d2])
			d2=i;
	vector <int> dist2=bfs(d2,n,adj);
	vector <int> max_d(n);
	for(int i=1;i<=n;i++)
		max_d[i-1]=max(dist1[i],dist2[i]);
    sort(max_d.begin(),max_d.end());
    int isolated_count=0;
    for(int i=1;i<=n;i++)
    {
    	while(isolated_count<n&&max_d[isolated_count]<i)
    		isolated_count++;
    	if(isolated_count==n)
    		cout<<n<<" ";
    	else
    		cout<<isolated_count+1<<" ";
    }
    cout<<"
";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}