#include <bits/stdc++.h>
using namespace std;
const int MOD=32768;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	vector <int> a(n);
	for(auto &i:a)
		cin>>i;
	vector <int> dist(MOD,-1);
	queue <int> q;
	q.push(0);
	dist[0]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		int v1=(u-1+MOD)%MOD;
		if(dist[v1]==-1)
		{
			dist[v1]=dist[u]+1;
			q.push(v1);
					}
		if(u%2==0){
		int v2=(u/2);
        int v3=(u/2)+(MOD)/2;
        if(dist[v2]==-1){
        dist[v2]=dist[u]+1;
        q.push(v2);
    }
        if(dist[v3]==-1){
        dist[v3]=dist[u]+1;
        q.push(v3);
    }
}
 
	}
	for(int i=0;i<n;i++)
		cout<<dist[a[i]]<<" ";
	cout<<"
";
	return 0;
}