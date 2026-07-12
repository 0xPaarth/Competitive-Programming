#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i<= n;++i) {
        if (i % 2 == 1) {
            cout << i + 1;
        } else {
            cout << i - 1;
        }
        cout << (i == n ? "" : " ");
    }
    cout << "
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