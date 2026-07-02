#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n),pref_sum(n+1,0);int cnt=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(a[i]==0)
    		cnt++;
    	pref_sum[i+1]=pref_sum[i]+a[i];
       
    }
    if(cnt==n)
    	cout<<"NO"<<endl;
    if(pref_sum[n]!=0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl;
    	
    	cout<<1<<" "<<n<<endl;
    }
    else
    {
 
    
    for(int i=1;i<=n;i++)
    {
    	if(pref_sum[i]!=0)
          {
           
          	cout<<"YES"<<endl;
             cout<<2<<endl;
          	cout<<1<<" "<<i<<endl;
          	cout<<i+1<<" "<<n<<endl;
          	break;
          }
 
    }
}
   return 0;
}