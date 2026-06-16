#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
    cin >> n;
  vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
   int m = min(n, 2000);
   unordered_map<int, pair<int, int>> mp;
    mp.reserve(4000000);
    mp.max_load_factor(0.7);
 
    for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
            int s = a[i] + a[j];
 
            if (!mp.count(s)) {
                mp[s] = {i, j};
            } else {
                auto [x, y] = mp[s];
 
                if (x != i && x != j && y != i && y != j) {
                    cout << "YES
";
                    cout << x << " " << y << " " << i << " " << j << "
";
                    return 0;
                }
            }
        }
    }
    cout << "NO
";
    return 0;
}
 