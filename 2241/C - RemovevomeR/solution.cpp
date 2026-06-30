#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
         int trans=0;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) 
                trans++;
        }
        cout<<(trans==1?2:1)<<endl;
    }
    return 0;
}