#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m,x;
	cin>>n>>m>>x;
	set <int> curr;
	curr.insert(x);
	for(int i=0;i<m;i++)
	{
		int r;
		char c;
		cin>>r>>c;
		set <int> next;
		for(int p:curr)
		{
			int p_idx=p-1;
 
		if(c=='0'||c=='?')
		{
			int next_cw=(p_idx+r)%n;
			next.insert(next_cw+1);
		}
		if(c=='1'||c=='?')
		{
			int next_cw=(p_idx-r+n)%n;
			next.insert(next_cw+1);
		}
	}
	curr=next;
}
cout<<curr.size()<<"
";
for(auto i:curr)
	cout<<i<<" ";
cout<<"
";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}