#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,q;
    cin>>n>>q;
    vector<pair<int, int>>a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i;
    }
 sort(a.begin(),a.end());
    int max_d = 0;
    for(int i=0;i<n;i++){
        max_d=max(max_d,i^a[i].second);
    }
    if(max_d==0)
        cout<<0<<"
";
    else{
       int p=31-__builtin_clz(max_d);
        cout<<(1<<p)<<"
";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
     cin>>t;
        while (t--)
            solve();
    return 0;
}