#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int> a(n),pref_xor(n+1,0);int x0=0,x1=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		pref_xor[i+1]=(pref_xor[i]^a[i]);
	}
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
			x0^=a[i];
		else
			x1^=a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int tp;
		cin>>tp;
		if(tp==1)
		{
			int l,r;
			cin>>l>>r;
			x0^=(pref_xor[r]^pref_xor[l-1]);
			x1^=(pref_xor[r]^pref_xor[l-1]);
		}
		else
		{
			int g;
			cin>>g;
			if(g)
			cout<<x1<<" ";
		else
			cout<<x0<<" ";
		}
	}
	cout<<endl;
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