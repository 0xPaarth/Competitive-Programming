#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;long long k;
    	cin>>n>>k;
    	vector <int> a(n);
    	int total=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		total+=__builtin_popcount(a[i]);
    	}
    	for(int i=0;i<=60;i++)
    	{
    		long long cost = (1LL<<i);
    		for(int x:a)
    		{
    			if((x&cost)==0&&k>=cost)
    			{
    				total++;
    				k-=cost;
    			}
    		}
    	}
    	cout<<total<<endl;
    }	return 0;
}