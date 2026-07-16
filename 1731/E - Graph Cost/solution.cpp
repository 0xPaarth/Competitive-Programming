#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e6+5;
using ll=long long;
ll phi_val[MAXN];
ll pref[MAXN];
void precompute()
{
	for(int i=0;i<MAXN;i++)
		phi_val[i]=i;
	for(int i=2;i<MAXN;i++)
	{
		if(phi_val[i]==i)
		{
			for(int j=i;j<MAXN;j+=i)
				phi_val[j]-=phi_val[j]/i;
		}
	}
	pref[0]=pref[1]=0;
	for(int i=2;i<MAXN;i++)
		pref[i]=pref[i-1]+phi_val[i];
}
void solve()
{
	ll n,m;
	cin>>n>>m;
	ll current_edges=0;
	ll total_cost=0;
	for(ll w=n/2;w>=2;w--)
	{
		ll P_w=pref[n/w];
		ll k=w-1;
		ll B_w=P_w/k;
		if(B_w>0)
		{
			ll rem=m-current_edges;
			ll take=min(B_w,rem/k);
			current_edges+=take*k;
			total_cost+=take*w;
			if(current_edges==m)
				break;
		}
	}
	if(current_edges==m)
		cout<<total_cost<<"
";
	else
		cout<<-1<<"
";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	precompute();
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}