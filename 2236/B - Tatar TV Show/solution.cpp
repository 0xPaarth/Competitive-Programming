#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> count1(k, 0);
      for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1[i % k]++;
        }
    }
    for (int i = 0; i < k; i++) {
        if (count1[i] % 2 != 0) {
            cout << "NO"<<endl;
            return;
        }
    }
       cout << "YES"<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
    cin >> t;
    while (t--) {
        solve();
    }
       return 0;
}