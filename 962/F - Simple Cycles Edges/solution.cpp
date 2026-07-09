#include <bits/stdc++.h>
using namespace std;
struct Edge{
	int to;
	int id;
};
struct BackEdge{
    int u,v,id;
};
const int MAXN=1e5+5;
vector<Edge> adj[MAXN];
int depth[MAXN],dp[MAXN],parent_node[MAXN],parent_edge[MAXN],bad_cnt[MAXN];
bool vis[MAXN];
vector <BackEdge> back_edges;
vector<int> topo;
void dfs(int u,int p,int d)
{
	vis[u]=true;
	depth[u]=d;
	topo.push_back(u);
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
				dp[u]++;
				dp[v]--;
				back_edges.push_back({u,v,id});
			}
		}
		else
		{
			parent_node[v]=u;
			parent_edge[v]=id;
			dfs(v,u,d+1);
			dp[u]+=dp[v];
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
    for(int i=1;i<=n;i++)
    {
	if(!vis[i])
			dfs(i,0,1);
    }
    for(int i=0;i<topo.size();i++)
    {
    	int u=topo[i];
    	if(parent_node[u]!=0)
    		bad_cnt[u]=bad_cnt[parent_node[u]]+(dp[u]>1?1:0);
    	else
    		bad_cnt[u]=0;
    }
    vector<int> ans;
    for(auto &be:back_edges)
    {
    	int u=be.u;
    	int v=be.v;
    	if(bad_cnt[u]-bad_cnt[v]==0)
    	{
    		ans.push_back(be.id);
    		int curr=u;
    		while(curr!=v)
    		{
    			ans.push_back(parent_edge[curr]);
    			curr=parent_node[curr];
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