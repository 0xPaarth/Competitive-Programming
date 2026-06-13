#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> C(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        C[x]++;
    }
    vector<int> P(n + 1, 0);
    int window_sum = 0;
    for (int v = n; v >= 1; v--) {
        if (v + k + 1 <= n) {
            window_sum -= P[v + k + 1];
        }
         bool canJump = (window_sum > 0);
         if (C[v] > 0){
            bool goodJump = (!canJump) && (C[v] % 2 != 0);
            P[v] = goodJump ? 1 : 0;
        } else {
            P[v] = 0; 
        }
        window_sum += P[v];
    }
    for (int x = 1; x <= n; x++) {
        if (C[x] > 0 && P[x] == 0) {
            cout << "YES
";
            return;
        }
    }
    
    cout << "NO
";
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