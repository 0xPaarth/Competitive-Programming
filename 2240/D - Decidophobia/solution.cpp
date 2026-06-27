#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
	int n,d;
	cin>>n>>d;
	vector <ll> a(n);
	for(auto &i:a)
		cin>>i;
	vector <ll> round_a(2*n);
	for(int i=0;i<2*n;i++)
		round_a[i]=a[i%n];
	vector <ll> pref_sum_round_a(2*n+1,0);
	for(int i=0;i<2*n;i++)
		pref_sum_round_a[i+1]=pref_sum_round_a[i]+round_a[i];
	ll max_hap=0;
	for(int i=0;i<n;i++)
	{
		int st_idx=(i-d+n)%n;
	
	int end_idx=st_idx+2*d;
	ll sum=pref_sum_round_a[end_idx+1]-pref_sum_round_a[st_idx]-a[i];
	ll c=2LL*d*a[i]-sum;
	if(c>0)
		max_hap+=c;
}
cout<<max_hap<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}