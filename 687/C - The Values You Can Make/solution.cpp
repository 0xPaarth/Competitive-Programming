#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector <int> coins(n);
    for(auto &i:coins)
    	cin>>i;
    vector <vector <bool>> dp(k+1,vector <bool>(k+1,false));
    dp[0][0]=true;
    for( auto c:coins)
    {
    	for(int s=k;s>=c;s--)
    	{
    		for(int x=k;x>=0;x--)
    		{
    			if(dp[s-c][x])
    			{
    				dp[s][x]=true;
    				if(x+c<=k)
    					dp[s][x+c]=true;
    			}
    		}
    	}
    }
    vector <int> result;
    for(int x=0;x<=k;x++)
    	if(dp[k][x])
    		result.push_back(x);
    	cout<<result.size()<<endl;
    	for(auto i:result)
    		cout<<i<<" ";
    	cout<<endl;
	return 0;
}