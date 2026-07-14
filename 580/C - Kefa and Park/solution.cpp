#include <bits/stdc++.h>
using namespace std;
int n,m,valid_rest;
vector <int> a;
vector <vector<int>> adj;
void dfs(int u,int p,int consecutive_cat)
{
	if(a[u]==1)
		consecutive_cat++;
	else
		consecutive_cat=0;
	if(consecutive_cat>m)
		return;
	bool is_leaf=true;
	for(int v: adj[u])
	{
		if(v!=p){
         is_leaf=false;
		dfs(v,u,consecutive_cat);
    }
}
if(is_leaf)
	valid_rest++;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	adj.resize(n+1);
	a.resize(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
        valid_rest=0;
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0,0);
	cout<<valid_rest<<"
";
	return 0;
}