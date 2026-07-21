#include <bits/stdc++.h>
using namespace std;
const int MAXN=2*1e5+1;
vector<int> adj[MAXN];
int tin[MAXN],tout[MAXN],depth[MAXN],parent[MAXN];
int timer;
void dfs(int u,int p,int d)
{
    tin[u]=++timer;
    parent[u]=p;
    depth[u]=d;
    for(int v:adj[u])
    {
    	if(v==p)
    		continue;
    	dfs(v,u,d+1);
    }
    tout[u]=++timer;
}
bool is_ancestor(int u,int v)
{
	return tin[u]<=tin[v]&&tout[u]>=tout[v];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	timer=0;
	dfs(1,1,0);
	for(int i=0;i<m;i++)
	{
		int k;
		cin>>k;
		vector <int> v(k);
		int deepest=-1;
		int max_depth=-1;
		for(int j=0;j<k;j++)
		{
			cin>>v[j];
			if(depth[v[j]]>max_depth)
			{
				max_depth=depth[v[j]];
				deepest=v[j];
			}
		}
		bool check=true;
		for(int j=0;j<k;j++)
		{
			int p=parent[v[j]];
			if(!is_ancestor(p,deepest))
			{
				check=false;
				break;
			}
		}
		if(check)
			cout<<"YES
";
		else
			cout<<"NO
";
	}
	return 0;
}