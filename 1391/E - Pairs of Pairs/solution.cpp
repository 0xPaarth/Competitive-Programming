#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <vector <int>> adj;
vector <int> depth;
vector <int> parent;
vector <int> visited;
vector <vector <int>> depth_layers;
void dfs(int u,int d,int p)
{
	visited[u]=true;
	depth[u]=d;
	parent[u]=p;
	depth_layers[d].push_back(u);
	for(int v: adj[u])
		if(!visited[v])
			dfs(v,d+1,u);
}
void solve()
{
	cin>>n>>m;
	adj.assign(n+1,vector<int>());
	depth.assign(n+1,0);
	parent.assign(n+1,-1);
	visited.assign(n+1,false);
	depth_layers.assign(n+1,vector <int>());
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
    }
    dfs(1,1,-1);
    int required_len=(n+1)/2;
    int deepest_node=-1;
    for(int i=1;i<=n;i++)
    {
    	if(depth[i]>=required_len)
    	{
    		deepest_node=i;
    		break;
    	}
    }
    if(deepest_node!=-1)
    {
    	cout<<"PATH
";
    	vector <int> path;
    	int curr=deepest_node;
    	while(curr!=-1)
    	{
    		path.push_back(curr);
    		curr=parent[curr];
 
    	}
    	cout<<path.size()<<"
";
    	for(int u:path)
    		cout<<u<<" ";
    	cout<<"
";
    	return;
   }
   cout<<"PAIRING
";
   vector <pair<int,int>> pairs;
   for(int d=1;d<=n;d++)
   	for(int i=0;i+1<depth_layers[d].size();i+=2)
   		pairs.push_back({depth_layers[d][i],depth_layers[d][i+1]});
   	cout<<pairs.size()<<"
";
   	for(auto [u,v]: pairs)
   		cout<<u<<" "<<v<<"
";
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