#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
     int tot_0 = 0;
    for(char c:s){
        if(c=='0'){
            tot_0++;
        }
    }
    int ones_so_far=0;
    int zeros_so_far=0;
    bool alice_wins=false;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            int zeros_after=tot_0-zeros_so_far;
            if(zeros_after%2!=0){
                alice_wins=true;
                break;
            }
            ones_so_far++;
        } 
        else{ 
            if(ones_so_far%2!=0){
                alice_wins=true;
                break;
            }
            zeros_so_far++;
        }
    }
    if(alice_wins)
        cout<<"Alice"<<endl;
    else
        cout<<"Bob"<<endl;
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