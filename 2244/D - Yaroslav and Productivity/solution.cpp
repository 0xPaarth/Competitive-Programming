#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> b(m);
    for (int i=0;i<m;i++){
        cin>>b[i];
        b[i]--;
    }
    sort(b.begin(), b.end());
    long long total_productivity = 0;
    int prev_idx = 0;
   for(int i=0;i<m;i++) {
      long long current_sum = 0;
        for(int j=prev_idx;j<=b[i];j++) 
            current_sum+=a[j];
        total_productivity += abs(current_sum);
        prev_idx = b[i] + 1;
    }
    for(int j=prev_idx;j<n;j++)
        total_productivity += a[j];
      cout<<total_productivity<<"
";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
        while(t--)
            solve();
    return 0;
}