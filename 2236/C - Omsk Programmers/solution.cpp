#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a,b,x;
    cin>>a>>b>>x;
    vector<pair<ll, int>> states_a;
    ll curr_a = a;
    int div_a = 0;
    states_a.push_back({curr_a, div_a});
    while (curr_a>0) {
        curr_a/=x;
        div_a++;
        states_a.push_back({curr_a,div_a});
    }
    vector<pair<ll, int>> states_b; 
    long long curr_b = b;
    int div_b = 0;
    states_b.push_back({curr_b,div_b});
    while (curr_b>0){
        curr_b/=x;
        div_b++;
        states_b.push_back({curr_b, div_b});
    }
    long long min_ops = 2e18;
    for (auto& pair_a : states_a) {
        long long val_a = pair_a.first;
        int ops_a = pair_a.second;
         for (const auto& pair_b : states_b) {
            long long val_b = pair_b.first;
            int ops_b = pair_b.second;
            long long target = max(val_a, val_b);
            long long current_ops = ops_a + ops_b + (target - val_a) + (target - val_b);
            min_ops = min(min_ops, current_ops);
        }
    }
    
    cout<<min_ops<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
    cin >> t;
    while (t--) {
        solve();
    }
     return 0;
}