#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   cin>>t; 
        while (t--) {
          int n, c;
    cin>>n>>c;
      vector<int> a(n);
    ll sum_a=0;
    for(int i =0;i<n;++i) {
        cin>>a[i];
        sum_a+=a[i];
    }
      vector<int> b(n);
    ll sum_b=0;
    for (int i=0;i<n;++i) {
        cin>>b[i];
        sum_b += b[i];
    }
    bool possible_without_reorder = true;
    for (int i=0;i<n;++i) {
        if (a[i]<b[i]) {
            possible_without_reorder=false;
            break;
        }
    }
    ll min_time = -1;
    if (possible_without_reorder) {
        min_time=sum_a-sum_b;
    }
    vector<int> sorted_a = a;
    vector<int> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
     bool possible_with_reorder = true;
    for(int i=0;i<n;++i) {
        if(sorted_a[i]<sorted_b[i]) {
            possible_with_reorder = false;
            break;
        }
    }
        if(possible_with_reorder){
        ll cost_with_reorder=c+(sum_a-sum_b);
        if(min_time==-1||cost_with_reorder<min_time) {
            min_time=cost_with_reorder;
        }
    }
    cout<<min_time << "
";
            }
    return 0;
}