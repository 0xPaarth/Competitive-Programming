#include <bits/stdc++.h>
using namespace std;
struct Edge
{
	int v,idx;
};
const int MAXN=400005;
vector <Edge> adj[MAXN];
int depth[MAXN];
int dp[MAXN];
bool vis[MAXN];
bool edge_used[MAXN];
pair <int,int> ans[MAXN];
vector <int> st;
int max_size=0;
int best_root=1;
void dfs(int u,int p)
{
	vis[u]=true;
	st.push_back(u);
	for(auto edge:adj[u])
	{
		int v=edge.v;
		if(v==p)
			continue;
		if(vis[v])
		{
			if(depth[u]>depth[v])
			{
				dp[u]++;
				dp[v]--;
			}
		}
		else
		{
			depth[v]=depth[u]+1;
			dfs(v,u);
			dp[u]+=dp[v];
			if(dp[v]==0)
			{
				int current_size=0;
				int island_node=v;
				while(true)
				{
					int popped=st.back();
					st.pop_back();
					current_size++;
					if(popped==v)
						break;
				}
			if(current_size>max_size)
			{
				max_size=current_size;
				best_root=island_node;
			}
			}
		}
	}
}
void dfs_orient(int u)
{
	vis[u]=true;
	for(auto edge:adj[u])
	{
		int v=edge.v;
		int idx=edge.idx;
		if(edge_used[idx])
			continue;
		edge_used[idx]=true;
		ans[idx]={v,u};
		if(!vis[v])
			dfs_orient(v);
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
	depth[1]=1;
	dfs(1,0);
	int root_component_size=st.size();
	if(root_component_size>max_size)
	{
		max_size=root_component_size;
		best_root=st.back();
	}
	fill(vis+1,vis+n+1,false);
	dfs_orient(best_root);
	cout<<max_size<<"
";
	for(int i=1;i<=m;i++)
		cout<<ans[i].first<<" "<<ans[i].second<<"
";
	return 0;
}