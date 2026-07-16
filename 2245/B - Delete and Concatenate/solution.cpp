#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long c;
    cin>>n>>c;
   vector<long long> a(n);
    long long sum=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
   long long max_score = sum - (long long)n * c;
   sort(a.begin(),a.end());
   int max_pairs=n/2;
    for (int i=0;i<max_pairs;i++){
            if(a[i]<c){
            max_score+=(c-a[i]);
        } else 
             break; 
    }
cout<<max_score<<"
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