#include <bits/stdc++.h>
using namespace std;
struct Edge{
	int to;
	int id;
};
const int MAXN=1e5+5;
vector <Edge> adj[MAXN];
int depth[MAXN],color[MAXN],parent_node[MAXN],parent_edge[MAXN],dp_odd[MAXN],dp_even[MAXN];
bool vis[MAXN];
int cnt_odd=0;
int single_odd_back_edge_id=-1;
void dfs(int u,int p,int d,int c)
{
	vis[u]=true;
	depth[u]=d;
	color[u]=c;
	for(auto &edge:adj[u])
	{
		int v=edge.to;
		int id=edge.id;
		if(v==p)
			continue;
		if(vis[v])
		{
			if(depth[v]<depth[u])
			{
				if(color[u]==color[v])
				{
					dp_odd[u]++;
					dp_odd[v]--;
					cnt_odd++;
					single_odd_back_edge_id=id;
				}
				else
				{
					dp_even[u]++;
					dp_even[v]--;
				}
			}
        }
			else
			{
				parent_node[v]=u;
				parent_edge[v]=id;
				dfs(v,u,d+1,c^1);
				dp_odd[u]+=dp_odd[v];
				dp_even[u]+=dp_even[v];
			}
		}
	}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back({v,i});
		adj[v].push_back({u,i});
	}
	for(int i = 1; i <= n; i++) {
        depth[i] = 0;
        color[i] = 0;
        dp_odd[i] = 0;
        dp_even[i] = 0;
        vis[i] = false;
        parent_node[i] = 0;
        parent_edge[i] = 0;
    }
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
			dfs(i,0,1,0);
	}
	vector <int> ans;
	if(cnt_odd==0)
	{
		for(int i=1;i<=m;i++)
		{
			ans.push_back(i);
		}
	}
	else
	{
		if(cnt_odd==1)
			ans.push_back(single_odd_back_edge_id);
		for(int i=1;i<=n;i++)
		{
			if(parent_node[i]!=0)
			{
				if(dp_odd[i]==cnt_odd&&dp_even[i]==0)
					ans.push_back(parent_edge[i]);
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout<<ans.size()<<"
";
	for(auto i:ans)
		cout<<i<<" ";
	cout<<"
";
	return 0;
}