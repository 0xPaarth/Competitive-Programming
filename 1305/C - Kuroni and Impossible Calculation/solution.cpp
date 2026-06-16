#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m;
	cin>>n>>m;
	vector <ll> a(n);
	for(auto &i:a)
		cin>>i;
	if(n>m)
	{
		cout<<0<<endl;
		return 0;
	}
	ll ans=1;
	for(ll i=0;i<n-1;i++)
		for(ll j=i+1;j<n;j++)
			ans=(ans*abs(a[i]-a[j])%m);
		cout<<ans<<endl;
		return 0;
}