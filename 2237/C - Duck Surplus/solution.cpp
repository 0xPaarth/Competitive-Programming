#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector <ll> a(n);
		for(auto &i : a)
			cin>>i;
		ll m=a[0];
		for(ll i=1;i<n;i++)
		{
			if(m>a[i])
				m=m+a[i];
			else
				m=a[i];
		}
		cout<<m<<endl;
	}
	return 0;
}