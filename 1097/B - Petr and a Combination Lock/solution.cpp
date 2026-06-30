#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<(1<<n);i++)
	{
		int sum=0;
		for(int bit=0;bit<n;bit++)
		{
			if((i&(1<<bit))!=0)
		     sum+=a[bit];
		 else
		 	sum-=a[bit];
		}
		if(sum%360==0){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}