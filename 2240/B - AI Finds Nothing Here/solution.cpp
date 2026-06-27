#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll power(ll base,ll exp){
    ll res=1;
    ll MOD=998244353;
    base%=MOD;
    while(exp>0){
        if (exp % 2 == 1)
         res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}
void solve() {
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    ll  total_elements=n*m;
    ll total_equations=(n-r+1)*(m-c+1);
    ll free_vars=total_elements-total_equations;
    cout << power(2, free_vars) << "
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