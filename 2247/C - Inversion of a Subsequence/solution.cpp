#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int i=0;i<n;i++) 
        cin>>b[i];
    int cnt_diff_1=0;
    int cnt_diff_0=0;
    int cnt_same_1=0;
    int cnt_same_0=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]==1) 
                cnt_diff_1++;
            else
             cnt_diff_0++;
        }else{
            if(a[i]==1) 
                cnt_same_1++;
            else
             cnt_same_0++;
        }
    }
    if(cnt_diff_1==0&&cnt_diff_0==0)
        cout<<0<<"
";
     else if(cnt_diff_1%2==1)
        cout<<1<<"
";
     else if(cnt_diff_1>0&&cnt_diff_1%2==0) 
        cout<<2<<"
";
    else
        if(cnt_same_1>0&&cnt_same_0>0) 
            cout<<2<<"
";
         else
            cout<<-1<<"
";
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