#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    vector <int> a(n);
	    for(auto &i:a)
	    {
	    	cin>>i;
	    }
	    int m=INT_MAX;
	    for(int i=1;i<n;i++)
	    {
	    	m=min(m,a[i-1]);
	    	if(m<a[i])
	    		a[i]=m;
	    	else 
	    	m=a[i];
	    }
	    cout<<accumulate(a.begin(),a.end(),0)<<endl;
 
	}
	return 0;
}