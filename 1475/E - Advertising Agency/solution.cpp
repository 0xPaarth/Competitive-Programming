#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
vector <ll> fact;
vector <ll> invfact;
ll modpow(ll a,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1)
			res=(res*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return res;
}
ll nCr(ll n,ll r){
return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	fact.resize(1001),invfact.resize(1001);
	fact[0]=1;
	for (ll i = 1; i < 1001; ++i)
	{
		fact[i]=fact[i-1]*i%MOD;
	}
	invfact[1000]=modpow(fact[1000],MOD-2);
	for(ll i=1000;i>0;i--)
		invfact[i-1]=invfact[i]*i%MOD;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector <ll> a(n);
		for(auto &i:a)
			cin>>i;
		ll countneed=0,counttotal=0;
		sort(a.begin(),a.end(),greater <int>());
		ll x=a[k-1];
		for(ll i=0;i<n;i++)
			if(a[i]==x)
				counttotal++;
         for(ll i=0;i<k;i++)
         	if(a[i]==x)
         	countneed++;
         cout<<nCr(counttotal,countneed)<<endl;
 
 
	}
	return 0;
}