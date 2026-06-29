#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int x = ~0;
	for(int i=0;i<n;i++)
	{
		int el;
		cin>>el;
		if(el!=i)
			x&=el;
	}
	cout<<x<<endl;
	}
	return 0;
}