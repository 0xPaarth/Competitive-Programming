#include <bits/stdc++.h>
using namespace std;
int n;
vector <vector<int>> adj;
int bfs(int start,vector <int>& parent)
{
	vector<int> dist(n+1,-1);
	queue <int> q;
	q.push(start);
	dist[start]=0;
	parent[start]=0;
	int farthest_node=start;
	int max_dist=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int v:adj[u])
		{
			if(dist[v]==-1)
			{
				dist[v]=dist[u]+1;
				parent[v]=u;
				q.push(v);
		        if(dist[v]>max_dist)
		        {
		        	max_dist=dist[v];
		        	farthest_node=v;
		        }
			}
		}
	}
	return farthest_node;
}
void solve()
{
	cin>>n;
	adj.assign(n+1,vector<int>());
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<int> dummy(n+1,0);
		int pole_a=bfs(1,dummy);
		vector <int> parent(n+1,0);
		int pole_b=bfs(pole_a,parent);
		vector <int> path;
		int curr=pole_b;
		while(curr!=0)
		{
			path.push_back(curr);
			curr=parent[curr];
		}
		int D=path.size()-1;
		if(D%2==0)
		{
			int center=path[D/2];
			int R=D/2;
			cout<<R+1<<"
";
			for(int d=0;d<=R;d++)
			{
				cout<<center<<" "<<d<<"
";
			}
		}
		else
		{
			int c1=path[D/2];
			int c2=path[D/2+1];
			int R=(D+1)/2;
			vector <pair<int,int>> setA,setB;
			for(int d=0;d<=R;d++)
				setA.push_back({c1,d});
			for(int d=1;d<=R;d+=2)
			{
              setB.push_back({c1,d});
              setB.push_back({c2,d});
			}
			if(setB.size()<setA.size())
			{
				cout<<setB.size()<<"
";
				for(auto p:setB)
					cout<<p.first<<" "<<p.second<<"
";
			}
			else
			{
				cout<<setA.size()<<"
";
				for(auto p:setA)
					cout<<p.first<<" "<<p.second<<"
";
			}
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