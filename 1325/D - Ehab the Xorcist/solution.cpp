#include <bits/stdc++.h>
using namespace std;
using ll =long long;
void solve()
{
	ll u,v;
	cin>>u>>v;
	if(u>v||(v-u)%2!=0)
	{
		cout<<-1<<endl;
		return;
	}
	if(u==0&&v==0)
	{
		cout<<0<<endl;
		return;
	}
	if(u==v)
	{
		cout<<1<<endl;
		cout<<u<<endl;
		return;
	}
	ll x=(v-u)/2;
	if((u&x)==0)
	{
		cout<<2<<endl;
		cout<<(u+x)<<" "<<x<<endl;
		return;
	}
	cout<<3<<endl;
	cout<<u<<" "<<x<< " "<<x<<" "<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}