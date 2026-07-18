#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int minus_one_count=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==-1)
            minus_one_count++;
    }
        if(n%2!=0)
        cout<<"NO
";
        else{
        int target_minus_ones=n/2;
        if(minus_one_count%2==target_minus_ones%2)
            cout<<"YES
";
            else
            cout<<"NO
";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
  return 0;
}