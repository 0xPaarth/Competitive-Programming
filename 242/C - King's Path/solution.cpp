#include <bits/stdc++.h>
using namespace std;
int dr[]={-1,-1,-1,0,0,1,1,1};
int dc[]={-1,0,1,-1,1,-1,0,1};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int r0,r1,c0,c1;
	cin>>r0>>c0>>r1>>c1;
    int n;
    cin>>n;
    map<pair<int,int>,int> dist;
    for(int i=0;i<n;i++)
    {
    	int r,a,b;
    	cin>>r>>a>>b;
    	for(int c=a;c<=b;c++)
    	{
    		dist[{r,c}]=-1;
    	}
    }
    queue <pair<int,int>> q;
    q.push({r0,c0});
    dist[{r0,c0}]=0;
    while(!q.empty())
    {
    	auto [r,c]=q.front();
    	q.pop();
    	if(r==r1&&c==c1)
    		break;
    	for(int i=0;i<8;i++)
    	{
    		int nr=r+dr[i];
    		int nc=c+dc[i];
    		if(dist.count({nr,nc})&&dist[{nr,nc}]==-1)
    		{
    			dist[{nr,nc}]=dist[{r,c}]+1;
    			q.push({nr,nc});
    		}
    	}
    }
    if(dist.count({r1,c1})&&dist[{r1,c1}]!=-1)
    	cout<<dist[{r1,c1}]<<endl;
    else
    	cout<<-1<<endl;
    return 0;
}