#include <bits/stdc++.h>
using namespace std;
vector <vector <int>> adj;
string s;
vector <int> balance;
void dfs(int u,int p)
{
			balance[u]=(s[u-1]=='W')?1:-1;
 
	for(int v:adj[u])
	{
		if(v==p)
			continue;
		dfs(v,u);
		balance[u]+=balance[v];
	}
}
void solve()
{
	int n;
	cin>>n;
	adj.assign(n+1,vector<int>());
	for(int i=2;i<=n;i++)
	{
		int v;
		cin>>v;
		adj[v].push_back(i);
		adj[i].push_back(v);
	}
	cin>>s;
	balance.assign(n+1,0);
	dfs(1,0);
	int count=0;
	for(int i=1;i<=n;i++)
		if(balance[i]==0)
			count++;
		cout<<count<<"
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