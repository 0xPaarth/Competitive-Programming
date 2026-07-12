#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1)
			cout<<"1
";
		else if(n==2)
			cout<<"-1
";
		else{
			cout<<"1 2 3";
			long long c=6;
			for(int i=4;i<=n;++i)
				{
					cout<<" "<<c;
					c*=2;
				}
				cout<<"
";
			}
		}
		return 0;
}