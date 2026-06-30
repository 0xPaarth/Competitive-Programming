#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD=1e9+7;
ll modpow(ll a,ll b)
{
  ll res=1;
  while(b)
  {
  	if(b%2)
  		res=(res*a)%MOD;
  	a=(a*a)%MOD;
  	b/=2;
  }
  return res;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	cout<<modpow(n,k)%MOD<<endl;
 
  }
  return 0;
}