#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
const ll MAXN=2*1e5;
vector <ll> fact,invfact;
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
void precompute()
{
	for(ll i=1;i<MAXN;i++)
		fact[i]=fact[i-1]*i%MOD;
	invfact[MAXN-1]=modpow(fact[MAXN-1],MOD-2);
	for(ll i=MAXN-1;i>0;i--)
		invfact[i-1]=invfact[i]*i%MOD;
}
ll nCr(ll n,ll r)
{
	return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	fact.resize(MAXN);
	invfact.resize(MAXN);
	fact[0]=1;
	precompute();
	ll n;
	cin>>n;
	ll ans=2*nCr(2*n-1,n-1)%MOD-n+MOD;
	cout<<ans%MOD<<endl;
	return 0;
}