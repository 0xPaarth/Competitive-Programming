#include <bits/stdc++.h>
using namespace std;
using ll =long long;
void solve(){
    ll n;
    cin>>n;
    ll total_triples = 0;
    for(ll l=1,r;l<=n;l=r+1){
        ll v=n/l;
        r=n/v;
        if(r>n)
            r=n; 
         ll block_size = r - l + 1;
        total_triples+=block_size*(v*v);
    }
    cout<<total_triples<<"
";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t;
cin >> t; 
        while (t--) 
            solve();
            return 0;
}