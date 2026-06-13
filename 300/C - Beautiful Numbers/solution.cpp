#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
int a,b;
vector <ll> fact;
	vector <ll> invfact;
ll modpow(ll a, ll b)
{
    ll result=1;
    while(b>0)
    {
    	if(b&1)
    		result=(result*a)%MOD;
    	a=(a*a)%MOD;
    	b>>=1;
    }
    return result;
}
bool isGood(ll n)
{
	while(n>0)
	{
		int dig=n%10;
		if(dig!=a&&dig!=b)
			return false;
		n/=10;
	}
	return true;
}
ll nCr(ll n,ll r)
{
	return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>a>>b;
	ll n;
	cin>>n;
	fact.resize(n+1),invfact.resize(n+1);
	fact[0]=1;
	for(ll i=1;i<=n;i++)
		fact[i]=fact[i-1]*i%MOD;
    invfact[n]=modpow(fact[n],MOD-2);
    for(ll i=n;i>0;i--)
    	invfact[i-1]=invfact[i]*i%MOD;
    ll ans=0;
    for(ll k=0;k<=n;k++)
    {
    	ll sum=k*b+(n-k)*a;
    	if(isGood(sum))
        {
        	ans=(ans+nCr(n,k))%MOD;
        }
 
    }
    cout<<ans<<endl;
 
}