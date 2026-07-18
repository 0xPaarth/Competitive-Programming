#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin>>n>>k;
    long long min_k=2*n-2;
    if(k <min_k||k%2!=0) {
        cout << -1 << "
";
        return;
    }
     long long K=(k-min_k)/2;
    vector<int> S1, S2;
    for(int i=2;i<=n;i++){
        if(i%2==0) 
            S1.push_back(i);
        else 
        S2.push_back(i);
    }
    vector<pair<int, int>>edges;
    vector<int> path(n+1,0);
    int m=0;
    path[0] = 1;
    for(int u:S1){
        long long add=min(K,(long long)m);
        edges.push_back({path[add], u});
        path[add+1]=u;
        if(add+1>m){
            m=add+1;
        }
        K-=add;
    }
    m=0;
    path[0] = 1;
    for(int u:S2){
        long long add=min(K,(long long)m);
        edges.push_back({path[add], u});
        path[add+1]=u;
        if(add+1>m) {
            m=add+1;
        }
        K-=add;
    }
    
     if(K>0)
        cout<<-1<<"
";
         else{
        for(auto p:edges)
            cout<<p.first<<" "<<p.second<<"
"; 
    }
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