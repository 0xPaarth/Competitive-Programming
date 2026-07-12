#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int MAXN=200005;
long long p2[MAXN];
void precompute(){
    p2[0]=1;
    for(int i=1;i<MAXN;i++){
        p2[i]=(p2[i-1]*2)%MOD;
    }
}
void solve(){
    int n;
    cin>>n;
    int n_minus=0;
    vector<int>pos;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1)
            n_minus++;
        else
        pos.push_back(x);
    }
    long long W0=1;
    long long C=0;
     if(!pos.empty()){
        vector<pair<int,int>>freqs;
        int current_val=pos[0];
        int current_count=1;
      for(size_t i = 1;i<pos.size();i++){
            if(pos[i]==current_val){
                current_count++;
            }else{
                freqs.push_back({current_val, current_count});
                current_val = pos[i];
                current_count = 1;
            }
        }
        freqs.push_back({current_val, current_count});
        for(size_t i=0;i<freqs.size();i++){
            W0=(W0*p2[freqs[i].second-1])%MOD;
        }
        for(size_t i=0;i+1<freqs.size();i++){
            if(freqs[i+1].first==freqs[i].first+1){
                C++;
            }
        }
    }
    long long E_minus=(n_minus > 0)?p2[n_minus-1]:1;
    long long O_minus=(n_minus > 0)?p2[n_minus-1]:0;
 
    long long ans = (E_minus + (O_minus * (C % MOD)) % MOD) % MOD;
    ans = (ans * W0) % MOD;
   cout<<ans<<"
";
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin>>t;
    while(t--)
        solve();
      return 0;
}