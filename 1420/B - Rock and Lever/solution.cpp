#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector <ll>msb_count(32,0);
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		int msb=31- __builtin_clz(x);
             msb_count[msb]++;
    	} 
    	ll ans=0;
    	for(auto i :msb_count)
    	{
    		if(i>1)
             ans+=(i*(i-1))/2;
    	}
    	cout<<ans<<endl;
    }
	return 0;
}