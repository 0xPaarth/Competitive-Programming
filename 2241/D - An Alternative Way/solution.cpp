#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin>>n;
 vector<ll>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
     vector<ll>b(n);
    for (int i=0;i<n;i++)
        cin>>b[i];
     ll current_prefix_sum=0;
    bool possible=true;
     for(int i=0;i<n;i++){
         current_prefix_sum+= (b[i]-a[i]);
        if(current_prefix_sum<0)
            possible=false;
    }
    if(possible)
        cout<<"YES"<<endl;
     else 
        cout<<"NO"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
        while (t--)
            solve();
         return 0;
}