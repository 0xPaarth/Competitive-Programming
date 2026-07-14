#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n,x,y;
	cin>>n>>x>>y;
	int g=gcd(x,y);
	bool check=true;
	for(int i=1;i<=n;i++)
	{
		int p;
		cin>>p;
		if(abs(p-i)%g!=0)
			check=false;
	}
	if(check)
		cout<<"YES
";
	else
		cout<<"NO
";
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