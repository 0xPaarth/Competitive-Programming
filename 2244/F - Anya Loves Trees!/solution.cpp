#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> adj;
bool possible;
vector <int> a;
pair <int,int> dfs(int u)
{
	if(adj[u].empty())
		return {a[u],a[u]};
	vector <pair<int,int>> children_ranges;
	for(int v: adj[u])
	{
		pair <int,int> res = dfs(v);
		if(!possible)
			return {-1,-1};
		children_ranges.push_back(res);
	}
	int m=children_ranges.size();
	int start=0;
	for(int i=1;i<m;i++)
	{
		if(children_ranges[i].first <children_ranges[start].first)
			start=i;
	}
	for(int i=0;i<m-1;i++)
	{
		int idx=(start+i)%m;
		int next_idx=(start+i+1)%m;
		if(children_ranges[idx].second+1!=children_ranges[next_idx].first)
		{
			possible=false;
			return {-1,-1};
		}
	}
	int min_val=children_ranges[start].first;
	int max_val=children_ranges[(start+m-1)%m].second;
	return {min_val,max_val};
}
void solve()
{
	int n;
	cin>>n;
	adj.assign(n+1,vector<int>());
	a.assign(n+1,0);
	for(int i=2;i<=n;i++)
	{
		int p;
		cin>>p;
		adj[p].push_back(i);
	}
	for(int i=1;i<=n;i++)
		cin>>a[i];
	possible=true;
	dfs(1);
	if(possible)
		cout<<"YES
";
	else
		cout<<"NO
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