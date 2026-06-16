#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    
    for (auto &i : a) {
        cin >> i;
        i %= m; 
        if (i == 0) {
            cout << "YES
";
            return 0;
        }
    }
    
    if (n >= m) {
        cout << "YES
";
        return 0;
    }
    
    vector<bool> dp(m, false), next_dp(m, false);
    
    for (ll i = 0; i < n; i++) {
        next_dp = dp;
        for (ll j = 0; j < m; j++) {
            if (dp[j]) {
                next_dp[(j + a[i]) % m] = true;
            }
        }
        next_dp[a[i]] = true; 
        dp = next_dp;
        
        if (dp[0]) {
            cout << "YES
";
            return 0;
        }
    }
    
    cout << "NO
";
    return 0;
}