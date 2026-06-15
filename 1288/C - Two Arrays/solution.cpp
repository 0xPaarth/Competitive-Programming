#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
static const ll MOD=1e9+7;
static const ll MAXN=1024;
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
    fact[0]=1;
    for(ll i=1;i<=MAXN;i++)
    	fact[i]=fact[i-1]*i%MOD;
    invfact[MAXN]=modpow(fact[MAXN],MOD-2);
    for(ll i=MAXN;i>0;i--)
    	invfact[i-1]=invfact[i]*i%MOD;
}
ll nCr(ll n,ll r)
{
	return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fact.resize(MAXN+1),invfact.resize(MAXN+1);
	precompute();
	int n,m;
	cin>>n>>m;
	ll ans=nCr(2*m+n-1,n-1);
	cout<<ans<<endl;
	return 0;
}