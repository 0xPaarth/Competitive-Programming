#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
  ll n,l,r,x;
  cin>>n>>l>>r>>x;
  vector <ll> c(n);
  for(auto &i:c)
  	cin>>i;
  ll ans=0;
  for(ll mask=0;mask<(1LL<<n);mask++)
  {
  	ll sum=0;ll maxx=INT_MIN,minn=INT_MAX;int count=0;
  	for(int bit=0;bit<n;bit++)
  	{
  		if((mask&(1LL<<bit))!=0){
  			count++;
  			sum+=c[bit];
  			maxx=max(maxx,c[bit]);
  			minn=min(minn,c[bit]);
  		}
  	}
  	if(sum>=l&&sum<=r&&(maxx-minn)>=x&&count>1)
        ans++;
  }
  cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}