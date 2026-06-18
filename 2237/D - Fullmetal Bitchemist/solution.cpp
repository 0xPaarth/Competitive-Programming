#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll total_substrings = n * (n + 1) / 2;
   ll val_zero_count = 0;
    ll count[3] = {1, 0, 0}; 
    ll pref = 0;
    for (ll i = 0; i < n; ++i) {
        ll val = (s[i] == '0' ? 1 : 2);
        pref = (pref + val) % 3;
        val_zero_count += count[pref];
        count[pref]++;
    }
 
    ll alt_count = 0;
    ll len = 1;
    auto get_odd_alt = [](ll L) -> ll{
        ll h = L / 2;
        if (L % 2 == 0) {
            return h * (h - 1);
        } else {
            return h * h;
        }
    };
    for (ll i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            len++;
        } else {
            alt_count += get_odd_alt(len);
            len = 1;
        }
    }
  
    alt_count += get_odd_alt(len);
    ll ans = total_substrings - val_zero_count - alt_count;
    cout << ans <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}