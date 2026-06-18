#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
      vector<ll> b(n);
    for (int i = 0; i < n; i++) 
        cin >> b[i];
    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(b.begin(), b.end(), a[i]);
        if (it == b.end()) {
            cout << -1 << "
";
            return;
        }
        L[i] = distance(b.begin(), it);
    }
    vector<int> pos_of_value(n, -1);
    vector<bool> filled(n, false);
    for (int j = 0; j < n; j++) {
        int chosen_i = -1;
        for (int i = 0; i < n; i++) {
            if (!filled[i] && L[i] <= j) {
                chosen_i = i;
                break; 
            }
        }
        if (chosen_i == -1) {
            cout<<-1<<endl;
            return;
        }
        pos_of_value[j] = chosen_i;
        filled[chosen_i] = true;
    }
    vector<int> sigma(n);
    for (int j = 0; j < n; j++) {
        sigma[pos_of_value[j]] = j;
    }
    ll inversions = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) {
            if (sigma[i] > sigma[k]) {
                inversions++;
            }
        }
    }
    cout<<inversions<<endl;
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