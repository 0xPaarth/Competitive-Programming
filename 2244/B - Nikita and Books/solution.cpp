#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
 long long current_sum=0;
    bool possible=true;
    for (long long i=0;i<n;++i){
        long long a;
        cin>>a;
        if(possible){
            current_sum+=a;
            long long required_sum=(i+1)*(i+2)/2;
            if(current_sum<required_sum){
                possible=false;
            }
        }
    }
     if(possible)
        cout<<"YES
";
    else
        cout<<"NO
";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
        while (t--)
            solve();
       return 0;
}