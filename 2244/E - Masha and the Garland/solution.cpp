#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pref(n, 0);
    for (int i = 0; i < n - 1; ++i) {
        pref[i + 1] = pref[i] + (s[i] == s[i + 1] ? 1 : 0);
    }
    for (int i = 0; i < q; ++i) {
        int l, r, k;
        cin >> l >> r >> k;
      if (l == r) {
            cout << "YES
";
            continue;
        }
        int K=pref[r-1]-pref[l-1];
        int required_ops=(K+1)/2;
        if(required_ops<= k)
            cout<<"YES
";
        else
            cout<<"NO
";
    }
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