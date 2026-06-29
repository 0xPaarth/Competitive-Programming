#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int xor_total=0;
		if((a-1)%4==0)
			xor_total=a-1;
		else if((a-1)%4==1)
			xor_total=1;
		else if((a-1)%4==2)
			xor_total=a;
		else
			xor_total=0;
		if(xor_total==b){
			cout<<a<<endl;
			continue;
		}
		if(xor_total!=b&&(xor_total^b)!=a)
			cout<<a+1<<endl;
		if(xor_total!=b&&(xor_total^b)==a)
			cout<<a+2<<endl;
	}
	return 0;
}