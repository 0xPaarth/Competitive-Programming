#include<bits/stdc++.h>
using namespace std;
int n;
vector <vector<int>> adj;
void dfs(int u,int p ,int d,vector <int> & dist)
{
	dist[u]=d;
	for(int v : adj[u])
	{
		if(v!=p)
			dfs(v,u,d+1,dist);
	
}}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	adj.resize(n+1);
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector <int> dist_temp(n+1,0);
	dfs(1,0,0,dist_temp);
	int endpoint_a=1;
	for(int i=1;i<=n;i++)
		if(dist_temp[i]>dist_temp[endpoint_a])
			endpoint_a=i;
	vector <int> dist_A(n+1,0);
	dfs(endpoint_a,0,0,dist_A);
	int endpoint_b=1;
	for(int i=1;i<=n;i++)
		if(dist_A[i]>dist_A[endpoint_b])
			endpoint_b=i;
	vector <int> dist_B(n+1,0);
	dfs(endpoint_b,0,0,dist_B);
	vector <int> dist(n+1,0);
	int z;int m=0;
	for(int i=1;i<=n;i++)
		{
			if(i!=endpoint_a&&i!=endpoint_b){
          dist[i]=dist_A[i]+dist_B[i];
            if(m<=dist[i])
            {
            	m=dist[i];
            	z=i;
            }
        }
		}
	cout<<(dist_B[z]+dist_A[z]+*max_element(dist_B.begin(),dist_B.end()))/2<<"
";
	cout<<z<<" "<<endpoint_a<<" "<<endpoint_b<<"
";
	return  0;
}