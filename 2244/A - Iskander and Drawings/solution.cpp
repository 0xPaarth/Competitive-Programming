#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int max_len = 0;
    int current_len = 0;
    for(int i=0; i<n;++i){
        if(s[i]=='#'){
            current_len++;
        }else{
            max_len=max(max_len, current_len);
            current_len=0;
        }
    }
    max_len=max(max_len, current_len);
    int time_required=(max_len+1)/2;
    cout<<time_required<<"
";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}