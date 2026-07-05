#include <bits/stdc++.h>
using namespace std;
int n;
vector <int> a;
vector <vector<int>> rev_adj;
vector <int> ans;
void bfs(int start_parity,int target_parity)
{
	queue <int> q;
	vector <int> dist(n+1,-1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]%2==target_parity)
		{
			q.push(i);
			dist[i]=0;
		}
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int v:rev_adj[u])
			{
				if(dist[v]==-1)
				{
					dist[v]=dist[u]+1;
					q.push(v);
				}
			}
	}
	for(int i=1;i<=n;i++)
		if(a[i]%2==start_parity)
			ans[i]=dist[i];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	a.resize(n+1);
	rev_adj.resize(n+1);
	ans.assign(n+1,-1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int left_jump=i-a[i];
		int right_jump=i+a[i];
		if(left_jump>=1)
			rev_adj[left_jump].push_back(i);
		if(right_jump<=n)
			rev_adj[right_jump].push_back(i);
     }
     bfs(0,1);
     bfs(1,0);
     for(int i=1;i<=n;i++)
     	cout<<ans[i]<<" ";
     cout<<"
";
     return 0;
}